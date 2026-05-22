/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@0AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x1800B137C
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::InputSample_____ptr64_ContextualProcessorBuffer::InputSample_____ptr64_std::allocator_ContextualProcessorBuffer::InputSample____::_1_::catch$17 @ 0x1800E94A4 (_std--_Uninitialized_move_al_unchecked_ContextualProcessorBuffer--InputSample_____ptr64_Contextu.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
      {
        *(_QWORD *)(v3 + 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      if ( *(_QWORD *)v3 )
        operator delete(*(void **)v3);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
