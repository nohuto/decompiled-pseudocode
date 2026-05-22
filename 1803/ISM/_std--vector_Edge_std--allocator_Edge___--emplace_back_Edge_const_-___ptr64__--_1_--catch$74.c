/*
 * XREFs of _std::vector_Edge_std::allocator_Edge___::emplace_back_Edge_const_&___ptr64__::_1_::catch$74 @ 0x1800E71BC
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800051B0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$allocator@VEdge@@@std@@QEAAXQEAVEdge@@_K@Z @ 0x180067E0C (-deallocate@-$allocator@VEdge@@@std@@QEAAXQEAVEdge@@_K@Z.c)
 *     ??$destroy@VEdge@@@?$_Default_allocator_traits@V?$allocator@VEdge@@@std@@@std@@SAXAEAV?$allocator@VEdge@@@1@QEAVEdge@@@Z @ 0x180067EB4 (--$destroy@VEdge@@@-$_Default_allocator_traits@V-$allocator@VEdge@@@std@@@std@@SAXAEAV-$allocato.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Edge_std::allocator_Edge___::emplace_back_Edge_const_____ptr64__::_1_::catch_74(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a2 + 144);
  if ( *(_BYTE *)(a2 + 128) )
  {
    v4 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>(v3 + 96LL * *(_QWORD *)(a2 + 48));
    std::_Default_allocator_traits<std::allocator<Edge>>::destroy<Edge>(v5, v4);
  }
  std::allocator<Edge>::deallocate(a1, v3, *(_QWORD *)(a2 + 152));
  throw;
}
