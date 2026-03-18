/*
 * XREFs of fnHkOPTINLPEVENTMSG @ 0x1C01FF6BC
 * Callers:
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  bool v13; // zf
  int v14; // eax
  int v15; // ebx
  __int64 *v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // xmm1_8
  _QWORD v21[13]; // [rsp+40h] [rbp-68h] BYREF
  int v22; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+10h]

  memset(v21, 0, 0x48uLL);
  LODWORD(v21[0]) = a1;
  v21[1] = a2;
  v21[2] = a3;
  if ( a3 )
  {
    *(_OWORD *)&v21[5] = *(_OWORD *)a3;
    v21[7] = *(_QWORD *)(a3 + 16);
  }
  v21[3] = a4;
  v21[4] = a5;
  LODWORD(v21[8]) = 0;
  if ( a2 )
  {
    v12 = HMValidateHandle(a2, 5);
    if ( v12 )
    {
      v13 = (*(_BYTE *)(v12 + 64) & 4) == 0;
      v14 = v21[8];
      if ( !v13 )
        v14 = 1;
      LODWORD(v21[8]) = v14;
    }
  }
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v10, v11);
  EtwTraceBeginCallback(49LL);
  v15 = KeUserModeCallback(49LL, v21, 72LL, &a5, &v22);
  EtwTraceEndCallback(49LL);
  EnterCrit(0LL, 1LL);
  if ( v15 < 0 || v22 != 24 )
    return 0xFFFFFFFFLL;
  v16 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v16 = (__int64 *)W32UserProbeAddress;
  v17 = *v16;
  v23 = *v16;
  if ( a3 )
  {
    v18 = *(_QWORD *)(a5 + 16);
    if ( v18 + 24 < v18 || v18 + 24 > W32UserProbeAddress )
      v18 = W32UserProbeAddress;
    v19 = *(_QWORD *)(v18 + 16);
    *(_OWORD *)a3 = *(_OWORD *)v18;
    *(_QWORD *)(a3 + 16) = v19;
  }
  return (unsigned int)v17;
}
