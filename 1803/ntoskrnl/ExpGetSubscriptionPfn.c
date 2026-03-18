/*
 * XREFs of ExpGetSubscriptionPfn @ 0x1407BE454
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x140549360 (ExQueryLicenseValueInternal.c)
 *     ExActivateVMWithSubscription @ 0x1407BDA5C (ExActivateVMWithSubscription.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpOsProductCacheProviderHelper @ 0x140549CD4 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpGetSubscriptionPfn(_QWORD *a1)
{
  int v2; // edi
  PVOID PoolWithTag; // r14
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG v10; // [rsp+58h] [rbp+10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  PoolWithTag = 0LL;
  v4 = 0;
  LODWORD(NumberOfBytes) = 0;
  if ( !ExpSubscriptionPfnInitialized )
  {
    v2 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_1407F9500, 0LL, 0LL, 0, &NumberOfBytes, &v10);
    if ( v2 == -1073741789 )
    {
      v4 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
      if ( !PoolWithTag || v4 > 0x82 )
      {
        v2 = -1073741595;
        goto LABEL_18;
      }
      v2 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_1407F9500, 0LL, PoolWithTag, v4, &NumberOfBytes, &v10);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    if ( !ExpSubscriptionPfnInitialized )
    {
      if ( v2 >= 0 )
        memmove(&ExpSubscriptionPfn, PoolWithTag, v4);
      if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741772 )
        ExpSubscriptionPfnInitialized = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v6, v7, v8);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( ExpSubscriptionPfnInitialized )
    *a1 = &ExpSubscriptionPfn;
LABEL_18:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v2;
}
