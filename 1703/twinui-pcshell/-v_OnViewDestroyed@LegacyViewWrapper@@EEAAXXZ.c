/*
 * XREFs of ?v_OnViewDestroyed@LegacyViewWrapper@@EEAAXXZ @ 0x180110DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnViewDestroyed(LegacyViewWrapper *this)
{
  if ( *((_QWORD *)this + 30) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 19) + 448LL) + 160LL))(
      *(_QWORD *)(*((_QWORD *)this + 19) + 448LL),
      *((unsigned int *)this + 60));
}
