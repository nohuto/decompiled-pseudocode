/*
 * XREFs of xxxClientCharToWchar @ 0x1C01FFC18
 * Callers:
 *     EditionClientCharToWchar @ 0x1C01CD7A0 (EditionClientCharToWchar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientCharToWchar(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 result; // rax
  __int16 v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+52h] [rbp+Ah]
  int v9; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  v7 = a1;
  v8 = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(82LL);
  v4 = KeUserModeCallback(82LL, &v7, 4LL, &v10, &v9);
  EtwTraceEndCallback(82LL);
  EnterCrit(0LL, 1LL);
  if ( v4 < 0 || v9 != 24 )
    return 95LL;
  v5 = (__int64 *)v10;
  if ( v10 + 8 < v10 || v10 + 8 > W32UserProbeAddress )
    v5 = (__int64 *)W32UserProbeAddress;
  result = *v5;
  v11 = *v5;
  return result;
}
