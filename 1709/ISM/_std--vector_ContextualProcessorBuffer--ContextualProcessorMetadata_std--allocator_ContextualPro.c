/*
 * XREFs of _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::emplace_back_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&___ptr64__::_1_::catch$73 @ 0x1800D0981
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K@Z @ 0x1800053F0 (-deallocate@-$_Wrap_alloc@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@.c)
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800055E0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ??$destroy@UContextualProcessorMetadata@ContextualProcessorBuffer@@@?$_Wrap_alloc@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@@Z @ 0x180085FD0 (--$destroy@UContextualProcessorMetadata@ContextualProcessorBuffer@@@-$_Wrap_alloc@V-$allocator@U.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::emplace_back_ContextualProcessorBuffer::ContextualProcessorMetadata_const_____ptr64__::_1_::catch_73(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = (_QWORD *)a2[17];
  v4 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v3[3 * a2[16]]);
  std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>::destroy<ContextualProcessorBuffer::ContextualProcessorMetadata>(
    v5,
    v4);
  std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>::deallocate(v6, v3, a2[14]);
  throw;
}
