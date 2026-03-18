/*
 * XREFs of PfpRpCHashEmpty @ 0x1405D8788
 * Callers:
 *     PfpRpControlRequestReset @ 0x1405D8730 (PfpRpControlRequestReset.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpRpCHashEmpty(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  int v4; // r10d
  int v5; // r9d
  unsigned int v8; // eax
  unsigned int v9; // ecx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v11; // rdi
  struct _KTHREAD *v12; // rax
  void *v13; // rbp
  __int128 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v4 = -1;
  v5 = 1 << *(_DWORD *)(a2 + 8);
  v8 = v5;
  if ( v5 )
  {
    do
    {
      ++v4;
      v8 >>= 1;
    }
    while ( v8 );
  }
  v9 = v4 + 1;
  if ( ((v5 - 1) & v5) == 0 )
    v9 = v4;
  LODWORD(v15) = 0;
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = v9;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v11, 0LL);
  v12 = KeGetCurrentThread();
  v13 = *(void **)a2;
  --v12->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a3, 0LL);
  *(_OWORD *)a2 = v14;
  *(_QWORD *)(a2 + 16) = v15;
  if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a3);
  KeAbPostRelease((ULONG_PTR)a3);
  KeLeaveCriticalRegion();
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KeLeaveCriticalRegion();
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
}
