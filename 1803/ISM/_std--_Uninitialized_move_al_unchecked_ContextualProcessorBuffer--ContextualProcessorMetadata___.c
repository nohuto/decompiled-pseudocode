/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::ContextualProcessorMetadata_____ptr64_ContextualProcessorBuffer::ContextualProcessorMetadata_____ptr64_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata____::_1_::catch$3 @ 0x1800E94C8
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@0AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x1800B13D0 (--$_Destroy_range@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@st.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::ContextualProcessorMetadata_____ptr64_ContextualProcessorBuffer::ContextualProcessorMetadata_____ptr64_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
