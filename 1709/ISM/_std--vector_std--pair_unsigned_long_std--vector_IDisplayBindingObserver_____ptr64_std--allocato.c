/*
 * XREFs of _std::vector_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64______std::allocator_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64_________::emplace_back_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64________::_1_::catch$194 @ 0x1800CD635
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800055E0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@2@_K@Z @ 0x18001E450 (-deallocate@-$_Wrap_alloc@V-$allocator@U-$pair@KV-$vector@PEAUIDisplayBindingObserver@@V-$alloca.c)
 *     ??$destroy@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@?$_Wrap_alloc@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@1@@Z @ 0x18001F3F8 (--$destroy@U-$pair@KV-$vector@PEAUIDisplayBindingObserver@@V-$allocator@PEAUIDisplayBindingObser.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64______std::allocator_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64_________::emplace_back_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64________::_1_::catch_194(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>(a2[19] + 32 * a2[18]);
  std::_Wrap_alloc<std::allocator<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>>::destroy<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>(
    v4,
    v3);
  std::_Wrap_alloc<std::allocator<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>>::deallocate(
    v5,
    (_QWORD *)a2[19],
    a2[16]);
  throw;
}
