/*
 * XREFs of xxxClientGetCharsetInfo @ 0x1C01149AC
 * Callers:
 *     EditionInitSystemCharsetInfoForLayout @ 0x1C0114920 (EditionInitSystemCharsetInfoForLayout.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxClientGetCharsetInfo(int a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  int v13; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v15[10]; // [rsp+58h] [rbp-40h] BYREF

  memset(v15, 0, 0x24uLL);
  v15[0] = a1;
  if ( gdwInAtomicOperation )
  {
    v5 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5, v4, gdwInAtomicOperation, v6);
  EtwTraceBeginCallback(69LL);
  v7 = KeUserModeCallback(69LL, v15, 36LL, v14, &v13);
  EtwTraceEndCallback(69LL);
  EnterCrit(0LL, 1LL);
  if ( v7 < 0 || v13 != 24 )
    return 0LL;
  v8 = (__int64 *)v14[0];
  if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || (unsigned __int64)(v14[0] + 8LL) > W32UserProbeAddress )
    v8 = (__int64 *)W32UserProbeAddress;
  v9 = *v8;
  v14[1] = *v8;
  v10 = *(_OWORD **)(v14[0] + 16LL);
  if ( v10 + 2 < v10 || (unsigned __int64)(v10 + 2) > W32UserProbeAddress )
    v10 = (_OWORD *)W32UserProbeAddress;
  v11 = v10[1];
  *a2 = *v10;
  a2[1] = v11;
  return (unsigned int)v9;
}
