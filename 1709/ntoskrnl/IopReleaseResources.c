/*
 * XREFs of IopReleaseResources @ 0x14055B5F8
 * Callers:
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PnpReleaseResourcesInternal @ 0x14055A56C (PnpReleaseResourcesInternal.c)
 *     IopAllocateBootResourcesInternal @ 0x1405D1F00 (IopAllocateBootResourcesInternal.c)
 */

void __fastcall IopReleaseResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  int v4; // ecx
  void *v5; // rcx

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
    if ( (v4 & 0x40) != 0 && *(_QWORD *)(a1 + 544) )
      IopAllocateBootResourcesInternal(4LL, *(_QWORD *)(a1 + 32));
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
