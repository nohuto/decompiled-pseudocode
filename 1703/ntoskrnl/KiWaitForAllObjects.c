/*
 * XREFs of KiWaitForAllObjects @ 0x140017B70
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KiUnlockKobjectArray @ 0x140017EEC (KiUnlockKobjectArray.c)
 *     KiFastExitThreadWait @ 0x140017F24 (KiFastExitThreadWait.c)
 *     KiWaitSatisfyMutant @ 0x140018280 (KiWaitSatisfyMutant.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiCheckDueTimeExpired @ 0x140044A30 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x140044AC0 (KiCheckWaitNext.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiWaitSatisfyOther @ 0x140051968 (KiWaitSatisfyOther.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1400FC780 (KiBeginThreadWait.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
  __int64 v8; // rax
  unsigned int v9; // r13d
  __int64 *v10; // r15
  unsigned int v11; // r9d
  __int64 v12; // rdi
  unsigned __int64 *v13; // r11
  __int64 *v14; // rbx
  unsigned __int64 v15; // r10
  unsigned int v16; // r8d
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v19; // rdx
  __int64 v20; // r9
  char v21; // r12
  volatile __int64 WaitStatus; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rsi
  int v29; // r14d
  __int64 v30; // rcx
  char *v31; // r15
  __int64 v32; // r12
  __int64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int v35; // edx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // r10
  __int64 v39; // r9
  __int64 v40; // r8
  unsigned __int8 CurrentIrql; // al
  __int64 v42; // r14
  __int64 v43; // rsi
  char v44; // r10
  __int64 v45; // r8
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r8
  char v52; // [rsp+30h] [rbp-D0h]
  unsigned int v54; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v55; // [rsp+38h] [rbp-C8h]
  int v56; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C0h]
  __int64 v58; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v59; // [rsp+50h] [rbp-B0h]
  __int64 v60; // [rsp+60h] [rbp-A0h] BYREF
  char v61; // [rsp+68h] [rbp-98h] BYREF

  v7 = a7;
  v8 = *a2;
  v9 = a3;
  v10 = a2;
  v11 = 1;
  v55 = a3;
  v59 = a2;
  v12 = a1;
  v57 = a7;
  v60 = v8;
  if ( a1 > 1 )
  {
    v13 = a2 + 1;
    v14 = &v60;
    do
    {
      v15 = *v13;
      v16 = v11;
      if ( *v14 > *v13 )
      {
        do
        {
          v17 = v16--;
          *(&v60 + v17) = *(&v60 + v16);
        }
        while ( v16 && *(&v60 + v16 - 1) > v15 );
      }
      ++v11;
      ++v14;
      ++v13;
      *(&v60 + v16) = v15;
    }
    while ( v11 < (unsigned int)v12 );
  }
  CurrentThread = KeGetCurrentThread();
  v21 = KiCheckWaitNext((_DWORD)CurrentThread, a6, 0, (unsigned int)&v58, (__int64)&v54);
  v52 = v21;
LABEL_8:
  LOBYTE(v20) = a5;
  LOBYTE(v19) = a4;
  LODWORD(WaitStatus) = KiBeginThreadWait(CurrentThread, v19, v9, v20);
  if ( !(_DWORD)WaitStatus )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_DWORD)v12 )
    {
      v24 = v7 + 17;
      v25 = v10;
      v26 = v12;
      do
      {
        v27 = *v25;
        *(_BYTE *)(v24 - 1) = 0;
        *(_BYTE *)v24 = 4;
        *(_WORD *)(v24 + 1) = 0;
        if ( CurrentThread )
          *(_QWORD *)(v24 + 7) = CurrentThread;
        *(_QWORD *)(v24 + 15) = v27;
        ++v25;
        v24 += 48LL;
        --v26;
      }
      while ( v26 );
    }
    v28 = v60;
    v29 = 0;
    v30 = v60;
    CurrentThread->WaitStatus = 0LL;
    KiAcquireKobjectLockSafe(v30);
    if ( (unsigned int)v12 > 1 )
    {
      v31 = &v61;
      v32 = (unsigned int)(v12 - 1);
      do
      {
        if ( *(_QWORD *)v31 != v28 )
        {
          v28 = *(_QWORD *)v31;
          KiAcquireKobjectLockSafe(*(_QWORD *)v31);
        }
        v31 += 8;
        --v32;
      }
      while ( v32 );
      v10 = v59;
      v21 = v52;
    }
    while ( 1 )
    {
      v33 = v10[v29];
      if ( (*(_BYTE *)v33 & 0x7F) == 2 )
      {
        DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
        v49 = *(struct _KTHREAD **)(v33 + 40);
        if ( CurrentThread == v49 && *(_BYTE *)(v33 + 2) == DpcRoutineActive && *(_DWORD *)(v33 + 4) == 0x80000000 )
        {
          KiUnlockKobjectArray(&v60, (unsigned int)v12);
          LOBYTE(v50) = v21;
          KiFastExitThreadWait(CurrentPrcb, CurrentThread, v50);
          RtlRaiseStatus(-1073741423);
        }
        if ( *(int *)(v33 + 4) <= 0 && (CurrentThread != v49 || *(_BYTE *)(v33 + 2) != DpcRoutineActive) )
        {
LABEL_23:
          if ( v29 == (_DWORD)v12 )
          {
            if ( (_DWORD)v12 )
            {
              v42 = v12;
              do
              {
                v43 = *v10;
                if ( !(unsigned __int8)KiWaitSatisfyOther(*v10)
                  && (*(_BYTE *)v43 & 0x7F) == v44
                  && (*(_DWORD *)(v43 + 4))-- == 1 )
                {
                  v56 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                  {
                    do
                      KeYieldProcessorEx(&v56);
                    while ( CurrentThread->ThreadLock );
                  }
                  KiWaitSatisfyMutant(v43, CurrentThread, CurrentPrcb);
                  CurrentThread->ThreadLock = 0LL;
                }
                ++v10;
                --v42;
              }
              while ( v42 );
              v21 = v52;
            }
            KiUnlockKobjectArray(&v60, (unsigned int)v12);
            WaitStatus = CurrentThread->WaitStatus;
            LOBYTE(v45) = v21;
            KiFastExitThreadWait(CurrentPrcb, CurrentThread, v45);
          }
          else if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v54, v58) )
          {
            KiUnlockKobjectArray(&v60, (unsigned int)v12);
            LOBYTE(v51) = v21;
            KiFastExitThreadWait(CurrentPrcb, CurrentThread, v51);
            LODWORD(WaitStatus) = 258;
          }
          else
          {
            v7 = v57;
            v35 = v34;
            if ( (_DWORD)v12 )
            {
              v36 = (_QWORD *)v57;
              do
              {
                v37 = v36[4] + 8LL;
                v38 = *(_QWORD **)(v36[4] + 16LL);
                if ( *v38 != v37 )
                  __fastfail(3u);
                *v36 = v37;
                ++v35;
                v36[1] = v38;
                *v38 = v36;
                *(_QWORD *)(v37 + 8) = v36;
                v36 += 6;
              }
              while ( v35 < (unsigned int)v12 );
            }
            KiUnlockKobjectArray(&v60, (unsigned int)v12);
            v39 = v58;
            v40 = v54;
            CurrentThread->WaitBlockCount = v12;
            LODWORD(WaitStatus) = KiCommitThreadWait(CurrentThread, v7, v40, v39);
            if ( (_DWORD)WaitStatus == 256 )
            {
              v21 = 0;
              v52 = 0;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              v9 = v55;
              CurrentThread->WaitIrql = CurrentIrql;
              goto LABEL_8;
            }
          }
          return (unsigned int)WaitStatus;
        }
      }
      else if ( *(int *)(v33 + 4) <= 0 )
      {
        goto LABEL_23;
      }
      if ( ++v29 >= (unsigned int)v12 )
        goto LABEL_23;
    }
  }
  return (unsigned int)WaitStatus;
}
