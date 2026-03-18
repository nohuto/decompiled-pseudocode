/*
 * XREFs of SfnINWPARAMDBCSCHAR @ 0x1C0115BE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C011745C (RtlWCSMessageWParamCharToMB.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINWPARAMDBCSCHAR(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // r14
  __int64 *v11; // r15
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int128 v25; // [rsp+50h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-98h]
  _QWORD v27[10]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v28[3]; // [rsp+B8h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+100h] [rbp+8h] BYREF
  __int64 v30; // [rsp+110h] [rbp+18h] BYREF

  v30 = a3;
  v8 = a3;
  v11 = (__int64 *)gptiCurrent;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v27, 0, 0x38uLL);
  v27[0] = v12;
  LODWORD(v27[1]) = a2;
  LODWORD(v27[6]) = a7 & 1;
  if ( (a7 & 1) != 0 )
  {
    RtlWCSMessageWParamCharToMB(a2, &v30);
    v8 = v30;
    v11 = (__int64 *)gptiCurrent;
  }
  v27[2] = v8;
  v27[3] = a4;
  v27[4] = a5;
  v27[5] = a6;
  v15 = *v11;
  v28[0] = *(_QWORD *)(*v11 + 368);
  *(_QWORD *)(v15 + 368) = v28;
  v28[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v16 = *(_QWORD *)(gptiCurrent + 432LL);
  v25 = *(_OWORD *)(v16 + 64);
  v26 = *(_QWORD *)(v16 + 80);
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
  EtwTraceBeginCallback(95LL);
  v19 = KeUserModeCallback(95LL, v27, 56LL, &v29, &a7);
  EtwTraceEndCallback(95LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v22 + 64) = v25;
  *(_QWORD *)(v22 + 80) = v26;
  if ( v19 < 0 || a7 != 24 )
    return 0LL;
  v23 = v29;
  if ( v29 + 8 < v29 || v29 + 8 > W32UserProbeAddress )
    v23 = W32UserProbeAddress;
  return *(_QWORD *)v23;
}
