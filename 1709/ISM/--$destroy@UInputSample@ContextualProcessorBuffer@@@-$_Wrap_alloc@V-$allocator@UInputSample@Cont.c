/*
 * XREFs of ??$destroy@UInputSample@ContextualProcessorBuffer@@@?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXPEAUInputSample@ContextualProcessorBuffer@@@Z @ 0x180085FA4
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::emplace_back_ContextualProcessorBuffer::InputSample__::_1_::catch$67 @ 0x1800D093B (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProcessorBuffer--In.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::InputSample>>::destroy<ContextualProcessorBuffer::InputSample>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 2848);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 2848) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
