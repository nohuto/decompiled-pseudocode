/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@PEAU12@00AEAU?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180086014
 * Callers:
 *     ??$emplace_back@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAX$$QEAUInputSample@ContextualProcessorBuffer@@@Z @ 0x180085980 (--$emplace_back@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@ContextualProcess.c)
 * Callees:
 *     ??$construct@UInputSample@ContextualProcessorBuffer@@U12@@?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXPEAUInputSample@ContextualProcessorBuffer@@$$QEAU23@@Z @ 0x180085F10 (--$construct@UInputSample@ContextualProcessorBuffer@@U12@@-$_Wrap_alloc@V-$allocator@UInputSampl.c)
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked<ContextualProcessorBuffer::InputSample *,ContextualProcessorBuffer::InputSample *,std::allocator<ContextualProcessorBuffer::InputSample>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // r11
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 *v9; // [rsp+50h] [rbp+18h]
  __int64 *v10; // [rsp+58h] [rbp+20h]

  v9 = a3;
  v3 = (__int64)a3;
  v5 = a1;
  v10 = (__int64 *)v3;
  try
  {
    if ( a1 != a2 )
    {
      do
      {
        std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::InputSample>>::construct<ContextualProcessorBuffer::InputSample,ContextualProcessorBuffer::InputSample>(
          a1,
          v3,
          v5);
        v3 = v6 + 2856;
        v9 = (__int64 *)v3;
        v5 = v7 + 2856;
      }
      while ( v5 != a2 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>,ContextualProcessorBuffer::InputSample *>(
      v10,
      v9);
    throw;
  }
  return v3;
}
