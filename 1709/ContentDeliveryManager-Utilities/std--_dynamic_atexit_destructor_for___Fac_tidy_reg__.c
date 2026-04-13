/*
 * XREFs of std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x1800BDEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void std::_dynamic_atexit_destructor_for___Fac_tidy_reg__()
{
  __int64 v0; // rcx
  void (__fastcall ***v1)(_QWORD, __int64); // rax
  void *v2; // rbx

  while ( 1 )
  {
    v2 = qword_18015D008;
    if ( !qword_18015D008 )
      break;
    v0 = *((_QWORD *)qword_18015D008 + 1);
    qword_18015D008 = *(void **)qword_18015D008;
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
    if ( v1 )
      (**v1)(v1, 1LL);
    operator delete(v2);
  }
}
