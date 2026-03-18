/*
 * XREFs of ACPIFilterIrpRemoveDevice @ 0x1C0024910
 * Callers:
 *     ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C00245B0 (ACPIDispatchIrpDepFilterRemoveDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C00282F4 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0028704 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     AcpiDeletePciBusInterface @ 0x1C007F900 (AcpiDeletePciBusInterface.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     IsPciBusExtension @ 0x1C007FD68 (IsPciBusExtension.c)
 */

__int64 __fastcall ACPIFilterIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r15
  __int64 DeviceExtension; // rbx
  int v5; // eax
  bool v6; // bp
  char v7; // r12
  volatile signed __int64 *v8; // rsi
  __int64 v9; // r15
  bool v10; // r13
  __int64 v11; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v13; // rax
  NTSTATUS Status; // edi
  __int64 v15; // rax
  const char *v16; // rcx
  const char *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // rcx
  unsigned int v21; // ebx
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int8 v24; // [rsp+B8h] [rbp+10h]

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  v24 = MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInitDeleteChildDeviceList(DeviceExtension);
  v5 = *(_DWORD *)(DeviceExtension + 320);
  v6 = 0;
  if ( !v5 )
    v6 = *(_DWORD *)(DeviceExtension + 324) == 0;
  v7 = 0;
  if ( v5 == 5 || *(char *)(DeviceExtension + 8) < 0 )
  {
    v7 = 1;
    v8 = (volatile signed __int64 *)(DeviceExtension + 8);
  }
  else
  {
    v8 = (volatile signed __int64 *)(DeviceExtension + 8);
    if ( !v6 )
    {
      v9 = *(_QWORD *)(DeviceExtension + 952) & 0x8000LL;
      v10 = (*(_QWORD *)(DeviceExtension + 952) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBusExtension(DeviceExtension) || v9 )
      {
        LOBYTE(v11) = v10;
        EnableDisableRegions(*(_QWORD *)(DeviceExtension + 712), 0LL, v11);
        v8 = (volatile signed __int64 *)(DeviceExtension + 8);
      }
      MinorFunction = v24;
    }
  }
  AcpiDeletePciBusInterface(DeviceExtension);
  ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(_DWORD *)(DeviceExtension + 320) != 5 )
    _InterlockedOr64(v8, 0x800uLL);
  *(_DWORD *)(DeviceExtension + 320) = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v13 = a2->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v13[-1].Context = &Event;
  v13[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v15 = *(_QWORD *)(DeviceExtension + 8);
  v16 = (const char *)&unk_1C005B1F0;
  v17 = (const char *)&unk_1C005B1F0;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v16 = *(const char **)(DeviceExtension + 560);
    if ( (v15 & 0x400000000000LL) != 0 )
      v17 = *(const char **)(DeviceExtension + 568);
  }
  v18 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v18 = 26LL;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xCu,
    0x16u,
    (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
    (char)a2,
    ACPIDispatchPnpTableNames[v18],
    Status,
    DeviceExtension,
    v16,
    v17);
  if ( Status >= 0 )
  {
    if ( !v7 && !v6 )
    {
      LOBYTE(v19) = 1;
      ACPIInitStopDevice(DeviceExtension, v19);
    }
    v20 = *(void **)(DeviceExtension + 112);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *(_QWORD *)(DeviceExtension + 112) = 0LL;
    }
    ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  }
  v21 = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return v21;
}
