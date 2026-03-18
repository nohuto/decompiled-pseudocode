/*
 * XREFs of KiWaitForAllObjects @ 0x1400E3B9C
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiWaitSatisfyOther @ 0x1400E33F4 (KiWaitSatisfyOther.c)
 *     KiBeginThreadWait @ 0x1400E4300 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x1400E4560 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x1400E45E0 (KiCheckWaitNext.c)
 *     KiWaitSatisfyMutant @ 0x140115618 (KiWaitSatisfyMutant.c)
 *     KiFastExitThreadWait @ 0x14011B0BC (KiFastExitThreadWait.c)
 *     KiUnlockKobjectArray @ 0x140125D2C (KiUnlockKobjectArray.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r13d
  __int64 *v10; // r15
  unsigned int v11; // r9d
  __int64 v12; // rdi
  volatile signed __int32 **v13; // r11
  volatile signed __int32 **v14; // rbx
  volatile signed __int32 *v15; // r10
  unsigned int v16; // r8d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v18; // rdx
  __int64 v19; // r9
  char v20; // r12
  volatile __int64 WaitStatus; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  char *v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  volatile signed __int32 *v27; // rsi
  unsigned int v28; // r14d
  volatile signed __int32 *v29; // rcx
  volatile signed __int32 **v30; // r15
  __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rsi
  char v35; // r10
  __int64 v36; // r8
  __int64 v38; // rcx
  unsigned int v39; // r9d
  unsigned int v40; // edx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // r10
  __int64 v44; // r9
  int v45; // r8d
  unsigned __int8 CurrentIrql; // al
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v48; // rdx
  __int64 v50; // r8
  __int64 v51; // r8
  char v52; // [rsp+30h] [rbp-D0h]
  unsigned int v54; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v55; // [rsp+38h] [rbp-C8h]
  int v56; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C0h]
  __int64 v58; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v59; // [rsp+50h] [rbp-B0h]
  volatile signed __int32 *v60; // [rsp+60h] [rbp-A0h] BYREF
  char v61; // [rsp+68h] [rbp-98h] BYREF

  v7 = a7;
  v8 = *a2;
  v9 = a3;
  v10 = a2;
  v11 = 1;
  v55 = a3;
  v59 = a2;
  v12 = a1;
  v57 = (__int64)a7;
  v60 = (volatile signed __int32 *)v8;
  if ( a1 > 1 )
  {
    v13 = (volatile signed __int32 **)(a2 + 1);
    v14 = &v60;
    do
    {
      v15 = *v13;
      v16 = v11;
      if ( *v14 > *v13 )
      {
        do
        {
          v38 = v16--;
          (&v60)[v38] = (&v60)[v16];
        }
        while ( v16 && *(&v60 + v16 - 1) > v15 );
      }
      ++v11;
      ++v14;
      ++v13;
      (&v60)[v16] = v15;
    }
    while ( v11 < (unsigned int)v12 );
  }
  CurrentThread = KeGetCurrentThread();
  v20 = KiCheckWaitNext((_DWORD)CurrentThread, a6, 0, (unsigned int)&v58, (__int64)&v54);
  v52 = v20;
  while ( 2 )
  {
    LOBYTE(v19) = a5;
    LOBYTE(v18) = a4;
    LODWORD(WaitStatus) = KiBeginThreadWait(CurrentThread, v18, v9, v19);
    if ( (_DWORD)WaitStatus )
      return (unsigned int)WaitStatus;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_DWORD)v12 )
    {
      v23 = (char *)v7 + 17;
      v24 = v10;
      v25 = v12;
      do
      {
        v26 = *v24;
        *(v23 - 1) = 0;
        *v23 = 4;
        *(_WORD *)(v23 + 1) = 0;
        if ( CurrentThread )
          *(_QWORD *)(v23 + 7) = CurrentThread;
        *(_QWORD *)(v23 + 15) = v26;
        ++v24;
        v23 += 48;
        --v25;
      }
      while ( v25 );
    }
    v27 = v60;
    v28 = 0;
    v29 = v60;
    CurrentThread->WaitStatus = 0LL;
    KiAcquireKobjectLockSafe(v29);
    if ( (unsigned int)v12 > 1 )
    {
      v30 = (volatile signed __int32 **)&v61;
      v31 = (unsigned int)(v12 - 1);
      do
      {
        if ( *v30 != v27 )
        {
          v27 = *v30;
          KiAcquireKobjectLockSafe(*v30);
        }
        ++v30;
        --v31;
      }
      while ( v31 );
      v10 = v59;
      v20 = v52;
    }
    do
    {
      v32 = v10[v28];
      if ( (*(_BYTE *)v32 & 0x7F) != 2 )
      {
        if ( *(int *)(v32 + 4) <= 0 )
          break;
        goto LABEL_20;
      }
      DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
      v48 = *(struct _KTHREAD **)(v32 + 40);
      if ( CurrentThread == v48 && *(_BYTE *)(v32 + 2) == DpcRoutineActive && *(_DWORD *)(v32 + 4) == 0x80000000 )
      {
        KiUnlockKobjectArray(&v60, (unsigned int)v12);
        LOBYTE(v50) = v20;
        KiFastExitThreadWait(CurrentPrcb, CurrentThread, v50);
        RtlRaiseStatus(-1073741423);
      }
      if ( *(int *)(v32 + 4) <= 0 && (CurrentThread != v48 || *(_BYTE *)(v32 + 2) != DpcRoutineActive) )
        break;
LABEL_20:
      ++v28;
    }
    while ( v28 < (unsigned int)v12 );
    if ( v28 == (_DWORD)v12 )
    {
      if ( (_DWORD)v12 )
      {
        v33 = v12;
        do
        {
          v34 = *v10;
          if ( !KiWaitSatisfyOther(*v10) && (*(_BYTE *)v34 & 0x7F) == v35 && (*(_DWORD *)(v34 + 4))-- == 1 )
          {
            v56 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v56);
              while ( CurrentThread->ThreadLock );
            }
            KiWaitSatisfyMutant(v34, CurrentThread, CurrentPrcb);
            CurrentThread->ThreadLock = 0LL;
          }
          ++v10;
          --v33;
        }
        while ( v33 );
        v20 = v52;
      }
      KiUnlockKobjectArray(&v60, (unsigned int)v12);
      WaitStatus = CurrentThread->WaitStatus;
      LOBYTE(v36) = v20;
      KiFastExitThreadWait(CurrentPrcb, CurrentThread, v36);
    }
    else
    {
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v54, v58) )
      {
        KiUnlockKobjectArray(&v60, (unsigned int)v12);
        LOBYTE(v51) = v20;
        KiFastExitThreadWait(CurrentPrcb, CurrentThread, v51);
        LODWORD(WaitStatus) = 258;
        return (unsigned int)WaitStatus;
      }
      v7 = (__int64 *)v57;
      v40 = v39;
      if ( (_DWORD)v12 )
      {
        v41 = (_QWORD *)v57;
        do
        {
          v42 = v41[4] + 8LL;
          v43 = *(_QWORD **)(v41[4] + 16LL);
          if ( *v43 != v42 )
            __fastfail(3u);
          *v41 = v42;
          ++v40;
          v41[1] = v43;
          *v43 = v41;
          *(_QWORD *)(v42 + 8) = v41;
          v41 += 6;
        }
        while ( v40 < (unsigned int)v12 );
      }
      KiUnlockKobjectArray(&v60, (unsigned int)v12);
      v44 = v58;
      v45 = v54;
      CurrentThread->WaitBlockCount = v12;
      LODWORD(WaitStatus) = KiCommitThreadWait((__int64)CurrentThread, v7, v45, v44);
      if ( (_DWORD)WaitStatus == 256 )
      {
        v20 = 0;
        v52 = 0;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v9 = v55;
        CurrentThread->WaitIrql = CurrentIrql;
        continue;
      }
    }
    return (unsigned int)WaitStatus;
  }
}
