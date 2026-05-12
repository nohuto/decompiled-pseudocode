/*
 * XREFs of PortPassThroughSendAsync @ 0x1C006A0A4
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0069B00 (PortPassThroughExSendAsync.c)
 * Callees:
 *     PortPassThroughFreeIrp @ 0x1C00017BC (PortPassThroughFreeIrp.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0030950 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughFreeSrb @ 0x1C0047E0C (PortPassThroughFreeSrb.c)
 *     PortpEnableCancel @ 0x1C00482D4 (PortpEnableCancel.c)
 *     PortPassThroughBuildIrp @ 0x1C005F008 (PortPassThroughBuildIrp.c)
 *     PortPassThroughBuildSrb @ 0x1C00697A0 (PortPassThroughBuildSrb.c)
 *     PortPassThroughGetDataBuffer @ 0x1C006A088 (PortPassThroughGetDataBuffer.c)
 *     PortPassThroughValidate @ 0x1C006A420 (PortPassThroughValidate.c)
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
  void *DataBuffer; // rax
  int v14; // ebx
  KPROCESSOR_MODE RequestorMode; // cl
  PIRP v16; // rsi
  _QWORD *v17; // rbp
  _BYTE *PoolWithTag; // rax
  __int64 v20; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _BYTE v22[12]; // [rsp+30h] [rbp-78h] BYREF
  ULONG v23; // [rsp+3Ch] [rbp-6Ch]

  v8 = a3;
  v11 = 0LL;
  v12 = PortPassThroughValidate((_DWORD)DeviceObject, (_DWORD)a2, a3, a5, a6, (__int64)v22);
  if ( v12 < 0 )
    goto LABEL_13;
  DataBuffer = (void *)PortPassThroughGetDataBuffer((__int64)v22, (__int64)a2, v8);
  v14 = (int)DataBuffer;
  if ( v8 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v16 = PortPassThroughBuildIrp((__int64)DeviceObject, DataBuffer, v23, v22[8] != 0, RequestorMode);
  if ( !v16 )
  {
    v12 = -1073741670;
LABEL_13:
    a2->IoStatus.Status = v12;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)v12;
  }
  v17 = PortPassThroughBuildSrb((__int64)v22, v14);
  if ( !v17
    || (v16->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v17,
        v17[6] = v16,
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v11 = PoolWithTag) == 0LL) )
  {
    v12 = -1073741670;
LABEL_9:
    PortPassThroughFreeIrp(v16);
    if ( v17 )
      PortPassThroughFreeSrb(v17);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x69506C50u);
    goto LABEL_13;
  }
  *((_QWORD *)PoolWithTag + 3) = v17;
  *((_QWORD *)PoolWithTag + 1) = v16;
  v20 = (__int64)PoolWithTag;
  *PoolWithTag = v8;
  *((_QWORD *)PoolWithTag + 2) = a2;
  *((_QWORD *)PoolWithTag + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)PoolWithTag + 5) = a8;
  CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  CurrentStackLocation[-1].Context = v11;
  CurrentStackLocation[-1].Control = -32;
  v12 = PortpEnableCancel((__int64)a2, v20);
  if ( v12 != 259 )
    goto LABEL_9;
  IofCallDriver(DeviceObject, v16);
  return 259LL;
}
