/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x14050FF00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PspSendJobNotification @ 0x1400D2E84 (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 *     PspLockJobShared @ 0x14050FED0 (PspLockJobShared.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405102E0 (PspLockJobExclusive.c)
 *     PspGetEffectiveNoWakeCharge @ 0x140510638 (PspGetEffectiveNoWakeCharge.c)
 *     PspAddAccountingValues @ 0x140510738 (PspAddAccountingValues.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140510788 (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1405107E4 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x140510834 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x140510974 (PspRateControlLimitFlag.c)
 *     PspSendReliableJobNotification @ 0x140512674 (PspSendReliableJobNotification.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140591C84 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140717D84 (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(PRKEVENT Event, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rax
  struct _LIST_ENTRY *Flink; // r15
  struct _LIST_ENTRY *Blink; // r12
  struct _LIST_ENTRY *v8; // r13
  int Blink_high; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r15d
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rcx
  char *v16; // r9
  char *v17; // r10
  _DWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  bool v22; // zf
  struct _LIST_ENTRY *v23; // rcx
  struct _LIST_ENTRY *v24; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  char *v30; // rax
  __int64 v31; // rcx
  char *v32; // r8
  char *v33; // r9
  _DWORD *v34; // rdx
  _DWORD *v35; // rdx
  int v36; // ecx
  char *v37; // rcx
  __int64 v38; // rcx
  int v39; // [rsp+24h] [rbp-DCh]
  struct _LIST_ENTRY *v40; // [rsp+28h] [rbp-D8h]
  struct _LIST_ENTRY *v41; // [rsp+30h] [rbp-D0h]
  __int64 v42; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v44[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v45; // [rsp+60h] [rbp-A0h]
  LIST_ENTRY WaitListHead; // [rsp+A0h] [rbp-60h]
  _OWORD v47[4]; // [rsp+C0h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspLockJobShared((__int64)Event, (__int64)CurrentThread);
  v5 = *(_QWORD *)&Event[41].Header.Lock;
  if ( v5 )
  {
    v26 = *(_OWORD *)(v5 + 24);
    v47[0] = *(_OWORD *)(v5 + 8);
    v27 = *(_OWORD *)(v5 + 40);
    v47[1] = v26;
    v28 = *(_OWORD *)(v5 + 56);
    v47[2] = v27;
    v47[3] = v28;
  }
  else
  {
    memset(v47, 0, sizeof(v47));
  }
  Flink = Event[21].Header.WaitListHead.Flink;
  Blink = Event[21].Header.WaitListHead.Blink;
  v8 = Event[6].Header.WaitListHead.Blink;
  v41 = Event[7].Header.WaitListHead.Blink;
  Blink_high = HIDWORD(Event[18].Header.WaitListHead.Blink);
  v45 = *(_OWORD *)&Event[46].Header.WaitListHead.Blink;
  v39 = Blink_high;
  v10 = (int)Event[10].Header.WaitListHead.Blink;
  WaitListHead = Event[49].Header.WaitListHead;
  if ( (v10 & 4) != 0 )
    v40 = Event[9].Header.WaitListHead.Blink;
  else
    v40 = 0LL;
  PspGetEffectiveNoWakeCharge(Event, &v43, &v42);
  PspUnlockJob(v11, CurrentThread);
  if ( *(_QWORD *)&v47[0] )
  {
    v37 = (char *)Flink + (unsigned __int64)WaitListHead.Flink;
    v12 = 0;
    if ( (unsigned __int64)v37 > *(_QWORD *)&v47[0] )
      v12 = 0x10000;
  }
  else
  {
    v12 = 0;
  }
  if ( *((_QWORD *)&v47[0] + 1)
    && (unsigned __int64)Blink + (unsigned __int64)WaitListHead.Blink > *((_QWORD *)&v47[0] + 1) )
  {
    v12 |= 0x20000u;
  }
  if ( *(_QWORD *)&v47[1] && (unsigned __int64)v8 + *((_QWORD *)&v45 + 1) > *(_QWORD *)&v47[1] )
    v12 |= 4u;
  v13 = *(_QWORD *)&v47[2];
  if ( *(_QWORD *)&v47[2] || (v14 = *((_QWORD *)&v47[1] + 1)) != 0 )
  {
    PspLockJobMemoryLimitsShared(Event, CurrentThread);
    v12 |= PspGetJobMemoryUsageNotificationViolations(
             Event,
             Event[40].Header.WaitListHead.Blink,
             (char *)Event[40].Header.WaitListHead.Blink + *(_QWORD *)&Event[55].Header.Lock,
             33280LL);
    PspUnlockJobMemoryLimitsShared(Event, CurrentThread);
    v13 = *(_QWORD *)&v47[2];
    v14 = *((_QWORD *)&v47[1] + 1);
  }
  v15 = 0LL;
  v16 = (char *)&v47[2] - a2 + 8;
  v17 = (char *)v47 - a2 + 8;
  v18 = (_DWORD *)(a2 + 44);
  do
  {
    v19 = *(unsigned int *)&v16[(_QWORD)v18 - 44];
    if ( (_DWORD)v19 && *(v18 - 3) == *(_DWORD *)((char *)v18 + (_QWORD)v17) && *v18 >= (unsigned int)v19 )
      v12 |= PspRateControlLimitFlag(v15, v18, v19, v16);
    v15 = (unsigned int)(v15 + 1);
    ++v18;
  }
  while ( (int)v15 < 3 );
  if ( v12 )
  {
    PspLockJobExclusive(Event, CurrentThread);
    v29 = *(_QWORD *)&Event[41].Header.Lock;
    if ( v29 )
    {
      *(_DWORD *)(v29 + 4) |= v12;
      v30 = (char *)(*(_QWORD *)&Event[41].Header.Lock + 72LL);
      if ( (v12 & 0x10000) != 0 )
        *(_QWORD *)v30 = *(_QWORD *)&v47[0];
      if ( (v12 & 0x20000) != 0 )
        *((_QWORD *)v30 + 1) = *((_QWORD *)&v47[0] + 1);
      if ( (v12 & 4) != 0 )
        *((_QWORD *)v30 + 2) = *(_QWORD *)&v47[1];
      if ( (v12 & 0x200) != 0 )
        *((_QWORD *)v30 + 4) = v13;
      if ( (v12 & 0x8000) != 0 )
        *((_QWORD *)v30 + 3) = v14;
      v31 = 0LL;
      v32 = (char *)((char *)&v47[2] + 8 - v30);
      v33 = (char *)((char *)v47 - v30);
      v34 = v30 + 52;
      do
      {
        if ( ((unsigned int)PspRateControlLimitFlag(v31, v34, v32, v33) & v12) != 0 )
        {
          *(v35 - 3) = *(_DWORD *)((char *)v35 + (_QWORD)v32 - 52);
          *v35 = *(_DWORD *)((char *)v35 + (_QWORD)v33);
        }
        v31 = (unsigned int)(v36 + 1);
        v34 = v35 + 1;
      }
      while ( (int)v31 < 3 );
    }
    if ( *(_QWORD *)&Event[19].Header.Lock
      && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 0x800) != 0
      && ((__int64)Event[54].Header.WaitListHead.Flink & 4) == 0 )
    {
      PspSendReliableJobNotification(Event);
    }
    PspUnlockJob(Event, CurrentThread);
  }
  v20 = *(_QWORD *)(a2 + 16);
  if ( v20 )
  {
    if ( (*(_DWORD *)(v20 + 768) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v20 + 768), 0xFFFFFFDF);
      v38 = *(_QWORD *)(a2 + 16);
      v44[0] = *(_QWORD *)(a2 + 8);
      v44[1] = 2LL;
      v44[2] = *(_QWORD *)(v38 + 736);
      PspRemoveProcessFromJobChain(v38, v44, 0xEu, 0xC0000044);
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 16));
  }
  if ( v40 && (struct _LIST_ENTRY *)((char *)v41 + *((_QWORD *)&v45 + 1)) > v40 )
  {
    if ( v39 )
    {
      if ( v39 != 1 )
        goto LABEL_17;
      PspLockJobShared((__int64)Event, (__int64)CurrentThread);
      if ( !*(_QWORD *)&Event[19].Header.Lock || (HIDWORD(Event[36].Header.WaitListHead.Flink) & 2) == 0 )
      {
        PspUnlockJob(Event, CurrentThread);
        PspTerminateAllProcessesInJobHierarchy(Event);
        goto LABEL_17;
      }
      if ( (int)PspSendJobNotification((__int64)Event, 1LL, 0, 0) >= 0 )
      {
        LODWORD(Event[10].Header.WaitListHead.Blink) &= ~4u;
        Event[9].Header.WaitListHead.Blink = 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Event) )
        goto LABEL_17;
      PspLockJobExclusive(Event, CurrentThread);
      if ( !Event[9].Header.LockNV
        && *(_QWORD *)&Event[19].Header.Lock
        && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 2) != 0 )
      {
        PspSendJobNotification((__int64)Event, 1LL, 0, 0);
      }
    }
    PspUnlockJob(Event, CurrentThread);
  }
LABEL_17:
  v21 = *(_QWORD *)(a2 + 24) + v42;
  v22 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v21;
  if ( v22 )
  {
    if ( v21 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v43 >= (unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Event);
    }
  }
  v23 = Event[44].Header.WaitListHead.Blink;
  if ( v23 )
  {
    PspLockJobExclusive(v23, CurrentThread);
    PspLockJobExclusive(Event, CurrentThread);
    PspAddAccountingValues(&Event[44].Header.WaitListHead.Blink[70], &Event[46].Header.WaitListHead.Blink);
    memset(&Event[46].Header.WaitListHead.Blink, 0, 0x58uLL);
    PspUnlockJob(Event, CurrentThread);
    v24 = Event[44].Header.WaitListHead.Blink;
  }
  else
  {
    PspLockJobExclusive(Event, CurrentThread);
    memset(&Event[46].Header.WaitListHead.Blink, 0, 0x58uLL);
    v24 = (struct _LIST_ENTRY *)Event;
  }
  PspUnlockJob(v24, CurrentThread);
  return 0LL;
}
