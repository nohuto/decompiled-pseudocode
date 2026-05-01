/*
 * XREFs of ?v_OnViewCreated@LegacyViewWrapper@@EEAAXXZ @ 0x180110D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnViewCreated(LegacyViewWrapper *this)
{
  if ( *((_QWORD *)this + 30) )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 19) + 448LL) + 144LL))(
      *(_QWORD *)(*((_QWORD *)this + 19) + 448LL),
      *((_QWORD *)this + 21),
      *((unsigned int *)this + 60));
}
