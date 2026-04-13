/*
 * XREFs of std::_dynamic_atexit_destructor_for__classic_locale__ @ 0x1800BDF50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void std::_dynamic_atexit_destructor_for__classic_locale__()
{
  void (__fastcall ***v0)(_QWORD, __int64); // rax

  if ( qword_18015D040 )
  {
    v0 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18015D040 + 16LL))(qword_18015D040);
    if ( v0 )
      (**v0)(v0, 1LL);
  }
}
