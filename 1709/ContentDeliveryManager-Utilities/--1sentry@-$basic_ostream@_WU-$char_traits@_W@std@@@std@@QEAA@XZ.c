/*
 * XREFs of ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x180082A20
 * Callers:
 *     _std::basic_ostream_wchar_t_std::char_traits_wchar_t___::flush_::_1_::dtor$0 @ 0x1800BB329 (_std--basic_ostream_wchar_t_std--char_traits_wchar_t___--flush_--_1_--dtor$0.c)
 * Callees:
 *     ?_Osfx@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAXXZ @ 0x1800829B4 (-_Osfx@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x180098314 (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::wostream::sentry::~sentry(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(*a1);
  result = *(_QWORD *)*a1;
  v3 = *(_QWORD *)(*(int *)(result + 4) + *a1 + 72);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
