/*
 * XREFs of SfnINOUTDRAG @ 0x1C01FD360
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

__int64 __fastcall SfnINOUTDRAG(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // r8
  _OWORD *v33; // rcx
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v37; // [rsp+48h] [rbp-F0h]
  __int64 v38; // [rsp+58h] [rbp-E0h]
  _QWORD v39[3]; // [rsp+88h] [rbp-B0h] BYREF
  _QWORD v40[19]; // [rsp+A0h] [rbp-98h] BYREF
  char v41; // [rsp+140h] [rbp+8h] BYREF
  char v42; // [rsp+148h] [rbp+10h] BYREF
  int v43; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v44; // [rsp+158h] [rbp+20h] BYREF

  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v40, 0, 0x58uLL);
  v40[0] = v14;
  LODWORD(v40[1]) = v10;
  v40[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 44) = 0;
  *(_OWORD *)&v40[5] = *(_OWORD *)a4;
  *(_OWORD *)&v40[7] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v40[9] = *(_OWORD *)(a4 + 32);
  v40[3] = a5;
  v40[4] = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v39[0] = *(_QWORD *)(v18 + 392);
  *(_QWORD *)(v18 + 392) = v39;
  v39[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v21 = *(_QWORD *)(v13 + 456);
  v37 = *(_OWORD *)(v21 + 64);
  v38 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v14;
  if ( a1 )
    v22 = *(_QWORD *)a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v22;
  if ( a1 )
    v23 = *((_QWORD *)a1 + 35);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v41,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(5LL);
  v24 = KeUserModeCallback(5LL, v40, 88LL, &v44, &v43);
  EtwTraceEndCallback(5LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v41,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28);
  v30 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v30 + 64) = v37;
  *(_QWORD *)(v30 + 80) = v38;
  if ( v24 < 0 || v43 != 24 )
    return 0LL;
  v31 = (__int64 *)v44;
  if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  v32 = *v31;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v33 = *(_OWORD **)(v44 + 16);
    if ( v33 + 3 < v33 || (unsigned __int64)(v33 + 3) > MmUserProbeAddress )
      v33 = (_OWORD *)MmUserProbeAddress;
    v34 = v33[1];
    v35 = v33[2];
    *(_OWORD *)a4 = *v33;
    *(_OWORD *)(a4 + 16) = v34;
    *(_OWORD *)(a4 + 32) = v35;
  }
  return v32;
}
