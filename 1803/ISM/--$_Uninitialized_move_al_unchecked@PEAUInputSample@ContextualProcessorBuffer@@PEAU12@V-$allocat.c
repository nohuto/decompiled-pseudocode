/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@PEAU12@00AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800B1430
 * Callers:
 *     ??$emplace_back@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAAEAUInputSample@ContextualProcessorBuffer@@$$QEAU23@@Z @ 0x1800B0BA0 (--$emplace_back@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@ContextualProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move_al_unchecked<ContextualProcessorBuffer::InputSample *,ContextualProcessorBuffer::InputSample *,std::allocator<ContextualProcessorBuffer::InputSample>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 v4; // rax
  __int64 *v5; // r10
  __int64 v7; // [rsp+50h] [rbp+18h]
  __int64 v8; // [rsp+58h] [rbp+20h]

  v7 = (__int64)a3;
  v8 = (__int64)a3;
  try
  {
    if ( a1 != a2 )
    {
      v3 = a3 + 1;
      do
      {
        v4 = *a1;
        *a1 = 0LL;
        *a3 = v4;
        *v3 = 0LL;
        v5 = a1 + 1;
        if ( v3 != a1 + 1 )
        {
          *v3 = *v5;
          *v5 = 0LL;
        }
        a3 += 2;
        v7 = (__int64)a3;
        v3 += 2;
        a1 += 2;
      }
      while ( a1 != a2 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(v8, v7);
    throw;
  }
  return a3;
}
