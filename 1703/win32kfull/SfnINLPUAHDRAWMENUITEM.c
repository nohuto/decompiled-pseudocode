/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1C00EEEF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C00EF1B4 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rbx
  _DWORD v28[7]; // [rsp+34h] [rbp-174h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-158h] BYREF
  __int64 v30; // [rsp+58h] [rbp-150h]
  __int128 v31; // [rsp+60h] [rbp-148h]
  __int64 v32; // [rsp+70h] [rbp-138h]
  _QWORD v33[4]; // [rsp+90h] [rbp-118h] BYREF
  _QWORD v34[24]; // [rsp+B0h] [rbp-F8h] BYREF

  v30 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v34, 0, 0xB8uLL);
  v12 = 0LL;
  v13 = ServerFixupMenuDC(*(HDC *)(a4 + 32));
  v16 = v13;
  if ( v13 )
  {
    v12 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 32) = v13;
    *(_QWORD *)(a4 + 72) = v13;
  }
  v34[0] = v11;
  LODWORD(v34[1]) = a2;
  v34[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 84) = 0;
  *(_OWORD *)&v34[3] = *(_OWORD *)a4;
  *(_OWORD *)&v34[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v34[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v34[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v34[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v34[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v34[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v34[17] = *(_OWORD *)(a4 + 112);
  *(_OWORD *)&v34[19] = *(_OWORD *)(a4 + 128);
  v34[21] = a5;
  v34[22] = a6;
  v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v33;
  v33[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  v31 = *(_OWORD *)(v17 + 64);
  v32 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v11;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v18;
  if ( a1 )
    v19 = a1[35];
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v19;
  if ( gdwInAtomicOperation )
  {
    v19 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v19, gdwInAtomicOperation, v14, v15);
  EtwTraceBeginCallback(107LL);
  v20 = KeUserModeCallback(107LL, v34, 184LL, &v29, v28);
  EtwTraceEndCallback(107LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v23 + 64) = v31;
  *(_QWORD *)(v23 + 80) = v32;
  if ( v20 < 0 || v28[0] != 24 )
    return 0LL;
  v24 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > W32UserProbeAddress )
    v24 = (__int64 *)W32UserProbeAddress;
  v25 = *v24;
  v30 = *v24;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      *(_QWORD *)(a4 + 32) = v12;
      *(_QWORD *)(a4 + 72) = v12;
    }
  }
  return v25;
}
