/*
 * XREFs of _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::emplace_back_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&___ptr64__::_1_::catch$70 @ 0x1800E945D
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@QEAAXQEAUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@_K@Z @ 0x180004FB8 (-deallocate@-$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@QEAAXQEAUINPUT_SYSTEM_OUTPUT_.c)
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800051B0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ??$destroy@UContextualProcessorMetadata@ContextualProcessorBuffer@@@?$_Default_allocator_traits@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@SAXAEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@1@QEAUContextualProcessorMetadata@ContextualProcessorBuffer@@@Z @ 0x1800B1338 (--$destroy@UContextualProcessorMetadata@ContextualProcessorBuffer@@@-$_Default_allocator_traits@.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::emplace_back_ContextualProcessorBuffer::ContextualProcessorMetadata_const_____ptr64__::_1_::catch_70(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = a2[14];
  v4 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>(v3 + 24LL * a2[17]);
  std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>::destroy<ContextualProcessorBuffer::ContextualProcessorMetadata>(
    v5,
    v4);
  std::allocator<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::deallocate(v6, v3, a2[16]);
  throw;
}
