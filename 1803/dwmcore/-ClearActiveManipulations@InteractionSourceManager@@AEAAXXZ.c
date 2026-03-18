/*
 * XREFs of ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801C9A80
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180196D74 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1801C96F8 (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801CA140 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x180199A0C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 */

void __fastcall InteractionSourceManager::ClearActiveManipulations(InteractionSourceManager *this)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi

  v1 = (_QWORD *)((char *)this + 80);
  v2 = *((_QWORD *)this + 13);
  v3 = v2 + *((_QWORD *)this + 14);
  while ( v2 != v3 )
  {
    CManipulation::SetCaptureState_RenderThread(*(CManipulation **)(*(_QWORD *)(v1[1] + 8 * ((v1[2] - 1LL) & (v2 >> 1)))
                                                                  + 8 * (v2 & 1)));
    ++v2;
  }
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy(v1);
}
