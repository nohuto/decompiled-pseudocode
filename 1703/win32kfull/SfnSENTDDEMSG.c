/*
 * XREFs of SfnSENTDDEMSG @ 0x1C01FE5C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E59D0 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  signed int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  _QWORD v24[7]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+88h] [rbp-A0h] BYREF
  int v26; // [rsp+90h] [rbp-98h]
  __int64 v27; // [rsp+98h] [rbp-90h]
  __int64 v28; // [rsp+A0h] [rbp-88h]
  __int128 v29; // [rsp+B8h] [rbp-70h]
  __int64 v30; // [rsp+C8h] [rbp-60h]
  _QWORD v31[8]; // [rsp+E8h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+130h] [rbp+8h] BYREF
  int v33; // [rsp+138h] [rbp+10h] BYREF

  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v24, 0, sizeof(v24));
  v14 = a2 & 0xBFFFFFFF;
  v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v31;
  v31[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v29 = *(_OWORD *)(v15 + 64);
  v30 = *(_QWORD *)(v15 + 80);
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
  if ( v14 >= 0 )
  {
    v24[0] = v11;
    LODWORD(v24[1]) = v14;
    v24[2] = a3;
    v24[3] = a4;
  }
  else
  {
    if ( a1 )
      v25 = *a1;
    else
      v25 = 0LL;
    v26 = v14 & 0x7FFFFFFF;
    v27 = a3;
    v28 = a4;
    xxxDDETrackGetMessageHook((__int64)&v25);
    v17 = gpKernelHandleTable + 16LL * (unsigned __int16)v25;
    v24[0] = *(_QWORD *)v17 - *(_QWORD *)(gptiCurrent + 424LL);
    LODWORD(v24[1]) = v26;
    v24[2] = v27;
    v24[3] = v28;
  }
  v24[4] = a5;
  v24[5] = a6;
  LODWORD(v24[6]) = (a7 & 1) == 0;
  if ( gdwInAtomicOperation )
  {
    v17 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation, v12, v13);
  EtwTraceBeginCallback(38LL);
  v18 = KeUserModeCallback(38LL, v24, 56LL, &v32, &v33);
  EtwTraceEndCallback(38LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v29;
  *(_QWORD *)(v21 + 80) = v30;
  if ( v18 < 0 || v33 != 24 )
    return 0LL;
  v22 = v32;
  if ( v32 + 8 < v32 || v32 + 8 > W32UserProbeAddress )
    v22 = W32UserProbeAddress;
  return *(_QWORD *)v22;
}
