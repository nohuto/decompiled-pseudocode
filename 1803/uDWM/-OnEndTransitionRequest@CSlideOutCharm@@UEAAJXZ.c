/*
 * XREFs of ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x18009C930
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180009DB0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18009AC5C (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@@Z @ 0x18009ACB4 (-FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800A3278 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CSlideOutCharm::OnEndTransitionRequest(CSlideOutCharm *this)
{
  unsigned int v2; // r14d
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 i; // rdi
  CAnimationComponent *v7; // rcx

  *((_QWORD *)this + 16) = CAnimationScheduler::FindAnimatingTarget(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 28));
  v2 = CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28), 5);
  v3 = 0LL;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
  if ( *(_DWORD *)(v4 + 40) )
  {
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8 * v3);
      if ( *(_DWORD *)(v5 + 24) == 3 && *(_DWORD *)(v5 + 72) == 71 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 112); i = (unsigned int)(i + 1) )
        {
          v7 = *(CAnimationComponent **)(*(_QWORD *)(v5 + 88) + 8 * i);
          if ( (*((_DWORD *)v7 + 6) & 0xFFF) == 0x28 )
            CAnimationComponent::SetGhost(v7);
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(v4 + 40) );
  }
  return v2;
}
