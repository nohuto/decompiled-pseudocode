/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::InputSample_____ptr64_ContextualProcessorBuffer::InputSample_____ptr64_std::allocator_ContextualProcessorBuffer::InputSample____::_1_::catch$1 @ 0x1800D09C8
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@PEAUInputSample@ContextualProcessorBuffer@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@0AEAU?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@0@@Z @ 0x180085C38 (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@PEAUInputSample@Con.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::InputSample_____ptr64_ContextualProcessorBuffer::InputSample_____ptr64_std::allocator_ContextualProcessorBuffer::InputSample____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>,ContextualProcessorBuffer::InputSample *>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
