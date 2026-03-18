/*
 * XREFs of IopReleaseResources @ 0x140650D08
 * Callers:
 *     IopLegacyResourceAllocation @ 0x140650B94 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PipClearDevNodeFlags @ 0x1405D37AC (PipClearDevNodeFlags.c)
 *     PnpReleaseResourcesInternal @ 0x140615804 (PnpReleaseResourcesInternal.c)
 *     IopAllocateBootResourcesInternal @ 0x140616020 (IopAllocateBootResourcesInternal.c)
 */

void __fastcall IopReleaseResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  int v4; // ecx
  void *v5; // rcx
  __int64 v6; // r8

  PnpReleaseResourcesInternal((_QWORD *)a1);
  ExAcquireFastMutex(&PiResourceListLock);
  v2 = *(void **)(a1 + 416);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 416) = 0LL;
  }
  v3 = *(void **)(a1 + 424);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  KeReleaseGuardedMutex(&PiResourceListLock);
  v4 = *(_DWORD *)(a1 + 396);
  if ( (v4 & 0x10001) == 1 )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 544);
      if ( v6 )
        IopAllocateBootResourcesInternal(4, *(_QWORD *)(a1 + 32), v6);
    }
  }
  else
  {
    PipClearDevNodeFlags(a1, 192);
    v5 = *(void **)(a1 + 544);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(a1 + 544) = 0LL;
    }
  }
}
