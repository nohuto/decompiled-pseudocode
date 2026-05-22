/*
 * XREFs of _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::emplace_back_std::function_void___cdecl(bool)__&___ptr64__::_1_::catch$132 @ 0x1800E366D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800051B0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@QEAAXQEAV?$function@$$A6AX_N@Z@2@_K@Z @ 0x180008048 (-deallocate@-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@QEAAXQEAV-$function@$$A6AX_N@Z@2@_K@Z.c)
 *     ??$destroy@V?$function@$$A6AX_N@Z@std@@@?$_Default_allocator_traits@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@SAXAEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@1@QEAV?$function@$$A6AX_N@Z@1@@Z @ 0x180008A3C (--$destroy@V-$function@$$A6AX_N@Z@std@@@-$_Default_allocator_traits@V-$allocator@V-$function@$$A.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_bool___std::allocator_std::function_void___cdecl_bool______::emplace_back_std::function_void___cdecl_bool_______ptr64__::_1_::catch_132(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a2 + 160);
  if ( *(_BYTE *)(a2 + 144) )
  {
    v4 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>(v3 + (*(_QWORD *)(a2 + 48) << 6));
    std::_Default_allocator_traits<std::allocator<std::function<void (bool)>>>::destroy<std::function<void (bool)>>(
      v5,
      v4);
  }
  std::allocator<std::function<void (bool)>>::deallocate(a1, v3, *(_QWORD *)(a2 + 168));
  throw;
}
