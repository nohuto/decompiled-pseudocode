/*
 * XREFs of fnHkINLPDEBUGHOOKSTRUCT @ 0x1C01FF358
 * Callers:
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     CopyDebugHookLParam @ 0x1C013E054 (CopyDebugHookLParam.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  _QWORD *v13; // rcx
  int v15; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-B0h] BYREF
  _OWORD v17[8]; // [rsp+50h] [rbp-98h] BYREF

  memset(v17, 0, 0x78uLL);
  LODWORD(v17[0]) = a1;
  *((_QWORD *)&v17[0] + 1) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  v17[1] = *(_OWORD *)a3;
  v17[2] = *(_OWORD *)(a3 + 16);
  *((_QWORD *)&v17[6] + 1) = a4;
  *(_QWORD *)&v17[7] = a5;
  if ( a2 - 13 <= 1 )
    return 0LL;
  LODWORD(v17[6]) = CopyDebugHookLParam(a2, (__int64)&v17[3], a3);
  *((_QWORD *)&v17[1] + 1) = 0LL;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v10, v11);
  EtwTraceBeginCallback(43LL);
  v12 = KeUserModeCallback(43LL, v17, 120LL, &v16, &v15);
  EtwTraceEndCallback(43LL);
  EnterCrit(0LL, 1LL);
  if ( v12 < 0 || v15 != 24 )
    return 0LL;
  v13 = (_QWORD *)v16;
  if ( v16 + 8 < v16 || v16 + 8 > W32UserProbeAddress )
    v13 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v13;
}
