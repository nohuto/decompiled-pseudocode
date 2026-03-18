/*
 * XREFs of AMLIIterateSiblingsNext @ 0x1C0013824
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C00136F4 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildMissingChildren @ 0x1C00432D8 (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C00A2874 (EnableDisableIPMIRegions.c)
 * Callees:
 *     FreeObjectHandle @ 0x1C005ECC0 (FreeObjectHandle.c)
 */

__int64 __fastcall AMLIIterateSiblingsNext(volatile signed __int32 *a1)
{
  KIRQL v2; // cl
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( !v3 || (v4 = **(_QWORD **)a1, v4 == v3 + 24) )
  {
    v5 = 0LL;
  }
  else
  {
    dword_1C00797B8 = 0;
    v5 = v4 + 120;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    FreeObjectHandle(a1);
  return v5;
}
