/*
 * XREFs of SfnOUTLPCOMBOBOXINFO @ 0x1C005C220
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnOUTLPCOMBOBOXINFO(
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
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdi
  struct _KTHREAD *v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // r8
  _OWORD *v34; // rcx
  __int128 v35; // xmm3
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  char v39; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v40[3]; // [rsp+31h] [rbp-127h] BYREF
  _DWORD v41[5]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-110h] BYREF
  __int128 v43; // [rsp+58h] [rbp-100h]
  __int64 v44; // [rsp+68h] [rbp-F0h]
  __int64 v45; // [rsp+70h] [rbp-E8h]
  _QWORD v46[3]; // [rsp+98h] [rbp-C0h] BYREF
  _QWORD v47[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v10 = a2;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v15 = (__int64)a1 - *(_QWORD *)(v13 + 448);
  else
    v15 = 0LL;
  memset(v47, 0, 0x68uLL);
  v47[0] = v15;
  LODWORD(v47[1]) = v10;
  v47[2] = a3;
  *(_OWORD *)&v47[3] = *a4;
  *(_OWORD *)&v47[5] = a4[1];
  *(_OWORD *)&v47[7] = a4[2];
  *(_OWORD *)&v47[9] = a4[3];
  v47[11] = a5;
  v47[12] = a6;
  v16 = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18, v20, v21) )
  {
    v22 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v22 )
      v17 = *v22;
  }
  v46[0] = *(_QWORD *)(v17 + 392);
  *(_QWORD *)(v17 + 392) = v46;
  v46[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v23 = *(_QWORD *)(v13 + 456);
  v43 = *(_OWORD *)(v23 + 64);
  v44 = *(_QWORD *)(v23 + 80);
  *(_QWORD *)(v23 + 72) = v15;
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v40);
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || (v39 = 1, !ExIsResourceAcquiredSharedLite(gpresUser)) )
    v39 = 0;
  UserSessionSwitchLeaveCrit(v27, v26);
  EtwTraceBeginCallback(104LL);
  v28 = KeUserModeCallback(104LL, v47, 104LL, &v42, v41);
  EtwTraceEndCallback(104LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v40);
  ThreadUnlock1(v30, v29);
  v31 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v31 + 64) = v43;
  *(_QWORD *)(v31 + 80) = v44;
  if ( v28 < 0 || v41[0] != 24 )
    return 0LL;
  v32 = (__int64 *)v42;
  if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  v33 = *v32;
  v45 = *v32;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v34 = *(_OWORD **)(v42 + 16);
    if ( v34 + 4 < v34 || (unsigned __int64)(v34 + 4) > MmUserProbeAddress )
      v34 = (_OWORD *)MmUserProbeAddress;
    v35 = v34[1];
    v36 = v34[2];
    v37 = v34[3];
    *a4 = *v34;
    a4[1] = v35;
    a4[2] = v36;
    a4[3] = v37;
  }
  return v33;
}
