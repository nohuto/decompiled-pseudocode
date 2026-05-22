/*
 * XREFs of ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@0AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x1800B13D0
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_ContextualProcessorBuffer::ContextualProcessorMetadata_____ptr64_ContextualProcessorBuffer::ContextualProcessorMetadata_____ptr64_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata____::_1_::catch$3 @ 0x1800E94C8 (_std--_Uninitialized_move_al_unchecked_ContextualProcessorBuffer--ContextualProcessorMetadata___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = v3[2];
      if ( v4 )
      {
        v3[2] = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v6 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      v3 += 3;
    }
    while ( v3 != a2 );
  }
  return result;
}
