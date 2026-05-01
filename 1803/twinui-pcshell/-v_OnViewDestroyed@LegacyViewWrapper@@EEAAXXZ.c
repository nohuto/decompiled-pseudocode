/*
 * XREFs of ?v_OnViewDestroyed@LegacyViewWrapper@@EEAAXXZ @ 0x1801E2810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnViewDestroyed(LegacyViewWrapper *this)
{
  if ( *((_QWORD *)this + 33) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 520LL) + 168LL))(*(_QWORD *)(*((_QWORD *)this + 21) + 520LL));
}
