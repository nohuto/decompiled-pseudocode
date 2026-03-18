/*
 * XREFs of KiWaitForAllObjects @ 0x140086EF0
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiWaitSatisfyOther @ 0x140087F78 (KiWaitSatisfyOther.c)
 *     KiUnlockKobjectArray @ 0x14008802C (KiUnlockKobjectArray.c)
 *     KiCheckDueTimeExpired @ 0x140088E90 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x140088F10 (KiCheckWaitNext.c)
 *     KiFastExitThreadWait @ 0x140088FE4 (KiFastExitThreadWait.c)
 *     KiWaitSatisfyMutant @ 0x140089A18 (KiWaitSatisfyMutant.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiBeginThreadWait @ 0x1401268C0 (KiBeginThreadWait.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r14
  char v8; // r13
  __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // r9d
  __int64 *v12; // r12
  __int64 v13; // rdi
  unsigned __int64 *v14; // r11
  __int64 *v15; // rbx
  unsigned __int64 v16; // r10
  unsigned int v17; // r8d
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v20; // rdx
  __int64 v21; // r9
  char v22; // r15
  volatile __int64 WaitStatus; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rsi
  int v30; // r14d
  __int64 v31; // rcx
  char *v32; // r15
  __int64 v33; // r12
  __int64 v34; // rcx
  unsigned int v35; // r9d
  unsigned int v36; // edx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // r10
  __int64 v40; // r9
  __int64 v41; // r8
  unsigned __int8 CurrentIrql; // al
  __int64 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rdx
  int v46; // r9d
  char v47; // r10
  __int64 v48; // r8
  struct _KPRCB *v51; // r14
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r8
  char v56; // [rsp+30h] [rbp-D0h]
  unsigned int v58; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v59; // [rsp+38h] [rbp-C8h]
  int v60; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v61; // [rsp+40h] [rbp-C0h]
  __int64 v62; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v63; // [rsp+50h] [rbp-B0h]
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  char v65; // [rsp+68h] [rbp-98h] BYREF

  v7 = a7;
  v8 = a4;
  v9 = *a2;
  v10 = a3;
  v11 = 1;
  v59 = a3;
  v63 = a2;
  v12 = a2;
  v13 = a1;
  v61 = a7;
  v64 = v9;
  if ( a1 > 1 )
  {
    v14 = a2 + 1;
    v15 = &v64;
    do
    {
      v16 = *v14;
      v17 = v11;
      if ( *v15 > *v14 )
      {
        do
        {
          v18 = v17--;
          *(&v64 + v18) = *(&v64 + v17);
        }
        while ( v17 && *(&v64 + v17 - 1) > v16 );
      }
      ++v11;
      ++v15;
      ++v14;
      *(&v64 + v17) = v16;
    }
    while ( v11 < (unsigned int)v13 );
  }
  CurrentThread = KeGetCurrentThread();
  v22 = KiCheckWaitNext((_DWORD)CurrentThread, a6, 0, (unsigned int)&v62, (__int64)&v58);
  v56 = v22;
LABEL_8:
  LOBYTE(v21) = a5;
  LOBYTE(v20) = v8;
  LODWORD(WaitStatus) = KiBeginThreadWait(CurrentThread, v20, v10, v21);
  if ( !(_DWORD)WaitStatus )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_DWORD)v13 )
    {
      v25 = v7 + 17;
      v26 = v12;
      v27 = v13;
      do
      {
        v28 = *v26;
        *(_BYTE *)(v25 - 1) = 0;
        *(_BYTE *)v25 = 4;
        *(_WORD *)(v25 + 1) = 0;
        if ( CurrentThread )
          *(_QWORD *)(v25 + 7) = CurrentThread;
        *(_QWORD *)(v25 + 15) = v28;
        ++v26;
        v25 += 48LL;
        --v27;
      }
      while ( v27 );
    }
    v29 = v64;
    v30 = 0;
    v31 = v64;
    CurrentThread->WaitStatus = 0LL;
    KiAcquireKobjectLockSafe(v31);
    if ( (unsigned int)v13 > 1 )
    {
      v32 = &v65;
      v33 = (unsigned int)(v13 - 1);
      do
      {
        if ( *(_QWORD *)v32 != v29 )
        {
          v29 = *(_QWORD *)v32;
          KiAcquireKobjectLockSafe(*(_QWORD *)v32);
        }
        v32 += 8;
        --v33;
      }
      while ( v33 );
      v12 = v63;
      v22 = v56;
    }
    while ( 1 )
    {
      v34 = v12[v30];
      if ( (*(_BYTE *)v34 & 0x7F) == 2 )
      {
        DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
        v53 = *(struct _KTHREAD **)(v34 + 40);
        if ( CurrentThread == v53 && *(_BYTE *)(v34 + 2) == DpcRoutineActive && *(_DWORD *)(v34 + 4) == 0x80000000 )
        {
          KiUnlockKobjectArray(&v64, (unsigned int)v13);
          LOBYTE(v54) = v22;
          KiFastExitThreadWait(CurrentPrcb, CurrentThread, v54);
          RtlRaiseStatus(-1073741423);
        }
        if ( *(int *)(v34 + 4) <= 0 && (CurrentThread != v53 || *(_BYTE *)(v34 + 2) != DpcRoutineActive) )
        {
LABEL_23:
          if ( v30 == (_DWORD)v13 )
          {
            if ( (_DWORD)v13 )
            {
              v43 = v13;
              do
              {
                v44 = *v12;
                if ( !(unsigned __int8)KiWaitSatisfyOther(*v12)
                  && (*(_BYTE *)v44 & 0x7F) == v47
                  && (*(_DWORD *)(v44 + 4))-- == 1 )
                {
                  v51 = KeGetCurrentPrcb();
                  v60 = v46;
                  while ( 1 )
                  {
                    LOBYTE(v45) = 1;
                    KiSetVpThreadSpinLockCount(v51, v45);
                    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                      break;
                    KiSetVpThreadSpinLockCount(v51, 0LL);
                    do
                      KeYieldProcessorEx(&v60);
                    while ( CurrentThread->ThreadLock );
                  }
                  KiWaitSatisfyMutant(v44, CurrentThread, CurrentPrcb);
                  KiReleaseThreadLockSafe((__int64)CurrentThread);
                }
                ++v12;
                --v43;
              }
              while ( v43 );
            }
            KiUnlockKobjectArray(&v64, (unsigned int)v13);
            LOBYTE(v48) = v56;
            WaitStatus = CurrentThread->WaitStatus;
            KiFastExitThreadWait(CurrentPrcb, CurrentThread, v48);
          }
          else if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v58, v62) )
          {
            KiUnlockKobjectArray(&v64, (unsigned int)v13);
            LOBYTE(v55) = v22;
            KiFastExitThreadWait(CurrentPrcb, CurrentThread, v55);
            LODWORD(WaitStatus) = 258;
          }
          else
          {
            v7 = v61;
            v36 = v35;
            if ( (_DWORD)v13 )
            {
              v37 = (_QWORD *)v61;
              do
              {
                v38 = v37[4] + 8LL;
                v39 = *(_QWORD **)(v37[4] + 16LL);
                if ( *v39 != v38 )
                  __fastfail(3u);
                *v37 = v38;
                ++v36;
                v37[1] = v39;
                *v39 = v37;
                *(_QWORD *)(v38 + 8) = v37;
                v37 += 6;
              }
              while ( v36 < (unsigned int)v13 );
            }
            KiUnlockKobjectArray(&v64, (unsigned int)v13);
            v40 = v62;
            v41 = v58;
            CurrentThread->WaitBlockCount = v13;
            LODWORD(WaitStatus) = KiCommitThreadWait(CurrentThread, v7, v41, v40);
            if ( (_DWORD)WaitStatus == 256 )
            {
              v22 = 0;
              v56 = 0;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              v10 = v59;
              v8 = a4;
              CurrentThread->WaitIrql = CurrentIrql;
              goto LABEL_8;
            }
          }
          return (unsigned int)WaitStatus;
        }
      }
      else if ( *(int *)(v34 + 4) <= 0 )
      {
        goto LABEL_23;
      }
      if ( ++v30 >= (unsigned int)v13 )
        goto LABEL_23;
    }
  }
  return (unsigned int)WaitStatus;
}
