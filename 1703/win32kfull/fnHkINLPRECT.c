/*
 * XREFs of fnHkINLPRECT @ 0x1C01FF500
 * Callers:
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int128 *v15; // rcx
  int v17; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-80h] BYREF
  __int128 v19; // [rsp+40h] [rbp-78h]
  _OWORD v20[3]; // [rsp+60h] [rbp-58h] BYREF

  memset(v20, 0, sizeof(v20));
  LODWORD(v20[0]) = a1;
  *((_QWORD *)&v20[0] + 1) = a2;
  v20[1] = *a3;
  *(_QWORD *)&v20[2] = a4;
  *((_QWORD *)&v20[2] + 1) = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v10, v11);
  EtwTraceBeginCallback(48LL);
  v12 = KeUserModeCallback(48LL, v20, 48LL, &v18, &v17);
  EtwTraceEndCallback(48LL);
  EnterCrit(0LL, 1LL);
  if ( v12 < 0 || v17 != 24 )
    return 0LL;
  v13 = (__int64 *)v18;
  if ( v18 + 8 < v18 || v18 + 8 > W32UserProbeAddress )
    v13 = (__int64 *)W32UserProbeAddress;
  v14 = *v13;
  *(_QWORD *)&v19 = *v13;
  v15 = *(__int128 **)(v18 + 16);
  if ( v15 + 1 < v15 || (unsigned __int64)(v15 + 1) > W32UserProbeAddress )
    v15 = (__int128 *)W32UserProbeAddress;
  v19 = *v15;
  *a3 = v19;
  return (unsigned int)v14;
}
