/*
 * XREFs of SfnNCDESTROY @ 0x1C005C730
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnNCDESTROY(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rsi
  struct _KTHREAD *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // si
  int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rcx
  __int64 result; // rax
  __int128 v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+58h] [rbp-B0h]
  _QWORD v35[10]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v36[11]; // [rsp+B0h] [rbp-58h] BYREF
  int v37; // [rsp+110h] [rbp+8h] BYREF
  char v38; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v39; // [rsp+120h] [rbp+18h] BYREF

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
  memset(v35, 0, 0x30uLL);
  v35[0] = v13;
  LODWORD(v35[1]) = v8;
  v35[2] = a3;
  v35[3] = a4;
  v35[4] = a5;
  v35[5] = a6;
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16, v18, v19) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v14);
    if ( v20 )
      v15 = *v20;
  }
  v36[0] = *(_QWORD *)(v15 + 392);
  *(_QWORD *)(v15 + 392) = v36;
  v36[1] = a1;
  if ( a1 )
    _InterlockedAdd(a1 + 2, 1u);
  v21 = *(_QWORD *)(v11 + 456);
  v33 = *(_OWORD *)(v21 + 64);
  v34 = *(_QWORD *)(v21 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38);
  v26 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v25, v24);
  EtwTraceBeginCallback(3LL);
  v27 = KeUserModeCallback(3LL, v35, 48LL, &v39, &v37);
  EtwTraceEndCallback(3LL);
  if ( v26 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38);
  *((_QWORD *)a1 + 35) = 0LL;
  ThreadUnlock1(v29, v28);
  v30 = *(_QWORD *)(v11 + 456);
  *(_OWORD *)(v30 + 64) = v33;
  *(_QWORD *)(v30 + 80) = v34;
  if ( v27 < 0 || v37 != 24 )
    return 0LL;
  v31 = (__int64 *)v39;
  if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  result = *v31;
  v35[6] = *v31;
  return result;
}
