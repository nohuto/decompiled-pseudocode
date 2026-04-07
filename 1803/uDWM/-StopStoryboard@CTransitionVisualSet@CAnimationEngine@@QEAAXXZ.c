/*
 * XREFs of ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18000F220
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18000DF08 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18000EF70 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x180095F70 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::StopStoryboard(CAnimationEngine::CTransitionVisualSet *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    v3 = **(_QWORD **)(*((_QWORD *)this + 3) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  *((_BYTE *)this + 33) = 1;
}
