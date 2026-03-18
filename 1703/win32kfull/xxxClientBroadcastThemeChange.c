/*
 * XREFs of xxxClientBroadcastThemeChange @ 0x1C010F7C8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientBroadcastThemeChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+50h] [rbp-28h] BYREF

  v9[0] = a1;
  v9[1] = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(122LL);
  v4 = KeUserModeCallback(122LL, v9, 16LL, v8, &v7);
  EtwTraceEndCallback(122LL);
  EnterCrit(0LL, 1LL);
  if ( v4 < 0 || v7 != 24 )
    return 0LL;
  v5 = (__int64 *)v8[0];
  if ( (unsigned __int64)(v8[0] + 8LL) < v8[0] || (unsigned __int64)(v8[0] + 8LL) > W32UserProbeAddress )
    v5 = (__int64 *)W32UserProbeAddress;
  result = *v5;
  v8[1] = *v5;
  return result;
}
