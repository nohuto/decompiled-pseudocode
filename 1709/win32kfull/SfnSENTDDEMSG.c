/*
 * XREFs of SfnSENTDDEMSG @ 0x1C01FFEF0
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
 *     xxxDDETrackGetMessageHook @ 0x1C01F19F0 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  int v9; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  signed int v14; // r14d
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
  __int64 result; // rax
  _DWORD v33[8]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v35[7]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+90h] [rbp-A8h] BYREF
  int v37; // [rsp+98h] [rbp-A0h]
  __int64 v38; // [rsp+A0h] [rbp-98h]
  __int64 v39; // [rsp+A8h] [rbp-90h]
  __int128 v40; // [rsp+C0h] [rbp-78h]
  __int64 v41; // [rsp+D0h] [rbp-68h]
  __int64 v42; // [rsp+D8h] [rbp-60h]
  _QWORD v43[8]; // [rsp+F8h] [rbp-40h] BYREF
  char v44; // [rsp+140h] [rbp+8h] BYREF
  char v45; // [rsp+148h] [rbp+10h] BYREF

  v9 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v13 = 0LL;
  memset(v35, 0, sizeof(v35));
  v14 = v9 & 0xBFFFFFFF;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v43[0] = *(_QWORD *)(v18 + 392);
  *(_QWORD *)(v18 + 392) = v43;
  v43[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v21 = *(_QWORD *)(v12 + 456);
  v40 = *(_OWORD *)(v21 + 64);
  v41 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v13;
  if ( a1 )
    v22 = *(_QWORD *)a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 456) + 64LL) = v22;
  if ( a1 )
    v23 = *((_QWORD *)a1 + 35);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 456) + 80LL) = v23;
  if ( v14 >= 0 )
  {
    v35[0] = v13;
    LODWORD(v35[1]) = v14;
    v35[2] = a3;
    v35[3] = a4;
  }
  else
  {
    if ( a1 )
      v36 = *(_QWORD *)a1;
    else
      v36 = 0LL;
    v37 = v14 & 0x7FFFFFFF;
    v38 = a3;
    v39 = a4;
    xxxDDETrackGetMessageHook((__int64)&v36);
    v35[0] = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v36) - *(_QWORD *)(v12 + 448);
    LODWORD(v35[1]) = v37;
    v35[2] = v38;
    v35[3] = v39;
  }
  v35[4] = a5;
  v35[5] = a6;
  LODWORD(v35[6]) = (a7 & 1) == 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v44,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  EtwTraceBeginCallback(38LL);
  v24 = KeUserModeCallback(38LL, v35, 56LL, &v34, v33);
  EtwTraceEndCallback(38LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v44,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28);
  v30 = *(_QWORD *)(v12 + 456);
  *(_OWORD *)(v30 + 64) = v40;
  *(_QWORD *)(v30 + 80) = v41;
  if ( v24 < 0 || v33[0] != 24 )
    return 0LL;
  v31 = (__int64 *)v34;
  if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  result = *v31;
  v42 = *v31;
  return result;
}
