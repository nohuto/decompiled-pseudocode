/*
 * XREFs of SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C01FB4C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C00EF1B4 (_ServerFixupMenuDC.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINLPUAHNCPAINTMENUPOPUP(
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
  HDC v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rbx
  __int128 v26; // [rsp+50h] [rbp-C8h]
  __int64 v27; // [rsp+60h] [rbp-B8h]
  _QWORD v28[11]; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v29[10]; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+120h] [rbp+8h]
  int v31; // [rsp+128h] [rbp+10h] BYREF
  unsigned __int64 v32; // [rsp+130h] [rbp+18h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v28, 0, 0x40uLL);
  v30 = 0LL;
  v15 = ServerFixupMenuDC(*(__int64 **)(a4 + 8), *(_QWORD *)a4, 0, 0);
  if ( v15 )
  {
    v30 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v15;
  }
  v28[0] = v12;
  LODWORD(v28[1]) = a2 & 0x1FFFF;
  v28[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v28[3] = *(_OWORD *)a4;
  v28[5] = *(_QWORD *)(a4 + 16);
  v28[6] = a5;
  v28[7] = a6;
  v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v29;
  v29[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v16 = *(_QWORD *)(gptiCurrent + 432LL);
  v26 = *(_OWORD *)(v16 + 64);
  v27 = *(_QWORD *)(v16 + 80);
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
  EtwTraceBeginCallback(110LL);
  v19 = KeUserModeCallback(110LL, v28, 64LL, &v32, &v31);
  EtwTraceEndCallback(110LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v22 + 64) = v26;
  *(_QWORD *)(v22 + 80) = v27;
  if ( v19 < 0 || v31 != 24 )
    return 0LL;
  v23 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > W32UserProbeAddress )
    v23 = (__int64 *)W32UserProbeAddress;
  v24 = *v23;
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v30;
  }
  return v24;
}
