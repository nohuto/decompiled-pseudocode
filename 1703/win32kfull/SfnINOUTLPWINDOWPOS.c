/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1C00DBF00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINOUTLPWINDOWPOS(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
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
  unsigned __int64 v25; // rcx
  __int128 v26; // xmm1
  __int64 v27; // xmm0_8
  __int128 v28; // [rsp+50h] [rbp-C8h]
  __int64 v29; // [rsp+60h] [rbp-B8h]
  _QWORD v30[3]; // [rsp+88h] [rbp-90h] BYREF
  _QWORD v31[10]; // [rsp+A0h] [rbp-78h] BYREF
  int v32; // [rsp+128h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v31, 0, sizeof(v31));
  v31[0] = v12;
  LODWORD(v31[1]) = a2;
  v31[2] = a3;
  *(_DWORD *)(a4 + 36) = 0;
  *(_OWORD *)&v31[3] = *(_OWORD *)a4;
  *(_OWORD *)&v31[5] = *(_OWORD *)(a4 + 16);
  v31[7] = *(_QWORD *)(a4 + 32);
  v31[8] = a5;
  v31[9] = a6;
  v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v30;
  v30[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v28 = *(_OWORD *)(v15 + 64);
  v29 = *(_QWORD *)(v15 + 80);
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
  EtwTraceBeginCallback(22LL);
  v18 = KeUserModeCallback(22LL, v31, 80LL, &a5, &v32);
  EtwTraceEndCallback(22LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v28;
  *(_QWORD *)(v21 + 80) = v29;
  if ( v18 < 0 || v32 != 24 )
    return 0LL;
  v22 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v25 = *(_QWORD *)(a5 + 16);
    if ( v25 + 40 < v25 || v25 + 40 > W32UserProbeAddress )
      v25 = W32UserProbeAddress;
    v26 = *(_OWORD *)(v25 + 16);
    v27 = *(_QWORD *)(v25 + 32);
    *(_OWORD *)a4 = *(_OWORD *)v25;
    *(_OWORD *)(a4 + 16) = v26;
    *(_QWORD *)(a4 + 32) = v27;
  }
  return v23;
}
