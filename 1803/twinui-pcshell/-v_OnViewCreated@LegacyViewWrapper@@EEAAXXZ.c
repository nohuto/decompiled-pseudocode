/*
 * XREFs of ?v_OnViewCreated@LegacyViewWrapper@@EEAAXXZ @ 0x1801E27D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnViewCreated(LegacyViewWrapper *this)
{
  if ( *((_QWORD *)this + 33) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 520LL) + 152LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 520LL),
      *((_QWORD *)this + 24));
}
