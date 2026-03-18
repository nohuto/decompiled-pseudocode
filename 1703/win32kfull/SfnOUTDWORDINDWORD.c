/*
 * XREFs of SfnOUTDWORDINDWORD @ 0x1C01FD620
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnOUTDWORDINDWORD(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
        unsigned __int64 a5,
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
  _DWORD *v24; // rdx
  __int128 v26; // [rsp+60h] [rbp-98h]
  __int64 v27; // [rsp+70h] [rbp-88h]
  _QWORD v28[10]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v29[3]; // [rsp+C8h] [rbp-30h] BYREF
  int v30; // [rsp+108h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v28, 0, 0x30uLL);
  v28[0] = v12;
  LODWORD(v28[1]) = a2;
  v28[3] = a4;
  v28[4] = a5;
  v28[5] = a6;
  v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v29;
  v29[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v26 = *(_OWORD *)(v15 + 64);
  v27 = *(_QWORD *)(v15 + 80);
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
  EtwTraceBeginCallback(33LL);
  v18 = KeUserModeCallback(33LL, v28, 48LL, &a5, &v30);
  EtwTraceEndCallback(33LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v26;
  *(_QWORD *)(v21 + 80) = v27;
  if ( v18 < 0 || v30 != 24 )
    return 0LL;
  v22 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v24 = *(_DWORD **)(a5 + 16);
    if ( (unsigned __int64)v24 >= W32UserProbeAddress )
      v24 = (_DWORD *)W32UserProbeAddress;
    *a3 = *v24;
  }
  return v23;
}
