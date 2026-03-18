/*
 * XREFs of SfnINOUTLPRECT @ 0x1C00FF4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnINOUTLPRECT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
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
  __int128 v22; // xmm6
  __int64 v23; // xmm7_8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rdx
  __int128 *v35; // rcx
  char v37; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v38[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v39[5]; // [rsp+34h] [rbp-114h] BYREF
  _QWORD v40[7]; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v41[3]; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+98h] [rbp-B0h]
  __int64 v43; // [rsp+A8h] [rbp-A0h]
  __int128 v44; // [rsp+B0h] [rbp-98h]
  _QWORD v45[7]; // [rsp+C0h] [rbp-88h] BYREF

  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v45, 0, sizeof(v45));
  v45[0] = v14;
  LODWORD(v45[1]) = v10;
  v45[2] = a3;
  *(_OWORD *)&v45[3] = *a4;
  v45[5] = a5;
  v45[6] = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v41[0] = *(_QWORD *)(v18 + 392);
  *(_QWORD *)(v18 + 392) = v41;
  v41[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v21 = *(_QWORD *)(v13 + 456);
  v22 = *(_OWORD *)(v21 + 64);
  v42 = v22;
  v23 = *(_QWORD *)(v21 + 80);
  v43 = v23;
  *(_QWORD *)(v21 + 72) = v14;
  if ( a1 )
    v24 = *(_QWORD *)a1;
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v24;
  if ( a1 )
    v25 = *((_QWORD *)a1 + 35);
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v25;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v38,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(20LL);
  v26 = KeUserModeCallback(20LL, v45, 56LL, v40, v39);
  EtwTraceEndCallback(20LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v38,
    v27,
    v28,
    v29);
  ThreadUnlock1(v31, v30);
  v32 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v32 + 64) = v22;
  *(_QWORD *)(v32 + 80) = v23;
  if ( v26 < 0 || v39[0] != 24 )
    return 0LL;
  v33 = (__int64 *)v40[0];
  if ( (unsigned __int64)(v40[0] + 8LL) < v40[0] || v40[0] + 8LL > MmUserProbeAddress )
    v33 = (__int64 *)MmUserProbeAddress;
  v34 = *v33;
  v40[2] = *v33;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v35 = *(__int128 **)(v40[0] + 16LL);
    if ( v35 + 1 < v35 || (unsigned __int64)(v35 + 1) > MmUserProbeAddress )
      v35 = (__int128 *)MmUserProbeAddress;
    v44 = *v35;
    *a4 = v44;
  }
  return v34;
}
