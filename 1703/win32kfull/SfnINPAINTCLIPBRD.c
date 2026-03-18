/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C01FC5A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _WindowFromDC @ 0x1C0048E30 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rbx
  _DWORD v27[8]; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-108h] BYREF
  __int64 v29; // [rsp+58h] [rbp-100h]
  __int128 v30; // [rsp+60h] [rbp-F8h]
  __int64 v31; // [rsp+70h] [rbp-E8h]
  _QWORD v32[4]; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v33[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v10 = 0LL;
  v29 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v33, 0, sizeof(v33));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v12);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 648), 4u) )
  {
    v33[0] = v11;
    LODWORD(v33[1]) = a2;
    v33[2] = a3;
    *(_DWORD *)(a4 + 68) = 0;
    *(_OWORD *)&v33[3] = *(_OWORD *)a4;
    *(_OWORD *)&v33[5] = *(_OWORD *)(a4 + 16);
    *(_OWORD *)&v33[7] = *(_OWORD *)(a4 + 32);
    *(_OWORD *)&v33[9] = *(_OWORD *)(a4 + 48);
    v33[11] = *(_QWORD *)(a4 + 64);
    v33[12] = a5;
    v33[13] = a6;
    v15 = WindowFromDC(*(__int64 **)a4);
    v33[3] = _GetDC(v15);
    v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v32;
    v32[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v18 = *(_QWORD *)(gptiCurrent + 432LL);
    v30 = *(_OWORD *)(v18 + 64);
    v31 = *(_QWORD *)(v18 + 80);
    *(_QWORD *)(v18 + 72) = v11;
    v19 = 0LL;
    if ( a1 )
      v19 = *a1;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v19;
    v20 = 0LL;
    if ( a1 )
      v20 = a1[35];
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v20;
    if ( gdwInAtomicOperation )
    {
      v20 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v20, gdwInAtomicOperation, v16, v17);
    EtwTraceBeginCallback(23LL);
    v21 = KeUserModeCallback(23LL, v33, 112LL, &v28, v27);
    EtwTraceEndCallback(23LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v23, v22);
    v24 = *(_QWORD *)(gptiCurrent + 432LL);
    *(_OWORD *)(v24 + 64) = v30;
    *(_QWORD *)(v24 + 80) = v31;
    if ( v21 < 0 || v27[0] != 24 )
      return 0LL;
    v25 = (__int64 *)v28;
    if ( v28 + 8 < v28 || v28 + 8 > W32UserProbeAddress )
      v25 = (__int64 *)W32UserProbeAddress;
    v10 = *v25;
    v29 = v10;
    _ReleaseDC(v33[3]);
  }
  return v10;
}
