/*
 * XREFs of WPP_RECORDER_SF_P @ 0x1C0014F68
 * Callers:
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0010B30 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_RetrieveUrsData @ 0x1C00588A8 (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_P(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 2LL, 4LL, &WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v8, va);
}
