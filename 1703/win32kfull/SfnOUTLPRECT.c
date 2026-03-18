/*
 * XREFs of SfnOUTLPRECT @ 0x1C00ECAA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int128 v16; // xmm6
  __int64 v17; // xmm7_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int128 *v27; // rcx
  _QWORD v28[9]; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD v29[3]; // [rsp+98h] [rbp-80h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-68h]
  __int64 v31; // [rsp+C0h] [rbp-58h]
  __int128 v32; // [rsp+C8h] [rbp-50h]
  int v33; // [rsp+128h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v28, 0, 0x28uLL);
  v28[0] = v12;
  LODWORD(v28[1]) = a2;
  v28[2] = a3;
  v28[3] = a5;
  v28[4] = a6;
  v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v29;
  v29[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v16 = *(_OWORD *)(v15 + 64);
  v30 = v16;
  v17 = *(_QWORD *)(v15 + 80);
  v31 = v17;
  *(_QWORD *)(v15 + 72) = v12;
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
  EtwTraceBeginCallback(34LL);
  v20 = KeUserModeCallback(34LL, v28, 40LL, &a5, &v33);
  EtwTraceEndCallback(34LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v23 + 64) = v16;
  *(_QWORD *)(v23 + 80) = v17;
  if ( v20 < 0 || v33 != 24 )
    return 0LL;
  v24 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v24 = (__int64 *)W32UserProbeAddress;
  v25 = *v24;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v27 = *(__int128 **)(a5 + 16);
    if ( v27 + 1 < v27 || (unsigned __int64)(v27 + 1) > W32UserProbeAddress )
      v27 = (__int128 *)W32UserProbeAddress;
    v32 = *v27;
    *a4 = v32;
  }
  return v25;
}
