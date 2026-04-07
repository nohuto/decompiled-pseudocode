/*
 * XREFs of ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x180012B5C
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x1800109D8 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180041F98 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800912A0 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?OnStoryboardEnd@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180036BF0 (-OnStoryboardEnd@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::StopStoryboard(CAnimationEngine::CTransitionVisualSet *this)
{
  __int64 i; // rbx
  CAnimatedTransitionVisual *v3; // rcx
  void (*v4)(void); // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    v3 = **(CAnimatedTransitionVisual ***)(*((_QWORD *)this + 3) + 8 * i);
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v4 == (char *)CAnimatedTransitionVisual::OnStoryboardEnd )
      CAnimatedTransitionVisual::OnStoryboardEnd(v3);
    else
      v4();
  }
  *((_BYTE *)this + 33) = 1;
}
