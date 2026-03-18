/*
 * XREFs of ExpGetSubscriptionPfn @ 0x140718038
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x1404A7FE0 (ExQueryLicenseValueInternal.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpOsProductCacheProviderHelper @ 0x140459A5C (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpGetSubscriptionPfn(_QWORD *a1)
{
  int v2; // edi
  PVOID PoolWithTag; // r14
  unsigned int v4; // esi
  char v5; // al
  struct _KTHREAD *CurrentThread; // rax
  ULONG v8; // [rsp+58h] [rbp+10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  PoolWithTag = 0LL;
  v4 = 0;
  LODWORD(NumberOfBytes) = 0;
  v5 = ExpSubscriptionPfnInitialized;
  if ( !ExpSubscriptionPfnInitialized )
  {
    v2 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_14074A790, 0LL, 0LL, 0, &NumberOfBytes, &v8);
    if ( v2 == -1073741789 )
    {
      v4 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
      if ( !PoolWithTag || v4 > 0x82 )
      {
        v2 = -1073741595;
        goto LABEL_18;
      }
      v2 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_14074A790, 0LL, PoolWithTag, v4, &NumberOfBytes, &v8);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    if ( !ExpSubscriptionPfnInitialized )
    {
      if ( v2 >= 0 )
        memmove(&ExpSubscriptionPfn, PoolWithTag, v4);
      if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741772 )
        ExpSubscriptionPfnInitialized = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v5 = ExpSubscriptionPfnInitialized;
  }
  if ( v5 )
    *a1 = &ExpSubscriptionPfn;
LABEL_18:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v2;
}
