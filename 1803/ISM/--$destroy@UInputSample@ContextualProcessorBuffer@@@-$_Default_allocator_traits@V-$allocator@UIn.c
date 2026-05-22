/*
 * XREFs of ??$destroy@UInputSample@ContextualProcessorBuffer@@@?$_Default_allocator_traits@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@SAXAEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@1@QEAUInputSample@ContextualProcessorBuffer@@@Z @ 0x1800B1300
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::emplace_back_ContextualProcessorBuffer::InputSample__::_1_::catch$98 @ 0x1800E9419 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProcessorBuffer--In.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::InputSample>>::destroy<ContextualProcessorBuffer::InputSample>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( *(_QWORD *)a2 )
    operator delete(*(void **)a2);
}
