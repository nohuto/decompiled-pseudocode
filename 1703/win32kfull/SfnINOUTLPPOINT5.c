/*
 * XREFs of SfnINOUTLPPOINT5 @ 0x1C00E4A10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINOUTLPPOINT5(
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
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  __int128 v25; // xmm1
  __int64 v26; // xmm0_8
  _DWORD v28[6]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-E0h]
  __int128 v31; // [rsp+60h] [rbp-D8h]
  __int64 v32; // [rsp+70h] [rbp-C8h]
  _QWORD v33[3]; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD v34[10]; // [rsp+B0h] [rbp-88h] BYREF

  v30 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v34, 0, sizeof(v34));
  v34[0] = v12;
  LODWORD(v34[1]) = a2;
  v34[2] = a3;
  *(_OWORD *)&v34[3] = *(_OWORD *)a4;
  *(_OWORD *)&v34[5] = *(_OWORD *)(a4 + 16);
  v34[7] = *(_QWORD *)(a4 + 32);
  v34[8] = a5;
  v34[9] = a6;
  v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v33;
  v33[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v31 = *(_OWORD *)(v15 + 64);
  v32 = *(_QWORD *)(v15 + 80);
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
  EtwTraceBeginCallback(18LL);
  v18 = KeUserModeCallback(18LL, v34, 80LL, &v29, v28);
  EtwTraceEndCallback(18LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v31;
  *(_QWORD *)(v21 + 80) = v32;
  if ( v18 < 0 || v28[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v30 = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v24 = *(_QWORD *)(v29 + 16);
    if ( v24 + 40 < v24 || v24 + 40 > W32UserProbeAddress )
      v24 = W32UserProbeAddress;
    v25 = *(_OWORD *)(v24 + 16);
    v26 = *(_QWORD *)(v24 + 32);
    *(_OWORD *)a4 = *(_OWORD *)v24;
    *(_OWORD *)(a4 + 16) = v25;
    *(_QWORD *)(a4 + 32) = v26;
  }
  return v23;
}
