/*
 * XREFs of SfnINDESTROYCLIPBRD @ 0x1C011A280
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnINDESTROYCLIPBRD(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 result; // rax
  __int128 v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+58h] [rbp-B0h]
  _QWORD v33[10]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v34[11]; // [rsp+B0h] [rbp-58h] BYREF
  char v35; // [rsp+110h] [rbp+8h] BYREF
  char v36; // [rsp+118h] [rbp+10h] BYREF
  int v37; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v38; // [rsp+128h] [rbp+20h] BYREF

  v8 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v12 = 0LL;
  memset(v33, 0, 0x30uLL);
  v33[0] = v12;
  LODWORD(v33[1]) = v8;
  v33[2] = a3;
  v33[3] = a4;
  v33[4] = a5;
  v33[5] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v34[0] = *(_QWORD *)(v16 + 392);
  *(_QWORD *)(v16 + 392) = v34;
  v34[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v19 = *(_QWORD *)(v11 + 456);
  v31 = *(_OWORD *)(v19 + 64);
  v32 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v12;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 456) + 64LL) = v20;
  if ( a1 )
    v21 = *((_QWORD *)a1 + 35);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 456) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v35,
    gdwInAtomicOperation,
    v17,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(25LL);
  v22 = KeUserModeCallback(25LL, v33, 48LL, &v38, &v37);
  EtwTraceEndCallback(25LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v35,
    v23,
    v24,
    v25);
  ThreadUnlock1(v27, v26);
  v28 = *(_QWORD *)(v11 + 456);
  *(_OWORD *)(v28 + 64) = v31;
  *(_QWORD *)(v28 + 80) = v32;
  if ( v22 < 0 || v37 != 24 )
    return 0LL;
  v29 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v29 = (__int64 *)MmUserProbeAddress;
  result = *v29;
  v33[6] = *v29;
  return result;
}
