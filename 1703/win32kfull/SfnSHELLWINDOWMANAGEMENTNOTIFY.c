/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C00F5330
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  _DWORD v22[8]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-E0h]
  __int128 v25; // [rsp+60h] [rbp-D8h]
  __int64 v26; // [rsp+70h] [rbp-C8h]
  _QWORD v27[4]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD v28[10]; // [rsp+B0h] [rbp-88h] BYREF

  v24 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  memset(v28, 0, sizeof(v28));
  v28[0] = v10;
  LODWORD(v28[1]) = a2 & 0x1FFFF;
  v28[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  *(_OWORD *)&v28[3] = *(_OWORD *)a4;
  *(_OWORD *)&v28[5] = *(_OWORD *)(a4 + 16);
  v28[7] = *(_QWORD *)(a4 + 32);
  v28[8] = a5;
  v28[9] = a6;
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v25 = *(_OWORD *)(v13 + 64);
  v26 = *(_QWORD *)(v13 + 80);
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
  EtwTraceBeginCallback(54LL);
  v16 = KeUserModeCallback(54LL, v28, 80LL, &v23, v22);
  EtwTraceEndCallback(54LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v25;
  *(_QWORD *)(v19 + 80) = v26;
  if ( v16 < 0 || v22[0] != 24 )
    return 0LL;
  v20 = (__int64 *)v23;
  if ( v23 + 8 < v23 || v23 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  result = *v20;
  v24 = *v20;
  return result;
}
