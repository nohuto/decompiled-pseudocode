/*
 * XREFs of fnHkINLPMSLLHOOKSTRUCT @ 0x1C010086C
 * Callers:
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall fnHkINLPMSLLHOOKSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  _QWORD *v13; // rcx
  int v15; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-70h] BYREF
  _OWORD v17[4]; // [rsp+50h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  LODWORD(v17[0]) = a1;
  *((_QWORD *)&v17[0] + 1) = a2;
  *(_DWORD *)(a3 + 20) = 0;
  v17[2] = *(_OWORD *)a3;
  v17[3] = *(_OWORD *)(a3 + 16);
  *(_QWORD *)&v17[1] = a4;
  *((_QWORD *)&v17[1] + 1) = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v10, v11);
  EtwTraceBeginCallback(46LL);
  v12 = KeUserModeCallback(46LL, v17, 64LL, &v16, &v15);
  EtwTraceEndCallback(46LL);
  EnterCrit(0LL, 1LL);
  if ( v12 < 0 || v15 != 24 )
    return 0LL;
  v13 = (_QWORD *)v16;
  if ( v16 + 8 < v16 || v16 + 8 > W32UserProbeAddress )
    v13 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v13;
}
