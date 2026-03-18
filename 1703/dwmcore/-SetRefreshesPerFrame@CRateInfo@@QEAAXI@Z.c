/*
 * XREFs of ?SetRefreshesPerFrame@CRateInfo@@QEAAXI@Z @ 0x1800B8408
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068F08 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D770 (-Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRateInfo::SetRefreshesPerFrame(CRateInfo *this)
{
  if ( *((_DWORD *)this + 8) != 1 )
  {
    *(_QWORD *)((char *)this + 36) = *(_QWORD *)this;
    *((_QWORD *)this + 6) = *((_QWORD *)this + 1);
    *((_DWORD *)this + 8) = 1;
    CRateInfo::Trace(this);
  }
}
