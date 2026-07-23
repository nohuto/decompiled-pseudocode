/*
 * XREFs of ExpWnfDeleteProcessContext @ 0x140438158
 * Callers:
 *     ExpWnfCreateProcessContext @ 0x140447564 (ExpWnfCreateProcessContext.c)
 *     ExWnfExitProcess @ 0x140498BC4 (ExWnfExitProcess.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfDeleteSubscription @ 0x1404383E8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x140438C24 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDeleteProcessContext(unsigned __int64 *P, int a2)
{
  unsigned __int64 *v2; // rdi
  PRTL_BALANCED_NODE v5; // rax
  PRTL_BALANCED_NODE v6; // rbx
  struct _EX_RUNDOWN_REF **v7; // r14
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rbp
  PRTL_BALANCED_NODE v10; // rax
  PRTL_BALANCED_NODE v11; // rbp
  volatile signed __int64 *v12; // rdi
  PRTL_BALANCED_NODE v13; // rax
  PRTL_BALANCED_NODE v14; // rbp
  struct _EX_RUNDOWN_REF **v15; // r14
  struct _EX_RUNDOWN_REF *v16; // rax
  PRTL_BALANCED_NODE v17; // rax
  signed __int8 v18; // cf
  PRTL_BALANCED_NODE v19; // rdi
  unsigned __int64 **v20; // r8
  PVOID *v21; // rdx
  void *v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // rbp
  __int64 v24; // r8
  PRTL_BALANCED_NODE v25; // rax
  PRTL_BALANCED_NODE v26; // rbp

  v2 = P + 10;
  v5 = KeAbPreAcquire((ULONG_PTR)(P + 10), 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  v7 = (struct _EX_RUNDOWN_REF **)(P + 11);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (struct _EX_RUNDOWN_REF *)v7 )
      break;
    v9 = v8 - 3;
    ExAcquireRundownProtection(v8 - 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    ExpWnfDeleteSubscription(v9);
    v10 = KeAbPreAcquire((ULONG_PTR)v2, 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, v10, (ULONG_PTR)v2);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  v12 = (volatile signed __int64 *)(P + 7);
  v13 = KeAbPreAcquire((ULONG_PTR)(P + 7), 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 14, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 7, v13, (ULONG_PTR)(P + 7));
  if ( v14 )
    BYTE2(v14[1].Left) |= 1u;
  v15 = (struct _EX_RUNDOWN_REF **)(P + 8);
  while ( 1 )
  {
    v16 = *v15;
    if ( *v15 == (struct _EX_RUNDOWN_REF *)v15 )
      break;
    v23 = v16 - 17;
    ExAcquireRundownProtection(v16 - 16);
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
    KeAbPostRelease((ULONG_PTR)(P + 7));
    ExpWnfNotifyNameSubscribers(v23, 16LL, 0LL);
    LOBYTE(v24) = 1;
    ExpWnfDeleteNameInstance(v23[6].Count, v23, v24);
    v25 = KeAbPreAcquire((ULONG_PTR)(P + 7), 0LL, 0);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 7, v25, (ULONG_PTR)(P + 7));
    if ( v26 )
      BYTE2(v26[1].Left) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
  KeAbPostRelease((ULONG_PTR)(P + 7));
  if ( a2 )
  {
    v17 = KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0);
    v18 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v19 = v17;
    if ( v18 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v17, (ULONG_PTR)&ExpWnfProcessesListLock);
    if ( v19 )
      BYTE2(v19[1].Left) |= 1u;
    v20 = (unsigned __int64 **)P[2];
    v21 = (PVOID *)P[3];
    if ( v20[1] != P + 2 || *v21 != P + 2 )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = (unsigned __int64 *)v21;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    v22 = (void *)P[16];
    if ( v22 )
      ObfDereferenceObject(v22);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
