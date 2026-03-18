/*
 * XREFs of SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C0130FE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINOUTLPMEASUREITEMSTRUCT(
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
  __int64 v23; // rdx
  _OWORD *v25; // rcx
  __int128 v26; // xmm1
  _DWORD v27[6]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-E0h]
  __int128 v30; // [rsp+60h] [rbp-D8h]
  __int64 v31; // [rsp+70h] [rbp-C8h]
  _QWORD v32[3]; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD v33[10]; // [rsp+B0h] [rbp-88h] BYREF

  v29 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v33, 0, 0x48uLL);
  v33[0] = v12;
  LODWORD(v33[1]) = a2 & 0x1FFFF;
  v33[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v33[3] = *(_OWORD *)a4;
  *(_OWORD *)&v33[5] = *(_OWORD *)(a4 + 16);
  v33[7] = a5;
  v33[8] = a6;
  v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v32;
  v32[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v30 = *(_OWORD *)(v15 + 64);
  v31 = *(_QWORD *)(v15 + 80);
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
  EtwTraceBeginCallback(16LL);
  v18 = KeUserModeCallback(16LL, v33, 72LL, &v28, v27);
  EtwTraceEndCallback(16LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v30;
  *(_QWORD *)(v21 + 80) = v31;
  if ( v18 < 0 || v27[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v28;
  if ( v28 + 8 < v28 || v28 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v29 = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v25 = *(_OWORD **)(v28 + 16);
    if ( v25 + 2 < v25 || (unsigned __int64)(v25 + 2) > W32UserProbeAddress )
      v25 = (_OWORD *)W32UserProbeAddress;
    v26 = v25[1];
    *(_OWORD *)a4 = *v25;
    *(_OWORD *)(a4 + 16) = v26;
  }
  return v23;
}
