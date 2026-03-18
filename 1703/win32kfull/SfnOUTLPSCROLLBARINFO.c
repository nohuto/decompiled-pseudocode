/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1C01FD950
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnOUTLPSCROLLBARINFO(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  __int128 v25; // xmm3
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  int v28; // eax
  _DWORD v30[6]; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-110h] BYREF
  __int64 v32; // [rsp+58h] [rbp-100h]
  __int128 v33; // [rsp+60h] [rbp-F8h]
  __int64 v34; // [rsp+70h] [rbp-E8h]
  _QWORD v35[3]; // [rsp+98h] [rbp-C0h] BYREF
  _QWORD v36[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v32 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v36, 0, 0x68uLL);
  v36[0] = v12;
  LODWORD(v36[1]) = a2;
  v36[2] = a3;
  *(_OWORD *)&v36[3] = *(_OWORD *)a4;
  *(_OWORD *)&v36[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v36[7] = *(_OWORD *)(a4 + 32);
  v36[9] = *(_QWORD *)(a4 + 48);
  LODWORD(v36[10]) = *(_DWORD *)(a4 + 56);
  v36[11] = a5;
  v36[12] = a6;
  v35[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v35;
  v35[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v33 = *(_OWORD *)(v15 + 64);
  v34 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v16;
  if ( a1 )
    v17 = a1[35];
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v17;
  if ( gdwInAtomicOperation )
  {
    v17 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation, v13, v14);
  EtwTraceBeginCallback(105LL);
  v18 = KeUserModeCallback(105LL, v36, 104LL, &v31, v30);
  EtwTraceEndCallback(105LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v33;
  *(_QWORD *)(v21 + 80) = v34;
  if ( v18 < 0 || v30[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v31;
  if ( v31 + 8 < v31 || v31 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v32 = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v24 = *(_QWORD *)(v31 + 16);
    if ( v24 + 60 < v24 || v24 + 60 > W32UserProbeAddress )
      v24 = W32UserProbeAddress;
    v25 = *(_OWORD *)(v24 + 16);
    v26 = *(_OWORD *)(v24 + 32);
    v27 = *(_QWORD *)(v24 + 48);
    v28 = *(_DWORD *)(v24 + 56);
    *(_OWORD *)a4 = *(_OWORD *)v24;
    *(_OWORD *)(a4 + 16) = v25;
    *(_OWORD *)(a4 + 32) = v26;
    *(_QWORD *)(a4 + 48) = v27;
    *(_DWORD *)(a4 + 56) = v28;
  }
  return v23;
}
