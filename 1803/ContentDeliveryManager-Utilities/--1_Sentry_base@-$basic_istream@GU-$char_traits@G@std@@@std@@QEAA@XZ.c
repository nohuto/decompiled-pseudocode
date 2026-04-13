/*
 * XREFs of ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180033E8C
 * Callers:
 *     _std::basic_ostream_unsigned_short_std::char_traits_unsigned_short___::sentry::sentry_::_1_::dtor$0 @ 0x1800C2DB4 (_std--basic_ostream_unsigned_short_std--char_traits_unsigned_short___--sentry--sentry_--_1_--dto.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$2 @ 0x1800C2E09 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$2.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$2_0 @ 0x1800C2E83 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$2_.c)
 *     _std::basic_ostream_wchar_t_std::char_traits_wchar_t___::flush_::_1_::dtor$1 @ 0x1800C6205 (_std--basic_ostream_wchar_t_std--char_traits_wchar_t___--flush_--_1_--dtor$1.c)
 *     _std::operator___wchar_t_std::char_traits_wchar_t____::_1_::dtor$1 @ 0x1800C6244 (_std--operator___wchar_t_std--char_traits_wchar_t____--_1_--dtor$1.c)
 *     _std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::dtor$2 @ 0x1800C83B7 (_std--basic_istream_wchar_t_std--char_traits_wchar_t___--operator___--_1_--dtor$2.c)
 *     _std::operator___wchar_t_std::char_traits_wchar_t__wchar_t__::_1_::dtor$2 @ 0x1800C9CF3 (_std--operator___wchar_t_std--char_traits_wchar_t__wchar_t__--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
