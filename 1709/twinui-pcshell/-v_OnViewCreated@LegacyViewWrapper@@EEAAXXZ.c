/*
 * XREFs of ?v_OnViewCreated@LegacyViewWrapper@@EEAAXXZ @ 0x18013B010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnViewCreated(LegacyViewWrapper *this)
{
  if ( *((_QWORD *)this + 33) )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 22) + 520LL) + 144LL))(
      *(_QWORD *)(*((_QWORD *)this + 22) + 520LL),
      *((_QWORD *)this + 24),
      *((unsigned int *)this + 66));
}
