/*
 * XREFs of SfnINOUTLPRECT @ 0x1C00F2E50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int128 v16; // xmm6
  __int64 v17; // xmm7_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int128 *v26; // rcx
  _DWORD v28[6]; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-100h] BYREF
  __int64 v30; // [rsp+58h] [rbp-F0h]
  _QWORD v31[3]; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+98h] [rbp-B0h]
  __int64 v33; // [rsp+A8h] [rbp-A0h]
  __int128 v34; // [rsp+B0h] [rbp-98h]
  _QWORD v35[7]; // [rsp+C0h] [rbp-88h] BYREF

  v30 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v35, 0, sizeof(v35));
  v35[0] = v12;
  LODWORD(v35[1]) = a2;
  v35[2] = a3;
  *(_OWORD *)&v35[3] = *a4;
  v35[5] = a5;
  v35[6] = a6;
  v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v31;
  v31[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v16 = *(_OWORD *)(v15 + 64);
  v32 = v16;
  v17 = *(_QWORD *)(v15 + 80);
  v33 = v17;
  *(_QWORD *)(v15 + 72) = v12;
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
  UserSessionSwitchLeaveCrit(v19, gdwInAtomicOperation, v13, v14);
  EtwTraceBeginCallback(20LL);
  v20 = KeUserModeCallback(20LL, v35, 56LL, &v29, v28);
  EtwTraceEndCallback(20LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v23 + 64) = v16;
  *(_QWORD *)(v23 + 80) = v17;
  if ( v20 < 0 || v28[0] != 24 )
    return 0LL;
  v24 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > W32UserProbeAddress )
    v24 = (__int64 *)W32UserProbeAddress;
  v25 = *v24;
  v30 = *v24;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v26 = *(__int128 **)(v29 + 16);
    if ( v26 + 1 < v26 || (unsigned __int64)(v26 + 1) > W32UserProbeAddress )
      v26 = (__int128 *)W32UserProbeAddress;
    v34 = *v26;
    *a4 = v34;
  }
  return v25;
}
