/*
 * XREFs of KiTimer2Expiration @ 0x140047B60
 * Callers:
 *     KiRetireDpcList @ 0x1400F18D0 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x14013B650 (KiTimerExpirationDpc.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14001B6F0 (KeRemoveQueueDpcEx.c)
 *     KiSendClockInterruptToClockOwner @ 0x14002EA08 (KiSendClockInterruptToClockOwner.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveTimer2 @ 0x140047F00 (KiRemoveTimer2.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KiInsertTimer2 @ 0x14004B87C (KiInsertTimer2.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KiReadyThread @ 0x1400E2E20 (KiReadyThread.c)
 *     KiUpdateTimer2Flags @ 0x14012AFB0 (KiUpdateTimer2Flags.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     KiSetForceIdleState @ 0x140206178 (KiSetForceIdleState.c)
 *     EtwTraceReadyThread @ 0x140253B0C (EtwTraceReadyThread.c)
 */

unsigned __int64 __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  unsigned __int64 i; // rbx
  volatile signed __int32 *v13; // rbx
  _QWORD *v14; // rdi
  __int64 v15; // r15
  char v16; // si
  __int64 v17; // r14
  volatile signed __int32 *v18; // rbx
  char v19; // al
  __int64 **v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // rdi
  __int64 *v23; // rbx
  __int64 *v24; // r14
  unsigned __int32 j; // eax
  volatile signed __int32 **v26; // rax
  volatile signed __int32 *v27; // r12
  __int64 *v28; // rcx
  __int64 **v29; // rax
  __int64 v30; // rdx
  volatile signed __int32 *v31; // rcx
  __int64 v32; // r8
  char inserted; // al
  char v34[8]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD *v35; // [rsp+40h] [rbp-41h] BYREF
  volatile signed __int32 *v36; // [rsp+48h] [rbp-39h]
  int v37; // [rsp+50h] [rbp-31h]
  int v38; // [rsp+54h] [rbp-2Dh] BYREF
  int v39; // [rsp+58h] [rbp-29h] BYREF
  __int64 v40; // [rsp+60h] [rbp-21h]
  __int64 v41; // [rsp+68h] [rbp-19h]
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v43[2]; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp+7h] BYREF
  char v45; // [rsp+90h] [rbp+Fh]
  void *retaddr; // [rsp+E0h] [rbp+5Fh]

  result = KiNextTimer2DueTime;
  v41 = a4;
  v40 = a1;
  if ( a2 < KiNextTimer2DueTime )
    return result;
  v36 = (volatile signed __int32 *)&v35;
  v35 = &v35;
  LOBYTE(v37) = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  v8 = 0;
  v9 = 4LL;
  if ( !a3 )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      v44 = a2;
      v43[0] = &v44;
      v45 = 1;
      v43[1] = 16LL;
      EtwTraceKernelEvent((unsigned int)v43, 1, 1073872896, 3920, 1538);
    }
    v8 = 1;
    v9 = 2LL;
  }
  v10 = v8;
  v11 = (_QWORD *)((char *)&unk_140356748 + 24 * v8);
  do
  {
    for ( i = *v11 & 0xFFFFFFFFFFFFFFFEuLL; i; i = *v11 & 0xFFFFFFFFFFFFFFFEuLL )
    {
      v13 = (volatile signed __int32 *)(i - 24 * ((unsigned __int64)v8 >> 1));
      if ( a2 < *((_QWORD *)v13 + 6) )
        break;
      KiRemoveTimer2(v13 - 6);
      v7 = *((unsigned int *)v13 - 6);
      for ( j = _InterlockedCompareExchange(v13 - 6, *(v13 - 6) & 0xFFFFF0FF | 0x200, *((_DWORD *)v13 - 6));
            (_DWORD)v7 != j;
            j = _InterlockedCompareExchange(v13 - 6, j & 0xFFFFF0FF | 0x200, j) )
      {
        v7 = j;
      }
      v26 = (volatile signed __int32 **)v36;
      if ( *(_QWORD ***)v36 != &v35 )
        __fastfail(3u);
      *((_QWORD *)v13 + 1) = v36;
      *(_QWORD *)v13 = &v35;
      *v26 = v13;
      v36 = v13;
    }
    ++v8;
    ++v10;
    v11 += 3;
  }
  while ( v10 < v9 );
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
  v14 = v35;
  v15 = v40;
  if ( v35 == &v35 )
    goto LABEL_21;
  v16 = v37;
  v17 = v41;
  do
  {
    v18 = (volatile signed __int32 *)(v14 - 3);
    v38 = 0;
    v14 = (_QWORD *)*v14;
    while ( _interlockedbittestandset(v18, 7u) )
    {
      do
        KeYieldProcessorEx(&v38);
      while ( (*v18 & 0x80u) != 0 );
    }
    v19 = *((_BYTE *)v18 + 1);
    if ( (v19 & 2) != 0 )
    {
      if ( (*((_BYTE *)v18 + 129) & 2) != 0 )
        v16 = 1;
LABEL_18:
      KiExpireTimer2(v18, v15, a2, v17);
      continue;
    }
    v30 = 0LL;
    v31 = v18;
    if ( (v19 & 8) != 0 )
    {
      inserted = KiInsertTimer2(v18, 0LL, v34);
      v31 = v18;
      if ( !inserted )
      {
        if ( (*((_BYTE *)v18 + 129) & 2) != 0 )
          v16 = 1;
        goto LABEL_18;
      }
      v32 = 0LL;
      v30 = 1LL;
    }
    else
    {
      v32 = 4LL;
    }
    KiUpdateTimer2Flags(v31, v30, v32);
  }
  while ( v14 != &v35 );
  if ( v16 && !KiForceIdleDisabled )
  {
    _disable();
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v39);
      while ( KiForceIdleLock );
    }
    if ( KiForceIdleState == 1 )
    {
      KeRemoveQueueDpcEx((int *)&KiForceIdleStartDpc, 0);
      KiSetForceIdleState(2LL);
    }
    else if ( KiForceIdleState != 2 )
    {
      goto LABEL_47;
    }
    v7 = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
       + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    KiForceIdleStartTime = v7;
