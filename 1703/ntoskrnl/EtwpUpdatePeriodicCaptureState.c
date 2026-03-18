/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x140711C20
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     ExSetTimer @ 0x14004B440 (ExSetTimer.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExCancelTimer @ 0x14012AB50 (ExCancelTimer.c)
 *     ExAllocateTimer @ 0x140147D60 (ExAllocateTimer.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckNotificationAccess @ 0x140554AB4 (EtwpCheckNotificationAccess.c)
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
  unsigned int *v10; // rax
  unsigned int *v11; // rdi
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
  if ( (v10[204] & 0x40) != 0 )
  {
    v4 = -1073741162;
    goto LABEL_21;
  }
  v12 = 0;
  if ( !a3 )
  {
LABEL_8:
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v11 + 172), 0LL);
    if ( *((_QWORD *)v11 + 114) )
    {
      if ( !*((_QWORD *)v11 + 115) )
      {
        ExCancelTimer(0LL, 0LL);
        v11[232] = 0;
      }
      ExFreePoolWithTag(*((PVOID *)v11 + 114), 0);
      *((_QWORD *)v11 + 114) = 0LL;
      *((_WORD *)v11 + 452) = 0;
    }
    if ( !a3 )
      goto LABEL_26;
    *((_WORD *)v11 + 452) = a3;
    v13 = 16LL * a3;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x55777445u);
    *((_QWORD *)v11 + 114) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_14;
    memmove(PoolWithTag, a4, v13);
    if ( !*((_QWORD *)v11 + 115) )
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
      *((_QWORD *)v11 + 115) = ExAllocateTimer((__int64)PeriodicCaptureStateTimerCallback, (__int64)v15, 8u);
    }
    v23[1] = -1LL;
    v23[0] = 0LL;
    v16 = *((_QWORD *)v11 + 115);
    v17 = -10000000LL * a2;
    *((_QWORD *)v11 + 112) = v17;
    ExSetTimer(v16, v17, 0LL, (ULONG_PTR)v23);
    v11[232] = 1;
LABEL_26:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11 + 86);
    KeAbPostRelease((ULONG_PTR)(v11 + 172));
    goto LABEL_29;
  }
  while ( 1 )
  {
    v4 = EtwpCheckNotificationAccess((_QWORD *)a4 + 2 * v12, (__int64)(v11 + 69));
    if ( v4 < 0 )
      break;
    if ( ++v12 >= a3 )
      goto LABEL_8;
  }
  v4 = -1073741790;
  v6 = 0;
LABEL_21:
  v18 = (void *)*((_QWORD *)v11 + 114);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    *((_QWORD *)v11 + 114) = 0LL;
    *((_WORD *)v11 + 452) = 0;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    goto LABEL_26;
LABEL_29:
  EtwpReleaseLoggerContext(v11, 0);
  return (unsigned int)v4;
}
