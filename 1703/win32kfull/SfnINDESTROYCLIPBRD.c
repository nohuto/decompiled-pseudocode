/*
 * XREFs of SfnINDESTROYCLIPBRD @ 0x1C01110B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINDESTROYCLIPBRD(__int64 *a1, int a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int128 v22; // [rsp+50h] [rbp-98h]
  __int64 v23; // [rsp+60h] [rbp-88h]
  _QWORD v24[9]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v25[4]; // [rsp+B0h] [rbp-38h] BYREF
  int v26; // [rsp+F8h] [rbp+10h] BYREF

  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  memset(v24, 0, 0x30uLL);
  v24[0] = v10;
  LODWORD(v24[1]) = a2;
  v24[2] = a3;
  v24[3] = a4;
  v24[4] = a5;
  v24[5] = a6;
  v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v25;
  v25[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v22 = *(_OWORD *)(v13 + 64);
  v23 = *(_QWORD *)(v13 + 80);
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
  EtwTraceBeginCallback(25LL);
  v16 = KeUserModeCallback(25LL, v24, 48LL, &a5, &v26);
  EtwTraceEndCallback(25LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v22;
  *(_QWORD *)(v19 + 80) = v23;
  if ( v16 < 0 || v26 != 24 )
    return 0LL;
  v20 = a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v20 = W32UserProbeAddress;
  return *(_QWORD *)v20;
}
