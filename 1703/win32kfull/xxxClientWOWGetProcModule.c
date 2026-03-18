/*
 * XREFs of xxxClientWOWGetProcModule @ 0x1C00ECD18
 * Callers:
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C0116768 (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientWOWGetProcModule(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]

  v8 = a1;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(90LL);
  v4 = KeUserModeCallback(90LL, &v8, 8LL, &v9, &v7);
  EtwTraceEndCallback(90LL);
  EnterCrit(0LL, 1LL);
  if ( v4 < 0 || v7 != 24 )
    return 0LL;
  v5 = (__int64 *)v9;
  if ( v9 + 8 < v9 || v9 + 8 > W32UserProbeAddress )
    v5 = (__int64 *)W32UserProbeAddress;
  result = *v5;
  v10 = *v5;
  return result;
}
