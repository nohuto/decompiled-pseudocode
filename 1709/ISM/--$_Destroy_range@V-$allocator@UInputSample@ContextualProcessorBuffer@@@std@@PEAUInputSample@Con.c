/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@PEAUInputSample@ContextualProcessorBuffer@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@0AEAU?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@0@@Z @ 0x180085C38
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::InputSample_____ptr64_ContextualProcessorBuffer::InputSample_____ptr64_std::allocator_ContextualProcessorBuffer::InputSample____::_1_::catch$1 @ 0x1800D09C8 (_std--_Uninitialized_move_al_unchecked_ContextualProcessorBuffer--InputSample_____ptr64_Contextu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>,ContextualProcessorBuffer::InputSample *>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 356;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v3 += 357;
      result = v3 - 356;
    }
    while ( v3 - 356 != a2 );
  }
  return result;
}
