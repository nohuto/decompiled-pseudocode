/*
 * XREFs of ??1_Fac_tidy_reg_t@std@@QEAA@XZ @ 0x180097710
 * Callers:
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x1800B6730 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg__.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(std::_Fac_tidy_reg_t *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rax
  _QWORD **v2; // rbx

  while ( 1 )
  {
    v2 = (_QWORD **)qword_180438078;
    if ( !qword_180438078 )
      break;
    qword_180438078 = *(void **)qword_180438078;
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD *))(*v2[1] + 16LL))(v2[1]);
    if ( v1 )
      (**v1)(v1, 1LL);
    operator delete(v2, (const struct std::nothrow_t *)0x10);
  }
}
