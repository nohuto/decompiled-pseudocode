/*
 * XREFs of PortPassThroughSendAsync @ 0x1C0066750
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00661B4 (PortPassThroughExSendAsync.c)
 * Callees:
 *     PortPassThroughFreeIrp @ 0x1C00019D0 (PortPassThroughFreeIrp.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C002FB40 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughFreeSrb @ 0x1C004741C (PortPassThroughFreeSrb.c)
 *     PortpEnableCancel @ 0x1C00478D4 (PortpEnableCancel.c)
 *     PortPassThroughBuildIrp @ 0x1C005D008 (PortPassThroughBuildIrp.c)
 *     PortPassThroughBuildSrb @ 0x1C0065E54 (PortPassThroughBuildSrb.c)
 *     PortPassThroughGetDataBuffer @ 0x1C0066734 (PortPassThroughGetDataBuffer.c)
 *     PortPassThroughValidate @ 0x1C0066ACC (PortPassThroughValidate.c)
 */

__int64 __fastcall PortPassThroughSendAsync(
        PDEVICE_OBJECT DeviceObject,
        IRP *a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v8; // r15
  void *v11; // rdi
  int v12; // ebx
  void *DataBuffer; // rbx
  KPROCESSOR_MODE RequestorMode; // cl
  PIRP v15; // rsi
  _QWORD *v16; // rbp
  _BYTE *PoolWithTag; // rax
  __int64 v19; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _BYTE v21[12]; // [rsp+30h] [rbp-78h] BYREF
  ULONG v22; // [rsp+3Ch] [rbp-6Ch]

  v8 = a3;
  v11 = 0LL;
  v12 = PortPassThroughValidate((_DWORD)DeviceObject, (_DWORD)a2, a3, a5, a6, (__int64)v21);
  if ( v12 < 0 )
    goto LABEL_13;
  DataBuffer = (void *)PortPassThroughGetDataBuffer((__int64)v21, (__int64)a2, v8);
  if ( v8 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v15 = PortPassThroughBuildIrp((__int64)DeviceObject, DataBuffer, v22, v21[8] != 0, RequestorMode);
  if ( !v15 )
  {
    v12 = -1073741670;
LABEL_13:
    a2->IoStatus.Status = v12;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)v12;
  }
  v16 = PortPassThroughBuildSrb((__int64)v21, (int)DataBuffer);
  if ( !v16
    || (v15->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v16,
        v16[6] = v15,
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v11 = PoolWithTag) == 0LL) )
  {
    v12 = -1073741670;
LABEL_9:
    PortPassThroughFreeIrp(v15);
    if ( v16 )
      PortPassThroughFreeSrb((__int64)v16);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x69506C50u);
    goto LABEL_13;
  }
  *((_QWORD *)PoolWithTag + 3) = v16;
  *((_QWORD *)PoolWithTag + 1) = v15;
  v19 = (__int64)PoolWithTag;
  *PoolWithTag = v8;
  *((_QWORD *)PoolWithTag + 2) = a2;
  *((_QWORD *)PoolWithTag + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)PoolWithTag + 5) = a8;
  CurrentStackLocation = v15->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  CurrentStackLocation[-1].Context = v11;
  CurrentStackLocation[-1].Control = -32;
  v12 = PortpEnableCancel((__int64)a2, v19);
  if ( v12 != 259 )
    goto LABEL_9;
  IofCallDriver(DeviceObject, v15);
  return 259LL;
}
