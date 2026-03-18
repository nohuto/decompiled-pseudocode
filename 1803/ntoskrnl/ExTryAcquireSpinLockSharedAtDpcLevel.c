/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1402BA640
 * Callers:
 *     MmReadProcessPageTables @ 0x14026153C (MmReadProcessPageTables.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA92C (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v3; // ebx
  signed __int32 v4; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v3 = ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(a1);
  }
  else
  {
    _m_prefetchw(a1);
    v4 = *a1 & 0x7FFFFFFF;
    v3 = v4 == _InterlockedCompareExchange(a1, v4 + 1, v4);
  }
  if ( !v3 )
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
  return v3;
}
