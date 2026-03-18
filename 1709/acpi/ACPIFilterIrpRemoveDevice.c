/*
 * XREFs of ACPIFilterIrpRemoveDevice @ 0x1C0001010
 * Callers:
 *     ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C004E0E0 (ACPIDispatchIrpDepFilterRemoveDevice.c)
 * Callees:
 *     ACPIInitDeleteChildDeviceList @ 0x1C000123C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0011024 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0011260 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitStopDevice @ 0x1C0085A38 (ACPIInitStopDevice.c)
 *     AcpiDeletePciBusInterface @ 0x1C0085B54 (AcpiDeletePciBusInterface.c)
 *     IsPciBusExtension @ 0x1C0085C04 (IsPciBusExtension.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 */

__int64 __fastcall ACPIFilterIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rbx
  int v5; // eax
  bool v6; // di
  char v7; // r14
  __int64 v8; // rbp
  bool v9; // r15
  __int64 v10; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax
  NTSTATUS Status; // ebp
  __int64 v14; // rax
  void *v15; // rcx
  void *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  void *v19; // rcx
  unsigned int v20; // ebx
  __int64 v22; // [rsp+50h] [rbp-48h]
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
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
  }
  else if ( !v6 )
  {
    v8 = *(_QWORD *)(DeviceExtension + 952) & 0x8000LL;
    v9 = (*(_QWORD *)(DeviceExtension + 952) & 0x8000) != 0;
    if ( (unsigned __int8)IsPciBusExtension(DeviceExtension) || v8 )
    {
      LOBYTE(v10) = v9;
      EnableDisableRegions(*(_QWORD *)(DeviceExtension + 712), 0LL, v10);
    }
  }
  AcpiDeletePciBusInterface(DeviceExtension);
  ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(_DWORD *)(DeviceExtension + 320) != 5 )
    _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 0x800uLL);
  *(_DWORD *)(DeviceExtension + 320) = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v12 = a2->Tail.Overlay.CurrentStackLocation;
  v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v12[-1].Context = &Event;
  v12[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v14 = *(_QWORD *)(DeviceExtension + 8);
  v15 = &unk_1C0067B08;
  v16 = &unk_1C0067B08;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v15 = *(void **)(DeviceExtension + 560);
    if ( (v14 & 0x400000000000LL) != 0 )
      v16 = *(void **)(DeviceExtension + 568);
  }
  v22 = (__int64)v16;
  LOBYTE(v16) = 4;
  v17 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v17 = 26LL;
  WPP_RECORDER_SF_qsLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v16,
    12,
    22,
    (__int64)&WPP_a733ebc0c0353af3a414eb8cb5954dc9_Traceguids,
    (char)a2,
    (__int64)ACPIDispatchPnpTableNames[v17],
    Status,
    DeviceExtension,
    (__int64)v15,
    v22);
  if ( Status >= 0 )
  {
    if ( !v7 && !v6 )
    {
      LOBYTE(v18) = 1;
      ACPIInitStopDevice(DeviceExtension, v18);
    }
    v19 = *(void **)(DeviceExtension + 112);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(DeviceExtension + 112) = 0LL;
    }
    ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  }
  v20 = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return v20;
}
