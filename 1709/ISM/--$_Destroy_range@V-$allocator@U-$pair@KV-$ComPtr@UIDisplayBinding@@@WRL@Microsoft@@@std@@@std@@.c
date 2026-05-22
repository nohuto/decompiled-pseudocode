/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@PEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@2@@std@@YAXPEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@0@0AEAU?$_Wrap_alloc@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x18001FCE4
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding________ptr64_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding________ptr64_std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding________::_1_::catch$4 @ 0x1800CD74C (_std--_Uninitialized_move_al_unchecked_std--pair_unsigned_long_Microsoft--WRL--ComPtr_IDisplayBi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>,std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v3 += 2;
      result = v3 - 1;
    }
    while ( v3 - 1 != a2 );
  }
  return result;
}
