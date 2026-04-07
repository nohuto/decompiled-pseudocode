/*
 * XREFs of ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18002F57C
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18002C768 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18002D7BC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008CEF0 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
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
