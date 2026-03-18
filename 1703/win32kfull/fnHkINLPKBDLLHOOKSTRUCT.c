/*
 * XREFs of fnHkINLPKBDLLHOOKSTRUCT @ 0x1C00F860C
 * Callers:
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall fnHkINLPKBDLLHOOKSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  _QWORD *v13; // rcx
  int v15; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v17[56]; // [rsp+50h] [rbp-48h] BYREF

  memset(v17, 0, sizeof(v17));
  *(_DWORD *)v17 = a1;
  *(_QWORD *)&v17[8] = a2;
  *(_OWORD *)&v17[32] = *(_OWORD *)a3;
  *(_QWORD *)&v17[48] = *(_QWORD *)(a3 + 16);
  *(_QWORD *)&v17[16] = a4;
  *(_QWORD *)&v17[24] = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v10, v11);
  EtwTraceBeginCallback(45LL);
  v12 = KeUserModeCallback(45LL, v17, 56LL, &v16, &v15);
  EtwTraceEndCallback(45LL);
  EnterCrit(0LL, 1LL);
  if ( v12 < 0 || v15 != 24 )
    return 0LL;
  v13 = (_QWORD *)v16;
  if ( v16 + 8 < v16 || v16 + 8 > W32UserProbeAddress )
    v13 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v13;
}
