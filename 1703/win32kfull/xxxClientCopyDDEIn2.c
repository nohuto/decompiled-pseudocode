/*
 * XREFs of xxxClientCopyDDEIn2 @ 0x1C020012C
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C01FFD10 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEIn2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v9[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v10; // [rsp+90h] [rbp-28h]

  v9[0] = *(_OWORD *)a1;
  v9[1] = *(_OWORD *)(a1 + 16);
  v9[2] = *(_OWORD *)(a1 + 32);
  v9[3] = *(_OWORD *)(a1 + 48);
  v10 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(61LL);
  v4 = KeUserModeCallback(61LL, v9, 72LL, v8, &v7);
  EtwTraceEndCallback(61LL);
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
