/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@00AEAU?$_Wrap_alloc@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180086068
 * Callers:
 *     ??$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAXAEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@Z @ 0x180085AA4 (--$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UContextual.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninitialized_move_al_unchecked<ContextualProcessorBuffer::ContextualProcessorMetadata *,ContextualProcessorBuffer::ContextualProcessorMetadata *,std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v4; // r9
  _QWORD *v5; // rcx
  __int64 *v6; // rdx
  __int64 *v8; // [rsp+50h] [rbp+18h]
  __int64 *v9; // [rsp+58h] [rbp+20h]

  v8 = a3;
  v9 = a3;
  try
  {
    if ( a1 != a2 )
    {
      v4 = a3 + 2;
      v5 = a1 + 2;
      do
      {
        if ( a3 )
        {
          *a3 = 0LL;
          v6 = v5 - 2;
          if ( a3 != v5 - 2 )
          {
            *a3 = *v6;
            *v6 = 0LL;
          }
          *((_DWORD *)v4 - 2) = *((_DWORD *)v5 - 2);
          *((_DWORD *)v4 - 1) = *((_DWORD *)v5 - 1);
          *v4 = 0LL;
          if ( v4 != v5 )
          {
            *v4 = *v5;
            *v5 = 0LL;
          }
        }
        a3 += 3;
        v8 = a3;
        v4 += 3;
        v5 += 3;
      }
      while ( v5 - 2 != a2 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>,ContextualProcessorBuffer::ContextualProcessorMetadata *>(
      v9,
      v8);
    throw;
  }
  return a3;
}
