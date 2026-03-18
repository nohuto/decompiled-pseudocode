/*
 * XREFs of SfnGESTURE @ 0x1C01F8D30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnGESTURE(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 *v20; // rcx
  __int64 result; // rax
  unsigned __int64 v22; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-98h]
  __int128 v24; // [rsp+58h] [rbp-90h]
  __int64 v25; // [rsp+68h] [rbp-80h]
  _QWORD v26[9]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v27[3]; // [rsp+B8h] [rbp-30h] BYREF
  int v28; // [rsp+F0h] [rbp+8h] BYREF

  v23 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  memset(v26, 0, 0x30uLL);
  if ( !HMValidateHandle(a4, 21) )
    return 0LL;
  v26[0] = v10;
  LODWORD(v26[1]) = a2;
  v26[2] = a3;
  v26[3] = a4;
  v26[4] = a5;
  v26[5] = a6;
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v24 = *(_OWORD *)(v13 + 64);
  v25 = *(_QWORD *)(v13 + 80);
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
  EtwTraceBeginCallback(113LL);
  v16 = KeUserModeCallback(113LL, v26, 48LL, &v22, &v28);
  EtwTraceEndCallback(113LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v24;
  *(_QWORD *)(v19 + 80) = v25;
  if ( v16 < 0 || v28 != 24 )
    return 0LL;
  v20 = (__int64 *)v22;
  if ( v22 + 8 < v22 || v22 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  result = *v20;
  v23 = *v20;
  return result;
}
