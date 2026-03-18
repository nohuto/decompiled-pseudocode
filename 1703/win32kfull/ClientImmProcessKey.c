/*
 * XREFs of ClientImmProcessKey @ 0x1C00CA5EC
 * Callers:
 *     xxxImmProcessKey @ 0x1C00CA748 (xxxImmProcessKey.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall ClientImmProcessKey(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 *v13; // rcx
  __int64 result; // rax
  _QWORD v15[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  __int64 v17; // [rsp+88h] [rbp+10h]

  memset(v15, 0, 0x28uLL);
  v15[0] = a1;
  v15[1] = a2;
  LODWORD(v15[2]) = a3;
  v15[3] = a4;
  LODWORD(v15[4]) = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v10, v11);
  EtwTraceBeginCallback(93LL);
  v12 = KeUserModeCallback(93LL, v15, 40LL, &v16, &a5);
  EtwTraceEndCallback(93LL);
  EnterCrit(0LL, 1LL);
  if ( v12 < 0 || a5 != 24 )
    return 0LL;
  v13 = (__int64 *)v16;
  if ( v16 + 8 < v16 || v16 + 8 > W32UserProbeAddress )
    v13 = (__int64 *)W32UserProbeAddress;
  result = *v13;
  v17 = *v13;
  return result;
}
