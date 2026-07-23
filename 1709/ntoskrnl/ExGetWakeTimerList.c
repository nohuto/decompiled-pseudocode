/*
 * XREFs of ExGetWakeTimerList @ 0x140286510
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeQueryTimerDueTime @ 0x140204914 (KeQueryTimerDueTime.c)
 *     PoStoreDiagnosticContext @ 0x140239D30 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v3; // rbp
  void *v4; // r14
  _DWORD *v5; // r15
  _QWORD *v6; // r12
  PRTL_BALANCED_NODE v7; // rax
  PRTL_BALANCED_NODE v8; // rdi
  __int64 *v9; // rdi
  __int64 v10; // rcx
  SIZE_T v11; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  int v13; // edi
  unsigned __int64 *v14; // r15
  __int64 *v15; // r12
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r13
  KIRQL v18; // al
  int v19; // edx
  __int64 TimerDueTime; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r15
  unsigned __int64 v24; // [rsp+20h] [rbp-68h] BYREF
  struct _KTHREAD *v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  KIRQL v30; // [rsp+A0h] [rbp+18h]
  int v31; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v25 = CurrentThread;
  v5 = a2;
  v6 = a1;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, (__int64)v7, (__int16 *)&ExpWakeTimerLock);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v10 = *(v9 - 1);
      if ( v10 )
      {
        v24 = 0LL;
        PoStoreDiagnosticContext(v10, 0LL, &v24);
        v3 = (v24 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v3 > 0xFFFFFFFF )
        {
          v13 = -1073741789;
          goto LABEL_31;
        }
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != &ExpWakeTimerList );
    v11 = v3;
    if ( v3 )
      goto LABEL_11;
  }
  v11 = 64LL;
LABEL_11:
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v11, 0x734C6B57u);
  v4 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v13 = 0;
    v14 = PoolWithQuotaTag;
    if ( v3 )
    {
      v15 = (__int64 *)ExpWakeTimerList;
      v16 = 0LL;
      v24 = 0LL;
      v17 = v3;
      while ( v15 != &ExpWakeTimerList )
      {
        if ( v17 < 0x40 )
          goto LABEL_36;
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15 - 25);
        v19 = *((_DWORD *)v15 - 6);
        v30 = v18;
        v27 = *(v15 - 1);
        v31 = v19;
        if ( v27 )
          TimerDueTime = KeQueryTimerDueTime((__int64)(v15 - 33));
        else
          TimerDueTime = 0LL;
        v26 = TimerDueTime;
        KxReleaseSpinLock((PKSPIN_LOCK)v15 - 25);
        __writecr8(v30);
        if ( v26 )
        {
          v21 = v27;
          v14[1] = v26 - MEMORY[0xFFFFF78000000008];
          *((_DWORD *)v14 + 4) = v31;
          v24 = v17 - 24;
          v13 = PoStoreDiagnosticContext(v21, v14 + 3, &v24);
          if ( v13 < 0 )
            goto LABEL_29;
          v16 = (v24 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v24 = v16;
          if ( v17 < v16 )
          {
LABEL_36:
            v13 = -1073741789;
            goto LABEL_29;
          }
          v17 -= v16;
          *v14 = v16;
          v14 = (unsigned __int64 *)((char *)v14 + v16);
        }
        v15 = (__int64 *)*v15;
      }
      v22 = (unsigned __int64 *)((char *)v14 - v16);
      *v22 = 0LL;
      if ( !v16 )
        v22[1] = 0LL;
LABEL_29:
      CurrentThread = v25;
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
    v13 = -1073741670;
  }
LABEL_31:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v13 >= 0 )
  {
    *v6 = v4;
    *v5 = v3;
  }
  else if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x734C6B57u);
  }
  return (unsigned int)v13;
}
