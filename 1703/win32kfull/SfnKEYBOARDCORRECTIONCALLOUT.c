/*
 * XREFs of SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C01FD2B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnKEYBOARDCORRECTIONCALLOUT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 result; // rax
  _DWORD v26[8]; // [rsp+30h] [rbp-228h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-208h] BYREF
  __int64 v28; // [rsp+58h] [rbp-200h]
  __int128 v29; // [rsp+60h] [rbp-1F8h]
  __int64 v30; // [rsp+70h] [rbp-1E8h]
  _QWORD v31[4]; // [rsp+90h] [rbp-1C8h] BYREF
  _QWORD v32[46]; // [rsp+B0h] [rbp-1A8h] BYREF

  v28 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  if ( gptiCurrent == *(_QWORD *)(a8 + 32) )
    return 0LL;
  memset(v32, 0, sizeof(v32));
  v32[0] = v12;
  LODWORD(v32[1]) = a2 & 0x1FFFF;
  v32[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  v15 = &v32[3];
  v16 = 2LL;
  do
  {
    *v15 = *(_OWORD *)a4;
    v15[1] = *(_OWORD *)(a4 + 16);
    v15[2] = *(_OWORD *)(a4 + 32);
    v15[3] = *(_OWORD *)(a4 + 48);
    v15[4] = *(_OWORD *)(a4 + 64);
    v15[5] = *(_OWORD *)(a4 + 80);
    v15[6] = *(_OWORD *)(a4 + 96);
    v15 += 8;
    *(v15 - 1) = *(_OWORD *)(a4 + 112);
    a4 += 128LL;
    --v16;
  }
  while ( v16 );
  *v15 = *(_OWORD *)a4;
  v15[1] = *(_OWORD *)(a4 + 16);
  v15[2] = *(_OWORD *)(a4 + 32);
  v15[3] = *(_OWORD *)(a4 + 48);
  *((_QWORD *)v15 + 8) = *(_QWORD *)(a4 + 64);
  v32[44] = a5;
  v32[45] = a6;
  v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v31;
  v31[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  v29 = *(_OWORD *)(v17 + 64);
  v30 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v12;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v18;
  if ( a1 )
    v19 = a1[35];
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v19;
  if ( gdwInAtomicOperation )
  {
    v19 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v19, gdwInAtomicOperation, v13, v14);
  EtwTraceBeginCallback(52LL);
  v20 = KeUserModeCallback(52LL, v32, 368LL, &v27, v26);
  EtwTraceEndCallback(52LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v23 + 64) = v29;
  *(_QWORD *)(v23 + 80) = v30;
  if ( v20 < 0 || v26[0] != 24 )
    return 0LL;
  v24 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
    v24 = (__int64 *)W32UserProbeAddress;
  result = *v24;
  v28 = *v24;
  return result;
}
