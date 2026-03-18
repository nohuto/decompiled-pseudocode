/*
 * XREFs of ExpWnfDeleteProcessContext @ 0x140511368
 * Callers:
 *     ExWnfExitProcess @ 0x14051130C (ExWnfExitProcess.c)
 *     ExpWnfCreateProcessContext @ 0x140570558 (ExpWnfCreateProcessContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteSubscription @ 0x1405115F8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x140567528 (ExpWnfDeleteNameInstance.c)
 */

void __fastcall ExpWnfDeleteProcessContext(unsigned __int64 *P, int a2)
{
  unsigned __int64 *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  struct _EX_RUNDOWN_REF **v10; // r14
  struct _EX_RUNDOWN_REF *v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbp
  volatile signed __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  struct _EX_RUNDOWN_REF **v24; // r14
  struct _EX_RUNDOWN_REF *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r9
  signed __int8 v28; // cf
  __int64 v29; // rdi
  __int64 v30; // rdx
  PVOID *v31; // r8
  void *v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rbp

  v2 = P + 10;
  v5 = KeAbPreAcquire((ULONG_PTR)(P + 10), 0LL, 0);
  v9 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (struct _EX_RUNDOWN_REF **)(P + 11);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == (struct _EX_RUNDOWN_REF *)v10 )
      break;
    v12 = v11 - 3;
    ExAcquireRundownProtection(v11 - 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2, v13, v14, v15);
    KeAbPostRelease((ULONG_PTR)v2);
    ExpWnfDeleteSubscription(v12);
    v16 = KeAbPreAcquire((ULONG_PTR)v2, 0LL, 0);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, v16, (ULONG_PTR)v2);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2, v6, v7, v8);
  KeAbPostRelease((ULONG_PTR)v2);
  v18 = (volatile signed __int64 *)(P + 7);
  v19 = KeAbPreAcquire((ULONG_PTR)(P + 7), 0LL, 0);
  v23 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 14, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 7, v19, (ULONG_PTR)(P + 7));
  if ( v23 )
    *(_BYTE *)(v23 + 26) |= 1u;
  v24 = (struct _EX_RUNDOWN_REF **)(P + 8);
  while ( 1 )
  {
    v25 = *v24;
    if ( *v24 == (struct _EX_RUNDOWN_REF *)v24 )
      break;
    v33 = (__int64)&v25[-17];
    ExAcquireRundownProtection(v25 - 16);
    if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 7, v34, v35, v36);
    KeAbPostRelease((ULONG_PTR)(P + 7));
    ExpWnfNotifyNameSubscribers(v33, 0x10u, 0, 0);
    LOBYTE(v37) = 1;
    ExpWnfDeleteNameInstance(*(_QWORD *)(v33 + 48), v33, v37);
    v38 = KeAbPreAcquire((ULONG_PTR)(P + 7), 0LL, 0);
    v39 = v38;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 7, v38, (ULONG_PTR)(P + 7));
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 7, v20, v21, v22);
  KeAbPostRelease((ULONG_PTR)(P + 7));
  if ( a2 )
  {
    v26 = KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0);
    v28 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v29 = v26;
    if ( v28 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v26, (ULONG_PTR)&ExpWnfProcessesListLock);
    if ( v29 )
      *(_BYTE *)(v29 + 26) |= 1u;
    v30 = P[2];
    if ( *(unsigned __int64 **)(v30 + 8) != P + 2 || (v31 = (PVOID *)P[3], *v31 != P + 2) )
      __fastfail(3u);
    *v31 = (PVOID)v30;
    *(_QWORD *)(v30 + 8) = v31;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock, v30, (__int64)v31, v27);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    v32 = (void *)P[16];
    if ( v32 )
      ObfDereferenceObject(v32);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
