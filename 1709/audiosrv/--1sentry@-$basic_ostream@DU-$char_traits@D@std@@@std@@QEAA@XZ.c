/*
 * XREFs of ??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x18005BD98
 * Callers:
 *     _std::operator___std::char_traits_char____::_1_::dtor$0 @ 0x180039E5C (_std--operator___std--char_traits_char____--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::ostream::sentry::~sentry(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(*a1);
  result = std::ios::rdbuf(*a1 + *(int *)(*(_QWORD *)*a1 + 4LL));
  if ( result )
  {
    v3 = std::ios::rdbuf(*a1 + *(int *)(*(_QWORD *)*a1 + 4LL));
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
