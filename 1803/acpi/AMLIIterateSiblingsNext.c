/*
 * XREFs of AMLIIterateSiblingsNext @ 0x1C0043EB0
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C000B868 (ACPIBuildMissingChildren.c)
 *     EnableDisableCMOSRegions @ 0x1C001791C (EnableDisableCMOSRegions.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0027598 (ACPIGpeBuildEventMasks.c)
 *     EnableDisableIPMIRegions @ 0x1C007DF7C (EnableDisableIPMIRegions.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
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
    dword_1C00677B8 = 0;
    v5 = v4 + 120;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  AMLIDereferenceHandleEx(a1);
  return v5;
}