LABEL_47:
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    _enable();
  }
LABEL_21:
  v20 = *(__int64 ***)(v15 + 11528);
  if ( v20 )
  {
    *(_QWORD *)(v15 + 11528) = 0LL;
    do
    {
      v21 = *((unsigned __int8 *)v20 + 371);
      v22 = (__int64 *)(v20 - 27);
      v23 = *(v20 - 1);
      v20 = (__int64 **)*v20;
      v24 = &v23[6 * v21];
      do
      {
        if ( *((_BYTE *)v23 + 17) < 5u )
        {
          v27 = (volatile signed __int32 *)v23[4];
          KiAcquireKobjectLockSafe(v27);
          if ( *((_BYTE *)v23 + 17) == 4 )
          {
            v28 = (__int64 *)*v23;
            v29 = (__int64 **)v23[1];
            if ( *(__int64 **)(*v23 + 8) != v23 || *v29 != v23 )
              __fastfail(3u);
            *v29 = v28;
            v28[1] = (__int64)v29;
          }
          _InterlockedAnd(v27, 0xFFFFFF7F);
        }
        v23 += 6;
      }
      while ( v23 != v24 );
      *((_WORD *)v22 + 283) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(v7) = 1;
        EtwTraceReadyThread(v22, v7, 0LL, 2LL);
      }
      KiReadyThread(v15, v22);
    }
    while ( v20 );
  }
  result = (unsigned __int8)KiHRTimerClockActive;
  if ( !KiHRTimerClockActive )
  {
    result = MEMORY[0xFFFFF78000000008] + KeMaximumIncrement;
    if ( qword_140356768 < result )
      return KiSendClockInterruptToClockOwner();
  }
  return result;
}
