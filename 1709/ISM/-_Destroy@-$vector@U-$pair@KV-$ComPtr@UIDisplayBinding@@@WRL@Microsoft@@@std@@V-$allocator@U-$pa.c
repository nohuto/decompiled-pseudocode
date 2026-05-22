/*
 * XREFs of ?_Destroy@?$vector@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXPEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@2@0@Z @ 0x18001E4F8
 * Callers:
 *     _std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding_______::emplace_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding______::_1_::catch$154 @ 0x1800CD6C3 (_std--vector_std--pair_unsigned_long_Microsoft--WRL--ComPtr_IDisplayBinding____std--allocator_st.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2 + 1;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v4 += 2;
      result = v4 - 1;
    }
    while ( v4 - 1 != a3 );
  }
  return result;
}
