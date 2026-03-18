/*
 * XREFs of PsInitializeVsmEnclave @ 0x14077FA20
 * Callers:
 *     MiInitializeEnclave @ 0x1407523EC (MiInitializeEnclave.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VslInitializeEnclave @ 0x140718A94 (VslInitializeEnclave.c)
 */

__int64 __fastcall PsInitializeVsmEnclave(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r15
  volatile signed __int64 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  NTSTATUS v10; // edi
  __int64 *PoolWithQuotaTag; // r14
  __int64 *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 48);
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v9 = *(_DWORD *)(a1 + 44);
  if ( v9 )
  {
    if ( v9 == 1 )
      v10 = -1073740528;
    else
      v10 = -1073740526;
  }
  else
  {
    PoolWithQuotaTag = (__int64 *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 40 * v3, 0x74457350u);
    if ( PoolWithQuotaTag )
    {
      v10 = VslInitializeEnclave(*(_QWORD *)(a1 + 24), v3, a1 + 80, (_DWORD *)(a1 + 40));
      if ( v10 >= 0 )
      {
        *(_DWORD *)(a1 + 72) = v3;
        *(_QWORD *)(a1 + 64) = a1 + 56;
        *(_QWORD *)(a1 + 56) = a1 + 56;
        *PoolWithQuotaTag = 0LL;
        if ( (unsigned int)v3 > 1 )
        {
          v12 = PoolWithQuotaTag + 5;
          v6 = (__int64)PoolWithQuotaTag;
          v7 = (unsigned int)(v3 - 1);
          do
          {
            *v12 = v6;
            v6 += 40LL;
            v12 += 5;
            --v7;
          }
          while ( v7 );
        }
        *(_QWORD *)(a1 + 120) = PoolWithQuotaTag;
        *(_DWORD *)(a1 + 44) = 1;
        v10 = 0;
        *(_QWORD *)(a1 + 128) = &PoolWithQuotaTag[5 * (unsigned int)(v3 - 1)];
      }
      else
      {
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5, v6, v7, v8);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
