/*
 * XREFs of ClientGetMessageMPH @ 0x1C005C0BC
 * Callers:
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C00A3B80 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C00A65A0 (NtUserPeekMessage.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  int v15; // [rsp+50h] [rbp-18h]
  int v16; // [rsp+54h] [rbp-14h]
  int v17; // [rsp+58h] [rbp-10h]
  int v18; // [rsp+5Ch] [rbp-Ch]
  unsigned __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  int v20; // [rsp+80h] [rbp+18h] BYREF

  v14 = a2;
  v15 = a3;
  v16 = a4;
  v17 = a5;
  v18 = a6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a6);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(73LL);
  v7 = KeUserModeCallback(73LL, &v14, 24LL, &v19, &v20);
  EtwTraceEndCallback(73LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a6);
  if ( v7 < 0 || v20 != 24 )
    return 0LL;
  v8 = (__int64 *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  v10 = *(_OWORD **)(v19 + 16);
  if ( v10 + 3 < v10 || (unsigned __int64)(v10 + 3) > MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v11 = v10[1];
  v12 = v10[2];
  *a1 = *v10;
  a1[1] = v11;
  a1[2] = v12;
  return (unsigned int)v9;
}
