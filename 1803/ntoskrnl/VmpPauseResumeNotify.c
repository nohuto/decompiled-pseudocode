/*
 * XREFs of VmpPauseResumeNotify @ 0x1407A0CC4
 * Callers:
 *     VmPauseResumeNotify @ 0x1407A0C30 (VmPauseResumeNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     SmStoreExistsForProcess @ 0x14008BCF0 (SmStoreExistsForProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MmProcessWorkingSetControl @ 0x14052D3D4 (MmProcessWorkingSetControl.c)
 */

__int64 __fastcall VmpPauseResumeNotify(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r12d
  volatile signed __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  int v11; // edi
  int v12; // esi
  int i; // esi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  int v18; // [rsp+28h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  v5 = 4;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(a1 + 80);
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v10 = *(_DWORD *)(a1 + 88);
  if ( (v10 & 1) != 0 )
  {
    v11 = -1073740682;
    goto LABEL_30;
  }
  v12 = (v10 >> 1) & 3;
  if ( a2 )
  {
    if ( v12 >= a2 )
    {
      v11 = -1073741811;
      goto LABEL_30;
    }
  }
  else if ( !v12 )
  {
    v11 = 1075380276;
    goto LABEL_30;
  }
  *(_DWORD *)(a1 + 88) = v10 | 1;
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)v6);
  v17 = 3LL;
  v18 = 0;
  if ( a2 )
  {
    for ( i = v12 + 1; ; ++i )
    {
      if ( i > a2 )
      {
        v5 = a2;
        goto LABEL_27;
      }
      if ( i == 1 )
      {
        if ( *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[39] << 12 >> 20 > (unsigned __int64)(unsigned int)VmPauseOutswapSizeCapMB )
          continue;
        HIDWORD(v17) = 0;
        v18 = 0;
      }
      else
      {
        if ( (unsigned int)(i - 2) > 1
          || !*(_DWORD *)(MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 1144) && i != 3 )
        {
          continue;
        }
        HIDWORD(v17) = 1;
        v18 = 3;
        if ( SmStoreExistsForProcess() )
        {
          v14 = 11;
          if ( i == 3 )
            v14 = 27;
          v18 = v14;
        }
      }
      v11 = MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, &v17, 0xCu, 0);
      if ( v11 < 0 )
        goto LABEL_28;
    }
  }
  HIDWORD(v17) = 0;
  v18 = 1;
  MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, &v17, 0xCu, 0);
  v5 = 0;
LABEL_27:
  v11 = 0;
LABEL_28:
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  v15 = *(_DWORD *)(a1 + 88) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 88) = v15;
  if ( v5 != 4 )
    *(_DWORD *)(a1 + 88) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v5)) & 6;
LABEL_30:
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
