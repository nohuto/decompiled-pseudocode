/*
 * XREFs of ACPIRootIrpStartDevice @ 0x1C00AC0A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitStartACPI @ 0x1C00AC2D8 (ACPIInitStartACPI.c)
 *     RtlDuplicateCmResourceList @ 0x1C00AC41C (RtlDuplicateCmResourceList.c)
 */

__int64 __fastcall ACPIRootIrpStartDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  const char *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rbx
  const char *v8; // r8
  const char *v9; // rcx
  __int64 v10; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax
  NTSTATUS Status; // edi
  _IO_STACK_LOCATION *v14; // rax
  unsigned __int8 MinorFunction; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  __int64 v19; // rax
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = byte_1C0067B08;
  LOBYTE(v6) = 0;
  v7 = DeviceExtension;
  v8 = byte_1C0067B08;
  v9 = byte_1C0067B08;
  if ( DeviceExtension )
  {
    v6 = DeviceExtension;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v6 + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v6 + 568);
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x19u,
    (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
    (char)a2,
    v6,
    v8,
    v9);
  _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x200uLL);
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
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v14 = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = v14->MinorFunction;
  if ( Status >= 0 )
  {
    v16 = v14->Parameters.WMI.ProviderId ? RtlDuplicateCmResourceList() : 0LL;
    *(_QWORD *)(v7 + 632) = 0LL;
    *(_QWORD *)(v7 + 624) = v16;
    Status = ACPIInitStartACPI(a1);
    if ( Status >= 0 )
      *(_DWORD *)(v7 + 320) = 2;
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  v17 = *(_QWORD *)(v7 + 8);
  v18 = byte_1C0067B08;
  if ( (v17 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v7 + 560);
    if ( (v17 & 0x400000000000LL) != 0 )
      v18 = *(const char **)(v7 + 568);
  }
  v19 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v19 = 26LL;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x1Au,
    (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
    (char)a2,
    ACPIDispatchPnpTableNames[v19],
    Status,
    v7,
    v5,
    v18);
  return (unsigned int)Status;
}
