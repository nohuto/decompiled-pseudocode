/*
 * XREFs of ?CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ @ 0x1801BE0BC
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x180193AFC (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CScrollAnimation::CanDetermineModifiedRestingValue(CScrollAnimation *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this) + 136);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
  else
    return 1;
}
