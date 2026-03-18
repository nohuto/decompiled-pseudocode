/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C0055FF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall SfnINOUTSTYLECHANGE(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD v22[7]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-60h]
  __int128 v24; // [rsp+80h] [rbp-58h]
  __int64 v25; // [rsp+90h] [rbp-48h]
  _QWORD v26[3]; // [rsp+B8h] [rbp-20h] BYREF
  int v27; // [rsp+E8h] [rbp+10h] BYREF

  v23 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  v22[0] = v10;
  v22[1] = a2;
  v22[2] = a3;
  v22[4] = a5;
  v22[5] = a6;
  v22[3] = *a4;
  v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v26;
  v26[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v11 = *(_QWORD *)(gptiCurrent + 432LL);
  v24 = *(_OWORD *)(v11 + 64);
  v25 = *(_QWORD *)(v11 + 80);
  *(_QWORD *)(v11 + 72) = v10;
  if ( a1 )
    v12 = *a1;
  else
    v12 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v12;
  if ( a1 )
    v13 = a1[35];
  else
    v13 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v13;
  if ( gdwInAtomicOperation )
  {
    v13 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v13, gdwInAtomicOperation, a3, 0LL);
  EtwTraceBeginCallback(39LL);
  v14 = KeUserModeCallback(39LL, v22, 48LL, &a5, &v27);
  EtwTraceEndCallback(39LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v16, v15);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v17 + 64) = v24;
  *(_QWORD *)(v17 + 80) = v25;
  if ( v14 < 0 || v27 != 24 )
    return 0LL;
  v18 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v18 = (__int64 *)W32UserProbeAddress;
  v19 = *v18;
  v23 = *v18;
  if ( a2 == 124 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v20 = *(_QWORD **)(a5 + 16);
    if ( v20 + 1 < v20 || (unsigned __int64)(v20 + 1) > W32UserProbeAddress )
      v20 = (_QWORD *)W32UserProbeAddress;
    *a4 = *v20;
  }
  return v19;
}
