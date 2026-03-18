/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1C00DEC60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     _W32ExceptionHandler @ 0x1C0225268 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnDWORDOPTINLPMSG(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int128 v22; // [rsp+40h] [rbp-B8h]
  _QWORD v23[4]; // [rsp+50h] [rbp-A8h] BYREF
  _OWORD v24[6]; // [rsp+70h] [rbp-88h] BYREF
  int v25; // [rsp+108h] [rbp+10h] BYREF

  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  memset(v24, 0, sizeof(v24));
  *(_QWORD *)&v24[0] = v10;
  DWORD2(v24[0]) = a2;
  *(_QWORD *)&v24[1] = a3;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 44) = 0;
  }
  *((_QWORD *)&v24[1] + 1) = a4;
  if ( a4 )
  {
    v24[3] = *(_OWORD *)a4;
    v24[4] = *(_OWORD *)(a4 + 16);
    v24[5] = *(_OWORD *)(a4 + 32);
  }
  v24[2] = __PAIR128__(a6, a5);
  v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v23;
  v23[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v22 = *(_OWORD *)(v13 + 64);
  a5 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v10;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v14;
  if ( a1 )
    v15 = a1[35];
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v15;
  if ( gdwInAtomicOperation )
  {
    v15 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation, v11, v12);
  EtwTraceBeginCallback(4LL);
  v16 = KeUserModeCallback(4LL, v24, 96LL, &a6, &v25);
  EtwTraceEndCallback(4LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v22;
  *(_QWORD *)(v19 + 80) = a5;
  if ( v16 < 0 || v25 != 24 )
    return 0LL;
  v20 = a6;
  if ( a6 + 8 < a6 || a6 + 8 > W32UserProbeAddress )
    v20 = W32UserProbeAddress;
  return *(_QWORD *)v20;
}
