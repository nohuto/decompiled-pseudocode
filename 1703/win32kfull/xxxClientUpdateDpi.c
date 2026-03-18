/*
 * XREFs of xxxClientUpdateDpi @ 0x1C02014A4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientUpdateDpi(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h]

  v7 = a1;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(58LL);
  v4 = KeUserModeCallback(58LL, &v7, 4LL, &v9, &v8);
  EtwTraceEndCallback(58LL);
  EnterCrit(0LL, 1LL);
  if ( v4 < 0 || v8 != 24 )
    return 0LL;
  v5 = (__int64 *)v9;
  if ( v9 + 8 < v9 || v9 + 8 > W32UserProbeAddress )
    v5 = (__int64 *)W32UserProbeAddress;
  result = *v5;
  v10 = *v5;
  return result;
}
