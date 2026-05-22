/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::InputSample_____ptr64_ContextualProcessorBuffer::InputSample_____ptr64_std::allocator_ContextualProcessorBuffer::InputSample____::_1_::catch$17 @ 0x1800E94A4
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@0AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x1800B137C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::InputSample_____ptr64_ContextualProcessorBuffer::InputSample_____ptr64_std::allocator_ContextualProcessorBuffer::InputSample____::_1_::catch_17(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(
    *(_QWORD *)(a2 + 88),
    *(_QWORD *)(a2 + 80));
  throw;
}
