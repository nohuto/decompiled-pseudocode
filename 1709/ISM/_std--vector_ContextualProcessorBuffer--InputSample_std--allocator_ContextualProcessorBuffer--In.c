/*
 * XREFs of _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::emplace_back_ContextualProcessorBuffer::InputSample__::_1_::catch$67 @ 0x1800D093B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800055E0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXPEAUInputSample@ContextualProcessorBuffer@@_K@Z @ 0x18008592C (-deallocate@-$_Wrap_alloc@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAX.c)
 *     ??$destroy@UInputSample@ContextualProcessorBuffer@@@?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXPEAUInputSample@ContextualProcessorBuffer@@@Z @ 0x180085FA4 (--$destroy@UInputSample@ContextualProcessorBuffer@@@-$_Wrap_alloc@V-$allocator@UInputSample@Cont.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::emplace_back_ContextualProcessorBuffer::InputSample__::_1_::catch_67(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>(a2[16] + 2856 * a2[17]);
  std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::InputSample>>::destroy<ContextualProcessorBuffer::InputSample>(
    v4,
    v3);
  std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::InputSample>>::deallocate(v5, (_QWORD *)a2[16], a2[14]);
  throw;
}
