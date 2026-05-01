/*
 * XREFs of ??DIterator@?$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@QEAA?AV?$ComPtr@UIHolographicViewTransitionNotification@@@WRL@Microsoft@@XZ @ 0x1801AD290
 * Callers:
 *     _lambda_4fd3127ed7710849848c55d6ef740a2d_::operator() @ 0x18009EE60 (_lambda_4fd3127ed7710849848c55d6ef740a2d_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::operator*(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
