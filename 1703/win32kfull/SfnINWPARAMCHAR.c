/*
 * XREFs of SfnINWPARAMCHAR @ 0x1C01FCF90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C011745C (RtlWCSMessageWParamCharToMB.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINWPARAMCHAR(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // r15
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int128 v24; // [rsp+50h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-98h]
  _QWORD v26[9]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v27[9]; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v28; // [rsp+100h] [rbp+8h] BYREF
  __int64 v29; // [rsp+110h] [rbp+18h] BYREF
  unsigned __int64 v30; // [rsp+118h] [rbp+20h] BYREF

  v29 = a3;
  v8 = a3;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v26, 0, 0x30uLL);
  v26[0] = v11;
  LODWORD(v26[1]) = a2;
  if ( (a7 & 1) != 0 )
  {
    if ( a2 == 47 || a2 == 288 )
    {
      v28 = (unsigned __int16)v8;
      RtlWCSMessageWParamCharToMB(a2, (__int64)&v28);
      v14 = (unsigned __int16)v28 | (WORD1(v29) << 16);
      v8 = v14;
      v29 = v14;
    }
    else
    {
      RtlWCSMessageWParamCharToMB(a2, (__int64)&v29);
      v8 = v29;
    }
  }
  v26[2] = v8;
  v26[3] = a4;
  v26[4] = a5;
  v26[5] = a6;
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v24 = *(_OWORD *)(v15 + 64);
  v25 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v11;
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
  UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation, v12, v13);
  EtwTraceBeginCallback(2LL);
  v18 = KeUserModeCallback(2LL, v26, 48LL, &v30, &a7);
  EtwTraceEndCallback(2LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v24;
  *(_QWORD *)(v21 + 80) = v25;
  if ( v18 < 0 || a7 != 24 )
    return 0LL;
  v22 = v30;
  if ( v30 + 8 < v30 || v30 + 8 > W32UserProbeAddress )
    v22 = W32UserProbeAddress;
  return *(_QWORD *)v22;
}
