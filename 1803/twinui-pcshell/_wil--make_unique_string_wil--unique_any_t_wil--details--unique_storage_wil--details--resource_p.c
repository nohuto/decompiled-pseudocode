/*
 * XREFs of _wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short_____ptr64_void_(__cdecl_)(void_____ptr64)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short_____ptr64_0_std::nullptr_t________::_1_::dtor$0 @ 0x1801C01E3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800F61A0 (--1-$unique_ptr@EU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ.c)
 */

void __fastcall wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short_____ptr64_void____cdecl___void_____ptr64___CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short_____ptr64_0_std::nullptr_t________::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(*(void ***)(a2 + 64));
  }
}
