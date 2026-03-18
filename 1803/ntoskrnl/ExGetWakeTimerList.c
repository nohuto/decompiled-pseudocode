/*
 * XREFs of ExGetWakeTimerList @ 0x1402BAC10
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeQueryTimerDueTime @ 0x140242130 (KeQueryTimerDueTime.c)
 *     PoStoreDiagnosticContext @ 0x140271244 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // r15
  void *v4; // rsi
  _DWORD *v5; // r14
  _QWORD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  SIZE_T v14; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  int v16; // edi
  unsigned __int64 *v17; // r14
  __int64 *v18; // r12
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r13
  KIRQL v21; // al
  int v22; // edx
  __int64 TimerDueTime; // rax
  __int64 v24; // rcx
  _QWORD *v25; // r14
  unsigned __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  struct _KTHREAD *v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  KIRQL v33; // [rsp+A0h] [rbp+18h]
  int v34; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v28 = CurrentThread;
  v5 = a2;
  v6 = a1;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v7, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v10 = *(v9 - 1);
      if ( v10 )
      {
        v27 = 0LL;
        PoStoreDiagnosticContext(v10, 0LL, &v27);
        v3 = (v27 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v3 > 0xFFFFFFFF )
        {
          v16 = -1073741789;
          goto LABEL_31;
        }
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != &ExpWakeTimerList );
    v14 = v3;
    if ( v3 )
      goto LABEL_11;
  }
  v14 = 64LL;
LABEL_11:
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v14, 0x734C6B57u);
  v4 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v16 = 0;
    v17 = PoolWithQuotaTag;
    if ( v3 )
    {
      v18 = (__int64 *)ExpWakeTimerList;
      v19 = 0LL;
      v27 = 0LL;
      v20 = v3;
      while ( v18 != &ExpWakeTimerList )
      {
        if ( v20 < 0x40 )
          goto LABEL_36;
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v18 - 25);
        v22 = *((_DWORD *)v18 - 6);
        v33 = v21;
        v30 = *(v18 - 1);
        v34 = v22;
        if ( v30 )
          TimerDueTime = KeQueryTimerDueTime((__int64)(v18 - 33));
        else
          TimerDueTime = 0LL;
        v29 = TimerDueTime;
        KxReleaseSpinLock((PKSPIN_LOCK)v18 - 25);
        v11 = v33;
        __writecr8(v33);
        if ( v29 )
        {
          v24 = v30;
          v17[1] = v29 - MEMORY[0xFFFFF78000000008];
          *((_DWORD *)v17 + 4) = v34;
          v27 = v20 - 24;
          v16 = PoStoreDiagnosticContext(v24, v17 + 3, &v27);
          if ( v16 < 0 )
            goto LABEL_29;
          v19 = (v27 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v27 = v19;
          if ( v20 < v19 )
          {
LABEL_36:
            v16 = -1073741789;
            goto LABEL_29;
          }
          v20 -= v19;
          *v17 = v19;
          v17 = (unsigned __int64 *)((char *)v17 + v19);
        }
        v18 = (__int64 *)*v18;
      }
      v25 = (unsigned __int64 *)((char *)v17 - v19);
      *v25 = 0LL;
      if ( !v19 )
        v25[1] = 0LL;
LABEL_29:
      CurrentThread = v28;
      v6 = a1;
    }
    else
    {
      PoolWithQuotaTag[1] = 0LL;
      LODWORD(v3) = 64;
      *PoolWithQuotaTag = 0LL;
    }
    v5 = a2;
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_31:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock, v11, v12, v13);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v16 >= 0 )
  {
    *v6 = v4;
    *v5 = v3;
  }
  else if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x734C6B57u);
  }
  return (unsigned int)v16;
}
