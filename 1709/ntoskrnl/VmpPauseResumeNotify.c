/*
 * XREFs of VmpPauseResumeNotify @ 0x14073DA90
 * Callers:
 *     VmPauseResumeNotify @ 0x14073DA50 (VmPauseResumeNotify.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     SmStoreExistsForProcess @ 0x1400B9BB4 (SmStoreExistsForProcess.c)
 *     MmProcessWorkingSetControl @ 0x1406EC9D0 (MmProcessWorkingSetControl.c)
 */

__int64 __fastcall VmpPauseResumeNotify(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r12d
  volatile signed __int64 *v6; // r14
  unsigned int v7; // eax
  int v8; // edi
  int v9; // esi
  int i; // esi
  int v11; // eax
  _BYTE v13[12]; // [rsp+20h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 4;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(a1 + 80);
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v7 = *(_DWORD *)(a1 + 88);
  v8 = 0;
  if ( (v7 & 1) != 0 )
  {
    v8 = -1073740682;
    goto LABEL_30;
  }
  v9 = (v7 >> 1) & 3;
  if ( a2 )
  {
    if ( v9 >= a2 )
    {
      v8 = -1073741811;
      goto LABEL_30;
    }
  }
  else if ( !v9 )
  {
    v8 = 1075380276;
    goto LABEL_30;
  }
  *(_DWORD *)(a1 + 88) = v7 | 1;
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  *(_QWORD *)v13 = 3LL;
  *(_DWORD *)&v13[8] = 0;
  if ( a2 )
  {
    for ( i = v9 + 1; ; ++i )
    {
      if ( i > a2 )
      {
        v5 = a2;
        goto LABEL_28;
      }
      if ( i == 1 )
      {
        if ( *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[39] << 12 >> 20 > (unsigned __int64)(unsigned int)VmPauseOutswapSizeCapMB )
          continue;
        *(_QWORD *)&v13[4] = 0LL;
      }
      else
      {
        if ( (unsigned int)(i - 2) > 1
          || !*(_DWORD *)(MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 1144) && i != 3 )
        {
          continue;
        }
        *(_DWORD *)&v13[4] = 1;
        *(_DWORD *)&v13[8] = 3;
        if ( SmStoreExistsForProcess() )
        {
          v11 = 11;
          if ( i == 3 )
            v11 = 27;
          *(_DWORD *)&v13[8] = v11;
        }
      }
      v8 = MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, (__int64 *)v13, 0xCu, 0);
      if ( v8 < 0 )
        goto LABEL_28;
      v8 = 0;
    }
  }
  *(_DWORD *)&v13[4] = 0;
  *(_DWORD *)&v13[8] = 1;
  MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, (__int64 *)v13, 0xCu, 0);
  v5 = 0;
LABEL_28:
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  *(_DWORD *)(a1 + 88) &= ~1u;
  if ( v5 != 4 )
    *(_DWORD *)(a1 + 88) ^= ((unsigned __int8)*(_DWORD *)(a1 + 88) ^ (unsigned __int8)(2 * v5)) & 6;
LABEL_30:
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
