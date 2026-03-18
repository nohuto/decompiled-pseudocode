/*
 * XREFs of SfnEMPTY @ 0x1C005BE50
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnEMPTY(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rdi
  struct _KTHREAD *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 result; // rax
  __int128 v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+58h] [rbp-B0h]
  _QWORD v32[10]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v33[11]; // [rsp+B0h] [rbp-58h] BYREF
  char v34; // [rsp+110h] [rbp+8h] BYREF
  char v35; // [rsp+118h] [rbp+10h] BYREF
  int v36; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v37; // [rsp+128h] [rbp+20h] BYREF

  v8 = a2;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v13 = (__int64)a1 - *(_QWORD *)(v11 + 448);
  else
    v13 = 0LL;
  memset(v32, 0, 0x30uLL);
  v32[0] = v13;
  LODWORD(v32[1]) = v8;
  v32[2] = a3;
  v32[3] = a4;
  v32[4] = a5;
  v32[5] = a6;
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16, v18, v19) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v14);
    if ( v20 )
      v15 = *v20;
  }
  v33[0] = *(_QWORD *)(v15 + 392);
  *(_QWORD *)(v15 + 392) = v33;
  v33[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v21 = *(_QWORD *)(v11 + 456);
  v30 = *(_OWORD *)(v21 + 64);
  v31 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v13;
  if ( a1 )
    v22 = *(_QWORD *)a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 456) + 64LL) = v22;
  if ( a1 )
    v23 = *((_QWORD *)a1 + 35);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 456) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v34);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(117LL);
  v24 = KeUserModeCallback(117LL, v32, 48LL, &v37, &v36);
  EtwTraceEndCallback(117LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v34);
  ThreadUnlock1(v26, v25);
  v27 = *(_QWORD *)(v11 + 456);
  *(_OWORD *)(v27 + 64) = v30;
  *(_QWORD *)(v27 + 80) = v31;
  if ( v24 < 0 || v36 != 24 )
    return 0LL;
  v28 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v28 = (__int64 *)MmUserProbeAddress;
  result = *v28;
  v32[6] = *v28;
  return result;
}
