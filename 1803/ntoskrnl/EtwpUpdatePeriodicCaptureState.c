/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x1407B05FC
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExSetTimer @ 0x140085490 (ExSetTimer.c)
 *     ExCancelTimer @ 0x140085540 (ExCancelTimer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAllocateTimer @ 0x1401631E0 (ExAllocateTimer.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpCheckNotificationAccess @ 0x14058D188 (EtwpCheckNotificationAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int *v14; // rdi
  int v15; // ebp
  void *v16; // rcx
  SIZE_T v17; // rbp
  PVOID PoolWithTag; // rax
  _QWORD *v19; // rax
  ULONG_PTR v20; // rcx
  __int64 v21; // rdx
  void *v22; // rcx
  __int16 v24; // [rsp+24h] [rbp-74h]
  __int64 v26; // [rsp+38h] [rbp-60h]
  _QWORD v27[2]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  v24 = a1;
  v5 = 0LL;
  v6 = 0;
  v26 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v10 = EtwpAcquireLoggerContextByLoggerId(v26, a1, 0);
  v14 = v10;
  if ( !v10 )
  {
    v4 = -1073741811;
    goto LABEL_21;
  }
  if ( (v10[208] & 0x40) != 0 )
  {
    v4 = -1073741162;
    goto LABEL_21;
  }
  v15 = 0;
  if ( !a3 )
  {
LABEL_8:
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 176), 0LL);
    v16 = (void *)*((_QWORD *)v14 + 135);
    if ( v16 )
    {
      if ( !*((_QWORD *)v14 + 136) )
      {
        ExCancelTimer(0LL);
        v16 = (void *)*((_QWORD *)v14 + 135);
        v14[274] = 0;
      }
      ExFreePoolWithTag(v16, 0);
      *((_QWORD *)v14 + 135) = 0LL;
      *((_WORD *)v14 + 536) = 0;
    }
    if ( !a3 )
      goto LABEL_26;
    *((_WORD *)v14 + 536) = a3;
    v17 = 16LL * a3;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x55777445u);
    *((_QWORD *)v14 + 135) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_14;
    memmove(PoolWithTag, a4, v17);
    if ( !*((_QWORD *)v14 + 136) )
    {
      v19 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x55777445u);
      v5 = v19;
      if ( !v19 )
      {
LABEL_14:
        v6 = 1;
        v4 = -1073741801;
        goto LABEL_21;
      }
      *((_WORD *)v19 + 20) = v24;
      v19[4] = v26;
      v19[2] = SendCaptureStateNotificationsWorker;
      v19[3] = v19;
      *v19 = 0LL;
      *((_QWORD *)v14 + 136) = ExAllocateTimer((__int64)&PeriodicCaptureStateTimerCallback, (__int64)v19, 8u);
    }
    v27[1] = -1LL;
    v27[0] = 0LL;
    v20 = *((_QWORD *)v14 + 136);
    v21 = -10000000LL * a2;
    *((_QWORD *)v14 + 133) = v21;
    ExSetTimer(v20, v21, 0LL, (__int64)v27);
    v14[274] = 1;
LABEL_26:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v14 + 88, v11, v12, v13);
    KeAbPostRelease((ULONG_PTR)(v14 + 176));
    goto LABEL_29;
  }
  while ( 1 )
  {
    v4 = EtwpCheckNotificationAccess((_QWORD *)a4 + 2 * v15, (__int64)(v14 + 73));
    if ( v4 < 0 )
      break;
    if ( ++v15 >= a3 )
      goto LABEL_8;
  }
  v4 = -1073741790;
  v6 = 0;
LABEL_21:
  v22 = (void *)*((_QWORD *)v14 + 135);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *((_QWORD *)v14 + 135) = 0LL;
    *((_WORD *)v14 + 536) = 0;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    goto LABEL_26;
LABEL_29:
  EtwpReleaseLoggerContext(v14, 0);
  return (unsigned int)v4;
}
