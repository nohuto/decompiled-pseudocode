/*
 * XREFs of WPP_RECORDER_SF_DDq @ 0x1C0026EBC
 * Callers:
 *     Control_Transfer_ValidateBuffer @ 0x1C0026210 (Control_Transfer_ValidateBuffer.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0026610 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtRequestCancel @ 0x1C00269F0 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C0026B50 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_RetrieveNextStage @ 0x1C0029D28 (Isoch_RetrieveNextStage.c)
 *     Isoch_Stage_Find @ 0x1C002AAA4 (Isoch_Stage_Find.c)
 *     Isoch_TransferData_Initialize @ 0x1C002B924 (Isoch_TransferData_Initialize.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C002C660 (Isoch_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDq(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v12; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      8LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, a2, 14LL, a5, v9, (__int64 *)va);
}
