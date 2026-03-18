/*
 * XREFs of ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C001ADD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0029B28 (ACPIInternalDecrementIrpReferenceCount.c)
 */

__int64 __fastcall ACPIDeviceIrpDelayedDeviceOffRequest(__int64 a1, IRP *a2, int a3)
{
  const char *v4; // rax
  char v5; // r8
  const char *v8; // rdx
  __int64 v9; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v11; // rax

  v4 = (const char *)&unk_1C005B1F0;
  v5 = 0;
  v8 = (const char *)&unk_1C005B1F0;
  if ( a1 )
  {
    v5 = a1;
    v9 = *(_QWORD *)(a1 + 8);
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(a1 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(a1 + 568);
    }
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x1Cu,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    (char)a2,
    a3,
    v5,
    v4,
    v8);
  if ( a3 >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 680));
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v11 = a2->Tail.Overlay.CurrentStackLocation;
    v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIDeviceIrpDeviceFilterRequest;
    v11[-1].Context = ACPIDeviceIrpCompleteRequest;
    v11[-1].Control = -32;
    PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 728), a2);
  }
  else
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
