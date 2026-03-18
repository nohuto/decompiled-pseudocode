/*
 * XREFs of ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800664C4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ComputeFrameTime@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013C784 (-ComputeFrameTime@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  *((_QWORD *)this + 2694) = *(_QWORD *)(*((_QWORD *)this + 2685) + 248LL);
  *(_QWORD *)((char *)this + 21532) = *(_QWORD *)(*((_QWORD *)this + 2685) + 232LL);
  *(_QWORD *)((char *)this + 21540) = *(_QWORD *)(*((_QWORD *)this + 2685) + 88LL);
  *((_DWORD *)this + 5392) = *(_DWORD *)(*((_QWORD *)this + 2685) + 16LL);
  *((_DWORD *)this + 5387) = *(_DWORD *)(*((_QWORD *)this + 2685) + 100LL);
  *(_QWORD *)((char *)this + 21572) = *(_QWORD *)(*((_QWORD *)this + 2685) + 80LL);
  *((_QWORD *)this + 2695) = **((_QWORD **)this + 2685);
  *(_QWORD *)((char *)this + 21508) = *((_QWORD *)this + 17);
  *(_QWORD *)((char *)this + 21516) = *((_QWORD *)this + 20);
  *(_QWORD *)((char *)this + 21524) = *(_QWORD *)((char *)this + 172);
  *((_QWORD *)this + 2702) = *((_QWORD *)this + 3183);
  *((_DWORD *)this + 5406) = *((_DWORD *)this + 6364);
  v1 = *((unsigned int *)this + 5368);
  if ( (_DWORD)v1 != -1 )
  {
    *(_QWORD *)((char *)this + 21580) = *((_QWORD *)this + 166 * v1 + 27);
    *((_DWORD *)this + 5397) = *((_DWORD *)this + 332 * *((unsigned int *)this + 5368) + 58);
  }
  v2 = *((unsigned int *)this + 5369);
  if ( (_DWORD)v2 != -1 )
  {
    *((_QWORD *)this + 2699) = *((_QWORD *)this + 166 * v2 + 27);
    *(_QWORD *)((char *)this + 21604) = *((_QWORD *)this + 166 * *((unsigned int *)this + 5369) + 37);
  }
  *((_DWORD *)this + 5400) = *(_DWORD *)(*((_QWORD *)this + 2685) + 664LL);
  *((_DWORD *)this + 5403) = *(_DWORD *)(*((_QWORD *)this + 2685) + 668LL);
  *(_QWORD *)((char *)this + 21804) = *(_QWORD *)((char *)this + 21796);
  *(_QWORD *)((char *)this + 21796) = *((unsigned int *)this + 5400);
}
