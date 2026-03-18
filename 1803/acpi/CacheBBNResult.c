/*
 * XREFs of CacheBBNResult @ 0x1C0030B5C
 * Callers:
 *     GetPciAddressWorker @ 0x1C0030F70 (GetPciAddressWorker.c)
 * Callees:
 *     AMLIIsEqualHandle @ 0x1C0043D88 (AMLIIsEqualHandle.c)
 */

void __fastcall CacheBBNResult(__int64 a1, int a2)
{
  KIRQL v4; // al
  __int64 *v5; // r8
  KIRQL v6; // di
  __int64 **v7; // r8
  _QWORD *PoolWithTag; // rax
  char v9; // cl
  __int64 v10; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
  v5 = (__int64 *)gBBNResultCacheListHead;
  v6 = v4;
  while ( v5 != &gBBNResultCacheListHead )
  {
    if ( (unsigned __int8)AMLIIsEqualHandle(v5[2], a1) )
      goto LABEL_11;
    v5 = *v7;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x69706341u);
  if ( PoolWithTag )
  {
    v9 = gdwfAMLI;
    PoolWithTag[2] = a1;
    dword_1C00677B8 = 0;
    pszDest = 0;
    if ( (v9 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    *((_DWORD *)PoolWithTag + 6) = a2;
    v10 = gBBNResultCacheListHead;
    if ( *(__int64 **)(gBBNResultCacheListHead + 8) != &gBBNResultCacheListHead )
      __fastfail(3u);
    *PoolWithTag = gBBNResultCacheListHead;
    PoolWithTag[1] = &gBBNResultCacheListHead;
    *(_QWORD *)(v10 + 8) = PoolWithTag;
    gBBNResultCacheListHead = (__int64)PoolWithTag;
  }
LABEL_11:
  KeReleaseSpinLock(&gBBNResultCacheLock, v6);
}
