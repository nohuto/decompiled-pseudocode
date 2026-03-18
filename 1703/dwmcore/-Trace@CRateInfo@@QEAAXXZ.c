/*
 * XREFs of ?Trace@CRateInfo@@QEAAXXZ @ 0x1800B8414
 * Callers:
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068E00 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?SetRefreshesPerFrame@CRateInfo@@QEAAXI@Z @ 0x1800B8408 (-SetRefreshesPerFrame@CRateInfo@@QEAAXI@Z.c)
 *     ?Initialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D0C8 (-Initialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     Template_nxxqnx @ 0x18014201C (Template_nxxqnx.c)
 */

void __fastcall CRateInfo::Trace(CRateInfo *this, __int64 a2, int a3)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_nxxqnx(
      (_DWORD)this,
      (_DWORD)this + 36,
      a3,
      (_DWORD)this,
      *((_QWORD *)this + 1),
      *((_QWORD *)this + 3),
      *((_DWORD *)this + 8));
}
