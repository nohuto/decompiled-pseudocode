/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::ContextualProcessorMetadata_____ptr64_ContextualProcessorBuffer::ContextualProcessorMetadata_____ptr64_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata____::_1_::catch$4 @ 0x1800D09EC
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@0AEAU?$_Wrap_alloc@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@0@@Z @ 0x180085C88 (--$_Destroy_range@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@PEA.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::ContextualProcessorMetadata_____ptr64_ContextualProcessorBuffer::ContextualProcessorMetadata_____ptr64_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>,ContextualProcessorBuffer::ContextualProcessorMetadata *>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
