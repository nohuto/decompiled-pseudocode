/*
 * XREFs of ExpGetSubscriptionPfn @ 0x140757714
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x140537F50 (ExQueryLicenseValueInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExpOsProductCacheProviderHelper @ 0x1405DED04 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpGetSubscriptionPfn(_QWORD *a1)
{
  int v2; // edi
  PVOID PoolWithTag; // r14
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // [rsp+58h] [rbp+10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  PoolWithTag = 0LL;
  v4 = 0;
  LODWORD(NumberOfBytes) = 0;
  if ( !ExpSubscriptionPfnInitialized )
  {
    v2 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_14078CF60, 0LL, 0LL, 0, &NumberOfBytes, &v7);
    if ( v2 == -1073741789 )
    {
      v4 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
      if ( !PoolWithTag || v4 > 0x82 )
      {
        v2 = -1073741595;
        goto LABEL_18;
      }
      v2 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_14078CF60, 0LL, PoolWithTag, v4, &NumberOfBytes, &v7);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    if ( !ExpSubscriptionPfnInitialized )
    {
      if ( v2 >= 0 )
        memmove(&ExpSubscriptionPfn, PoolWithTag, v4);
      if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741772 )
        ExpSubscriptionPfnInitialized = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( ExpSubscriptionPfnInitialized )
    *a1 = &ExpSubscriptionPfn;
LABEL_18:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v2;
}
