/*
 * XREFs of ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C0049070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C000DCF4 (WPP_RECORDER_SF_qLqss.c)
 */

LONG __fastcall ACPIDeviceIrpDelayedDeviceOnRequest(__int64 a1, IRP *a2, int a3)
{
  const char *v4; // rax
  char v5; // r8
  const char *v8; // rdx
  __int64 v9; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v11; // rax

  v4 = byte_1C0066CD0;
  v5 = 0;
  v8 = byte_1C0066CD0;
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
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    (char)a2,
    a3,
    v5,
    v4,
    v8);
  *(_BYTE *)(a1 + 508) = 0;
  if ( a3 >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 680));
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v11 = a2->Tail.Overlay.CurrentStackLocation;
    v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIBuildRegOnRequest;
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
