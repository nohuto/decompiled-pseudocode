/*
 * XREFs of xxxClientGetDDEHookData @ 0x1C0200AE8
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C01E5BD0 (xxxDDETrackPostHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int128 v13; // xmm3
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  int v17; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v18[5]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v19[10]; // [rsp+60h] [rbp-68h] BYREF

  memset(v19, 0, 0x48uLL);
  v19[1] = a2;
  LODWORD(v19[0]) = a1;
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
  EtwTraceBeginCallback(71LL);
  v9 = KeUserModeCallback(71LL, v19, 72LL, v18, &v17);
  EtwTraceEndCallback(71LL);
  EnterCrit(0LL, 1LL);
  if ( v9 < 0 || v17 != 24 )
    return 0LL;
  v10 = (__int64 *)v18[0];
  if ( (unsigned __int64)(v18[0] + 8LL) < v18[0] || (unsigned __int64)(v18[0] + 8LL) > W32UserProbeAddress )
    v10 = (__int64 *)W32UserProbeAddress;
  v11 = *v10;
  v18[1] = *v10;
  v12 = *(_QWORD *)(v18[0] + 16LL);
  if ( v12 + 56 < v12 || v12 + 56 > W32UserProbeAddress )
    v12 = W32UserProbeAddress;
  v13 = *(_OWORD *)(v12 + 16);
  v14 = *(_OWORD *)(v12 + 32);
  v15 = *(_QWORD *)(v12 + 48);
  *(_OWORD *)a3 = *(_OWORD *)v12;
  *(_OWORD *)(a3 + 16) = v13;
  *(_OWORD *)(a3 + 32) = v14;
  *(_QWORD *)(a3 + 48) = v15;
  return (unsigned int)v11;
}
