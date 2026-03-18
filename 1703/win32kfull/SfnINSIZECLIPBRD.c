/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C01FCC90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, int a2, __int64 a3, _OWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int128 v18; // xmm6
  __int64 v19; // xmm7_8
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rbx
  _DWORD v28[8]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-E0h]
  _QWORD v31[3]; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+90h] [rbp-A8h]
  __int64 v33; // [rsp+A0h] [rbp-98h]
  _QWORD v34[7]; // [rsp+A8h] [rbp-90h] BYREF

  v10 = 0LL;
  v30 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v34, 0, sizeof(v34));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v12);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 648), 4u) )
  {
    v34[0] = v11;
    LODWORD(v34[1]) = a2;
    v34[2] = a3;
    *(_OWORD *)&v34[3] = *a4;
    v34[5] = a5;
    v34[6] = a6;
    v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v31;
    v31[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v17 = *(_QWORD *)(gptiCurrent + 432LL);
    v18 = *(_OWORD *)(v17 + 64);
    v32 = v18;
    v19 = *(_QWORD *)(v17 + 80);
    v33 = v19;
    *(_QWORD *)(v17 + 72) = v11;
    v20 = 0LL;
    if ( a1 )
      v20 = *a1;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v20;
    v21 = 0LL;
    if ( a1 )
      v21 = a1[35];
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v21;
    if ( gdwInAtomicOperation )
    {
      v21 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v21, gdwInAtomicOperation, v15, v16);
    EtwTraceBeginCallback(24LL);
    v22 = KeUserModeCallback(24LL, v34, 56LL, &v29, v28);
    EtwTraceEndCallback(24LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v24, v23);
    v25 = *(_QWORD *)(gptiCurrent + 432LL);
    *(_OWORD *)(v25 + 64) = v18;
    *(_QWORD *)(v25 + 80) = v19;
    if ( v22 < 0 || v28[0] != 24 )
      return 0LL;
    v26 = (__int64 *)v29;
    if ( v29 + 8 < v29 || v29 + 8 > W32UserProbeAddress )
      v26 = (__int64 *)W32UserProbeAddress;
    v10 = *v26;
    v30 = v10;
  }
  return v10;
}
