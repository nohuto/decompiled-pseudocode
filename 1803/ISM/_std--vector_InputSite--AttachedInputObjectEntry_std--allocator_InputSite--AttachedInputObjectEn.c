/*
 * XREFs of _std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::emplace_back_InputSite::AttachedInputObjectEntry__::_1_::catch$66 @ 0x1800E3C27
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800051B0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@QEAAXQEAUAttachedInputObjectEntry@InputSite@@_K@Z @ 0x18000CC3C (-deallocate@-$allocator@UAttachedInputObjectEntry@InputSite@@@std@@QEAAXQEAUAttachedInputObjectE.c)
 *     ??$destroy@UAttachedInputObjectEntry@InputSite@@@?$_Default_allocator_traits@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@SAXAEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@1@QEAUAttachedInputObjectEntry@InputSite@@@Z @ 0x18000CDB0 (--$destroy@UAttachedInputObjectEntry@InputSite@@@-$_Default_allocator_traits@V-$allocator@UAttac.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::emplace_back_InputSite::AttachedInputObjectEntry__::_1_::catch_66(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = a2[14];
  v4 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>(v3 + 72LL * a2[17]);
  std::_Default_allocator_traits<std::allocator<InputSite::AttachedInputObjectEntry>>::destroy<InputSite::AttachedInputObjectEntry>(
    v5,
    v4);
  std::allocator<InputSite::AttachedInputObjectEntry>::deallocate(v6, v3, a2[16]);
  throw;
}
