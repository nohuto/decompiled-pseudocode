/*
 * XREFs of ??$destroy@UContextualProcessorMetadata@ContextualProcessorBuffer@@@?$_Default_allocator_traits@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@SAXAEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@1@QEAUContextualProcessorMetadata@ContextualProcessorBuffer@@@Z @ 0x1800B1338
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::emplace_back_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&___ptr64__::_1_::catch$70 @ 0x1800E945D (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator_ContextualPro.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>::destroy<ContextualProcessorBuffer::ContextualProcessorMetadata>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a2[2];
  if ( v2 )
  {
    a2[2] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
