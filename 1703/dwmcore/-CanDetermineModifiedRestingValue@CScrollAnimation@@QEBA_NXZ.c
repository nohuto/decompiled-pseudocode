/*
 * XREFs of ?CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ @ 0x18018188C
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18016C49C (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CScrollAnimation::CanDetermineModifiedRestingValue(CScrollAnimation *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this) + 184);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
  else
    return 1;
}
