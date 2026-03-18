/*
 * XREFs of ?Initialize@CPartitionScheduler@@IEAAXXZ @ 0x1800C965C
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068F08 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D770 (-Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ @ 0x1800C9560 (-GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ.c)
 */

void __fastcall CPartitionScheduler::Initialize(CPartitionScheduler *this)
{
  unsigned __int64 AbsoluteTime; // rax

  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = ((unsigned __int64)this + 48) | (((_QWORD)this + 48) << 32);
  AbsoluteTime = CPartitionScheduler::GetAbsoluteTime(this);
  *((_QWORD *)this + 1) = AbsoluteTime;
  *(_QWORD *)this = AbsoluteTime;
  *((_QWORD *)this + 3) = *((_QWORD *)this + 4);
}
