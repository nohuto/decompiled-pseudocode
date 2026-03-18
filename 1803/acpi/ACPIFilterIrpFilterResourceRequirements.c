/*
 * XREFs of ACPIFilterIrpFilterResourceRequirements @ 0x1C007B640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalInterruptPolarityCacheStorePolarity @ 0x1C002A0C4 (ACPIInternalInterruptPolarityCacheStorePolarity.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C0083A6C (PnpBiosUpdateResourceListWithSidebandResources.c)
 */

__int64 __fastcall ACPIFilterIrpFilterResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IO_STACK_LOCATION *v6; // rax
  unsigned int Status; // r14d
  const char *v8; // rsi
  char *v9; // rax
  const char *v10; // r8
  const char *v11; // r10
  __int64 v12; // rcx
  void *Information; // r15
  int updated; // eax
  int v15; // r13d
  char *IrpText; // rax
  const char *v17; // r8
  const char *v18; // r10
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r12
  char *v22; // rax
  const char *v23; // r8
  __int64 v25; // rax
  const char *v26; // rdx
  const char *v27; // rcx
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  PVOID P; // [rsp+B8h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v6[-1].Context = &Event;
  v6[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v8 = byte_1C005B1F0;
  if ( (int)(Status + 0x80000000) < 0 || Status == -1073741637 )
  {
    Information = (void *)a2->IoStatus.Information;
    if ( !Information )
      Information = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    updated = PnpBiosUpdateResourceListWithSidebandResources(a1, Information, &P, DeviceExtension + 112);
    v15 = updated;
    if ( updated != -1073741772 )
    {
      if ( updated >= 0 )
      {
        v19 = *(_QWORD *)(DeviceExtension + 112);
        v20 = v19 + 8;
        v21 = v19 + 8 + 32LL * *(unsigned int *)(v19 + 4);
        while ( 1 )
        {
          if ( v20 >= v21 )
          {
            if ( Information )
              ExFreePoolWithTag(Information, 0);
            Status = v15;
            a2->IoStatus.Information = (unsigned __int64)P;
            goto LABEL_19;
          }
          if ( *(_BYTE *)(v20 + 1) == 2 )
          {
            v15 = ACPIInternalInterruptPolarityCacheStorePolarity(
                    DeviceExtension,
                    *(_DWORD *)(v20 + 12),
                    *(_DWORD *)(v20 + 16));
            if ( v15 < 0 )
              break;
          }
          v20 += 32LL;
        }
        v25 = *(_QWORD *)(DeviceExtension + 8);
        v26 = byte_1C005B1F0;
        v27 = byte_1C005B1F0;
        if ( (v25 & 0x200000000000LL) != 0 )
        {
          v26 = *(const char **)(DeviceExtension + 560);
          if ( (v25 & 0x400000000000LL) != 0 )
            v27 = *(const char **)(DeviceExtension + 568);
        }
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x12u,
          (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
          (char)a2,
          v15,
          DeviceExtension,
          v26,
          v27);
        ExFreePoolWithTag(P, 0);
      }
      else
      {
        IrpText = ACPIDebugGetIrpText(v12, 0xDu);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x11u,
          (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
          (char)a2,
          IrpText,
          v15,
          DeviceExtension,
          v18,
          v17);
      }
    }
  }
  else
  {
    v9 = ACPIDebugGetIrpText(0x80000000LL, 0xDu);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x10u,
      (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
      (char)a2,
      v9,
      Status,
      DeviceExtension,
      v11,
      v10);
  }
LABEL_19:
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v8 = *(const char **)(DeviceExtension + 560);
  v22 = ACPIDebugGetIrpText(v12, 0xDu);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x13u,
    (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
    (char)a2,
    v22,
    Status,
    DeviceExtension,
    v8,
    v23);
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
