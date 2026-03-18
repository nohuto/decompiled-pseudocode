/*
 * XREFs of fnHkINLPCBTACTIVATESTRUCT @ 0x1C010D1D4
 * Callers:
 *     xxxCallCtfHook @ 0x1C004DFF4 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTACTIVATESTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  _QWORD *v13; // rcx
  _OWORD v15[5]; // [rsp+38h] [rbp-50h] BYREF
  int v16; // [rsp+90h] [rbp+8h] BYREF

  memset(v15, 0, 0x30uLL);
  LODWORD(v15[0]) = a1;
  *((_QWORD *)&v15[0] + 1) = a2;
  *(_DWORD *)(a3 + 4) = 0;
  v15[1] = *(_OWORD *)a3;
  *(_QWORD *)&v15[2] = a4;
  *((_QWORD *)&v15[2] + 1) = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v10, v11);
  EtwTraceBeginCallback(41LL);
  v12 = KeUserModeCallback(41LL, v15, 48LL, &a5, &v16);
  EtwTraceEndCallback(41LL);
  EnterCrit(0LL, 1LL);
  if ( v12 < 0 || v16 != 24 )
    return 0LL;
  v13 = (_QWORD *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v13 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v13;
}
