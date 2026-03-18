/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140285F90
 * Callers:
 *     MmRemoveSystemCacheFromDump @ 0x14021B580 (MmRemoveSystemCacheFromDump.c)
 *     MmReadProcessPageTables @ 0x1402283A0 (MmReadProcessPageTables.c)
 * Callees:
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028622C (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(_DWORD *a1)
{
  signed __int32 v2; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(a1, a1);
  _m_prefetchw(a1);
  v2 = *a1 & 0x7FFFFFFF;
  return v2 == _InterlockedCompareExchange(a1, v2 + 1, v2);
}
