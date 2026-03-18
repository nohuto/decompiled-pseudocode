/*
 * XREFs of PdcNotificationClientUnregister @ 0x14078BB20
 * Callers:
 *     PopInitializeDirectedDrips @ 0x1408A9118 (PopInitializeDirectedDrips.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfReleasePushLock @ 0x1400639B0 (ExfReleasePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PdcpPortReleaseResources @ 0x14078B698 (PdcpPortReleaseResources.c)
 *     PdcAcquireRwLockExclusive @ 0x14078BEFC (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcNotificationClientUnregister(struct _KTHREAD **P)
{
  unsigned int v2; // edi
  __int64 *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  signed __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rtt
  signed __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rtt
  struct _EX_RUNDOWN_REF *v13; // rdi
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( !P || *(_DWORD *)P != 1315136592 )
    return (unsigned int)-1073741585;
  v3 = (__int64 *)(P + 1);
  PdcAcquireRwLockExclusive(P + 1);
  if ( P[14] == KeGetCurrentThread() )
  {
    v2 = -1073741823;
LABEL_8:
    v3[1] = 0LL;
    _m_prefetchw(v3);
    v6 = *v3;
    v7 = *v3 - 16;
    if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v7 = 0LL;
    if ( (v6 & 2) != 0 || (v8 = *v3, v8 != _InterlockedCompareExchange64(v3, v7, v6)) )
      ExfReleasePushLock(v3, v7, v4, v5);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v2;
  }
  if ( !*((_BYTE *)P + 88) )
  {
    v2 = -1073741431;
    goto LABEL_8;
  }
  *((_BYTE *)P + 88) = 0;
  v3[1] = 0LL;
  _m_prefetchw(v3);
  v10 = *v3;
  v11 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (v10 & 2) != 0 || (v12 = *v3, v12 != _InterlockedCompareExchange64(v3, v11, v10)) )
    ExfReleasePushLock(v3, v11, v4, v5);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  while ( *((_DWORD *)P + 24) )
  {
    Interval.QuadPart = -300000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v13 = (struct _EX_RUNDOWN_REF *)P[5];
  ExWaitForRundownProtectionRelease(v13 + 1);
  _InterlockedExchange64((volatile __int64 *)&v13[1], 1LL);
  PdcpPortReleaseResources(v13);
  P[5] = 0LL;
  *(_DWORD *)P = 0;
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
