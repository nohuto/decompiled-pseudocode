/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C0006858
 * Callers:
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C0006710 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C001DE94 (Interrupter_DeferredWorkProcessor.c)
 *     Isoch_CommonBufferCallback @ 0x1C00279A0 (Isoch_CommonBufferCallback.c)
 *     UsbDevice_EnableCompletion @ 0x1C0033DA0 (UsbDevice_EnableCompletion.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0055838 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_GetDeviceEnumerator @ 0x1C00574A8 (Controller_GetDeviceEnumerator.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0059314 (Controller_TelemetryOkToGenerateReport.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_L(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va);
}
