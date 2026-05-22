/*
 * XREFs of _std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding_______::emplace_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding______::_1_::catch$154 @ 0x1800CD6C3
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@2@_K@Z @ 0x18001E4A4 (-deallocate@-$_Wrap_alloc@V-$allocator@U-$pair@KV-$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std.c)
 *     ?_Destroy@?$vector@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXPEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@2@0@Z @ 0x18001E4F8 (-_Destroy@-$vector@U-$pair@KV-$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@V-$allocator@U-$pa.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding_______::emplace_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding______::_1_::catch_154(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>::_Destroy(
    a1,
    *(__int64 **)(a2 + 48),
    *(__int64 **)(a2 + 160));
  std::_Wrap_alloc<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>>::deallocate(
    v3,
    *(_QWORD **)(a2 + 144),
    *(_QWORD *)(a2 + 56));
  throw;
}
