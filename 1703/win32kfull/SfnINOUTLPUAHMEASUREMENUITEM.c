/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00EE6B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C00EF1B4 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rsi
  _OWORD *v25; // rcx
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  __int128 v28; // xmm5
  __int128 v29; // xmm6
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  _DWORD v33[6]; // [rsp+30h] [rbp-198h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-180h] BYREF
  __int64 v35; // [rsp+50h] [rbp-178h]
  __int64 v36; // [rsp+60h] [rbp-168h]
  __int128 v37; // [rsp+68h] [rbp-160h]
  __int64 v38; // [rsp+78h] [rbp-150h]
  _QWORD v39[4]; // [rsp+A0h] [rbp-128h] BYREF
  _QWORD v40[20]; // [rsp+C0h] [rbp-108h] BYREF

  v36 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v40, 0, 0x98uLL);
  v35 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 40));
  if ( v15 )
  {
    v35 = *(_QWORD *)(a4 + 40);
    *(_QWORD *)(a4 + 40) = v15;
  }
  v40[0] = v12;
  LODWORD(v40[1]) = a2 & 0x1FFFF;
  v40[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 52) = 0;
  *(_OWORD *)&v40[3] = *(_OWORD *)a4;
  *(_OWORD *)&v40[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v40[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v40[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v40[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v40[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v40[15] = *(_OWORD *)(a4 + 96);
  v40[17] = a5;
  v40[18] = a6;
  v39[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v39;
  v39[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v16 = *(_QWORD *)(gptiCurrent + 432LL);
  v37 = *(_OWORD *)(v16 + 64);
  v38 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v12;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v17;
  if ( a1 )
    v18 = a1[35];
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v18;
  if ( gdwInAtomicOperation )
  {
    v18 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v18, gdwInAtomicOperation, v13, v14);
  EtwTraceBeginCallback(109LL);
  v19 = KeUserModeCallback(109LL, v40, 152LL, &v34, v33);
  EtwTraceEndCallback(109LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v22 + 64) = v37;
  *(_QWORD *)(v22 + 80) = v38;
  if ( v19 < 0 || v33[0] != 24 )
    return 0LL;
  v23 = (__int64 *)v34;
  if ( v34 + 8 < v34 || v34 + 8 > W32UserProbeAddress )
    v23 = (__int64 *)W32UserProbeAddress;
  v24 = *v23;
  v36 = *v23;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v25 = *(_OWORD **)(v34 + 16);
    if ( v25 + 7 < v25 || (unsigned __int64)(v25 + 7) > W32UserProbeAddress )
      v25 = (_OWORD *)W32UserProbeAddress;
    v26 = v25[1];
    v27 = v25[2];
    v28 = v25[3];
    v29 = v25[4];
    v30 = v25[5];
    v31 = v25[6];
    *(_OWORD *)a4 = *v25;
    *(_OWORD *)(a4 + 16) = v26;
    *(_OWORD *)(a4 + 32) = v27;
    *(_OWORD *)(a4 + 48) = v28;
    *(_OWORD *)(a4 + 64) = v29;
    *(_OWORD *)(a4 + 80) = v30;
    *(_OWORD *)(a4 + 96) = v31;
  }
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 40) = v35;
  }
  return v24;
}
