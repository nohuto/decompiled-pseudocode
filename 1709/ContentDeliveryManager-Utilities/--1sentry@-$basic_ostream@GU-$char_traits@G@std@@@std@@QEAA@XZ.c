/*
 * XREFs of ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180030C3C
 * Callers:
 *     _std::basic_ostream_unsigned_short_std::char_traits_unsigned_short___::flush_::_1_::dtor$0 @ 0x1800B61EB (_std--basic_ostream_unsigned_short_std--char_traits_unsigned_short___--flush_--_1_--dtor$0.c)
 *     _std::operator___unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$0 @ 0x1800B6F33 (_std--operator___unsigned_short_std--char_traits_unsigned_short____--_1_--dtor$0.c)
 * Callees:
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x180033654 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x180098314 (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_ostream<unsigned short>::sentry::~sentry(__int64 **a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(*a1);
  result = **a1;
  v3 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
