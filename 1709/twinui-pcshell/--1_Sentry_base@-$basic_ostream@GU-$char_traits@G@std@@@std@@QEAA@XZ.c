/*
 * XREFs of ??1_Sentry_base@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1801166F0
 * Callers:
 *     _std::operator___unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$2 @ 0x1801EDF94 (_std--operator___unsigned_short_std--char_traits_unsigned_short____--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_ostream<unsigned short>::_Sentry_base::~_Sentry_base(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
