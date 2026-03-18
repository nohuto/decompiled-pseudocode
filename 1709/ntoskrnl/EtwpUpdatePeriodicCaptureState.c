/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x14074F788
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ExSetTimer @ 0x1400E0EB0 (ExSetTimer.c)
 *     ExCancelTimer @ 0x14012AFC0 (ExCancelTimer.c)
 *     ExAllocateTimer @ 0x140133F80 (ExAllocateTimer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpCheckNotificationAccess @ 0x1404EEFD4 (EtwpCheckNotificationAccess.c)
 */

__int64 __fastcall EtwpUpdatePeriodicCaptureState(
        unsigned int a1,
        unsigned int a2,
        unsigned __int16 a3,
        const void *a4)
{
  int v4; // esi
  void *v5; // r14
  char v6; // bp
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ebp
  SIZE_T v13; // rbp
  PVOID PoolWithTag; // rax
  _QWORD *v15; // rax
  ULONG_PTR v16; // rcx
  __int64 v17; // rdx
  void *v18; // rcx
  __int16 v20; // [rsp+24h] [rbp-74h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  _QWORD v23[2]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  v20 = a1;
  v5 = 0LL;
  v6 = 0;
  v22 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v10 = EtwpAcquireLoggerContextByLoggerId(v22, a1, 0);
  v11 = v10;
  if ( !v10 )
  {
    v4 = -1073741811;
    goto LABEL_21;
  }
  if ( (*(_DWORD *)(v10 + 832) & 0x40) != 0 )
  {
    v4 = -1073741162;
    goto LABEL_21;
  }
  v12 = 0;
  if ( !a3 )
  {
LABEL_8:
    ExAcquirePushLockExclusiveEx(v11 + 704, 0LL);
    if ( *(_QWORD *)(v11 + 2224) )
    {
      if ( !*(_QWORD *)(v11 + 2232) )
      {
        ExCancelTimer(0LL);
        *(_DWORD *)(v11 + 2240) = 0;
      }
      ExFreePoolWithTag(*(PVOID *)(v11 + 2224), 0);
      *(_QWORD *)(v11 + 2224) = 0LL;
      *(_WORD *)(v11 + 2216) = 0;
    }
    if ( !a3 )
      goto LABEL_26;
    *(_WORD *)(v11 + 2216) = a3;
    v13 = 16LL * a3;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x55777445u);
    *(_QWORD *)(v11 + 2224) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_14;
    memmove(PoolWithTag, a4, v13);
    if ( !*(_QWORD *)(v11 + 2232) )
    {
      v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x55777445u);
      v5 = v15;
      if ( !v15 )
      {
LABEL_14:
        v6 = 1;
        v4 = -1073741801;
        goto LABEL_21;
      }
      *((_WORD *)v15 + 20) = v20;
      v15[4] = v22;
      v15[2] = SendCaptureStateNotificationsWorker;
      v15[3] = v15;
      *v15 = 0LL;
      *(_QWORD *)(v11 + 2232) = ExAllocateTimer((__int64)&PeriodicCaptureStateTimerCallback, (__int64)v15, 8u);
    }
    v23[1] = -1LL;
    v23[0] = 0LL;
    v16 = *(_QWORD *)(v11 + 2232);
    v17 = -10000000LL * a2;
    *(_QWORD *)(v11 + 2208) = v17;
    ExSetTimer(v16, v17, 0LL, (__int64)v23);
    *(_DWORD *)(v11 + 2240) = 1;
LABEL_26:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 704));
    KeAbPostRelease(v11 + 704);
    goto LABEL_29;
  }
  while ( 1 )
  {
    v4 = EtwpCheckNotificationAccess((_QWORD *)a4 + 2 * v12, v11 + 292);
    if ( v4 < 0 )
      break;
    if ( ++v12 >= a3 )
      goto LABEL_8;
  }
  v4 = -1073741790;
  v6 = 0;
LABEL_21:
  v18 = *(void **)(v11 + 2224);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    *(_QWORD *)(v11 + 2224) = 0LL;
    *(_WORD *)(v11 + 2216) = 0;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    goto LABEL_26;
LABEL_29:
  EtwpReleaseLoggerContext((unsigned int *)v11, 0);
  return (unsigned int)v4;
}
