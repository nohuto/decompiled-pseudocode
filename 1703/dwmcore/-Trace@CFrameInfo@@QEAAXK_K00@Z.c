/*
 * XREFs of ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x18013433C
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180134160 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 *     ?UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ @ 0x18013E820 (-UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ.c)
 * Callees:
 *     Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x180140CD0 (Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 */

void __fastcall CFrameInfo::Trace(CFrameInfo *this, int a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      *((_QWORD *)this + 33) - *((_QWORD *)this + 32),
      *((unsigned __int8 *)this + 272),
      a2,
      *(_QWORD *)this,
      *((_DWORD *)this + 4),
      *((_QWORD *)this + 163),
      *((_QWORD *)this + 162),
      *((_DWORD *)this + 41));
}
