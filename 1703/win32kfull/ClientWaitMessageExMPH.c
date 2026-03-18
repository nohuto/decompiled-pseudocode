/*
 * XREFs of ClientWaitMessageExMPH @ 0x1C00E62E0
 * Callers:
 *     NtUserWaitMessage @ 0x1C00E6280 (NtUserWaitMessage.c)
 *     xxxWaitMessageEx @ 0x1C01BD408 (xxxWaitMessageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientWaitMessageExMPH(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 result; // rax
  _DWORD v7[8]; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]

  v7[0] = a1;
  v7[1] = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(89LL);
  v4 = KeUserModeCallback(89LL, v7, 8LL, &v9, &v8);
  EtwTraceEndCallback(89LL);
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
