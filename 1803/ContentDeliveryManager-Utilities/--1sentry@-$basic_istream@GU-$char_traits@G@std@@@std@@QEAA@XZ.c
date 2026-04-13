/*
 * XREFs of ??1sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18002A4BC
 * Callers:
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$0 @ 0x1800C2E15 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$0.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$0_0 @ 0x1800C2E8F (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$0_.c)
 *     _std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::dtor$0 @ 0x1800C83C3 (_std--basic_istream_wchar_t_std--char_traits_wchar_t___--operator___--_1_--dtor$0.c)
 *     _std::operator___wchar_t_std::char_traits_wchar_t__wchar_t__::_1_::dtor$0 @ 0x1800C9CFF (_std--operator___wchar_t_std--char_traits_wchar_t__wchar_t__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_istream<unsigned short>::sentry::~sentry(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
