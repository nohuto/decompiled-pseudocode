/*
 * XREFs of VmpPauseResumeNotify @ 0x140705634
 * Callers:
 *     VmPauseResumeNotify @ 0x140705580 (VmPauseResumeNotify.c)
 * Callees:
 *     SmStoreExistsForProcess @ 0x1400624CC (SmStoreExistsForProcess.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MmProcessWorkingSetControl @ 0x1404CA12C (MmProcessWorkingSetControl.c)
 */

__int64 __fastcall VmpPauseResumeNotify(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v5; // r15
  unsigned int v6; // eax
  int v7; // esi
  int v8; // r14d
  int i; // r14d
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+28h] [rbp-8h]
  int v14; // [rsp+60h] [rbp+30h]

  CurrentThread = KeGetCurrentThread();
  v14 = 4;
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 80);
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v6 = *(_DWORD *)(a1 + 88);
  if ( (v6 & 1) != 0 )
  {
    v7 = -1073740682;
    goto LABEL_30;
  }
  v8 = (v6 >> 1) & 3;
  if ( a2 )
  {
    if ( v8 >= a2 )
    {
      v7 = -1073741811;
      goto LABEL_30;
    }
  }
  else if ( !v8 )
  {
    v7 = 1075380276;
    goto LABEL_30;
  }
  *(_DWORD *)(a1 + 88) = v6 | 1;
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v12 = 3LL;
  v13 = 0;
  if ( a2 )
  {
    for ( i = v8 + 1; ; ++i )
    {
      if ( i > a2 )
      {
        v14 = a2;
        goto LABEL_27;
      }
      if ( i == 1 )
      {
        if ( *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[39] << 12 >> 20 > (unsigned __int64)(unsigned int)VmPauseOutswapSizeCapMB )
          continue;
        HIDWORD(v12) = 0;
        v13 = 0;
      }
      else
      {
        if ( (unsigned int)(i - 2) > 1
          || !*(_DWORD *)(MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 1192) && i != 3 )
        {
          continue;
        }
        HIDWORD(v12) = 1;
        v13 = 3;
        if ( SmStoreExistsForProcess() )
        {
          v10 = 11;
          if ( i == 3 )
            v10 = 27;
          v13 = v10;
        }
      }
      v7 = MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, &v12, 0xCu, 0);
      if ( v7 < 0 )
        goto LABEL_28;
    }
  }
  HIDWORD(v12) = 0;
  v13 = 1;
  MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, &v12, 0xCu, 0);
  v14 = 0;
LABEL_27:
  v7 = 0;
LABEL_28:
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
  *(_DWORD *)(a1 + 88) &= ~1u;
  if ( v14 != 4 )
    *(_DWORD *)(a1 + 88) ^= ((unsigned __int8)*(_DWORD *)(a1 + 88) ^ (unsigned __int8)(2 * v14)) & 6;
LABEL_30:
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
