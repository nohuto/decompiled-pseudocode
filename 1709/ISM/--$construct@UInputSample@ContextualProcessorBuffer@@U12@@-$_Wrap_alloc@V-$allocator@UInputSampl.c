/*
 * XREFs of ??$construct@UInputSample@ContextualProcessorBuffer@@U12@@?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXPEAUInputSample@ContextualProcessorBuffer@@$$QEAU23@@Z @ 0x180085F10
 * Callers:
 *     ??$emplace_back@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAX$$QEAUInputSample@ContextualProcessorBuffer@@@Z @ 0x180085980 (--$emplace_back@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@ContextualProcess.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@PEAU12@00AEAU?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180086014 (--$_Uninitialized_move_al_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V-$allocat.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::InputSample>>::construct<ContextualProcessorBuffer::InputSample,ContextualProcessorBuffer::InputSample>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _OWORD *v4; // rax
  _OWORD *v5; // rcx
  __int128 v6; // xmm1
  _QWORD *v7; // rdx
  __int128 v8; // xmm1
  _QWORD *v9; // rcx

  if ( a2 )
  {
    v3 = 22LL;
    v4 = (_OWORD *)a2;
    v5 = (_OWORD *)a3;
    do
    {
      *v4 = *v5;
      v4[1] = v5[1];
      v4[2] = v5[2];
      v4[3] = v5[3];
      v4[4] = v5[4];
      v4[5] = v5[5];
      v4[6] = v5[6];
      v4 += 8;
      v6 = v5[7];
      v5 += 8;
      *(v4 - 1) = v6;
      --v3;
    }
    while ( v3 );
    v7 = (_QWORD *)(a2 + 2848);
    *v4 = *v5;
    v8 = v5[1];
    v9 = (_QWORD *)(a3 + 2848);
    v4[1] = v8;
    *v7 = 0LL;
    if ( v7 != (_QWORD *)(a3 + 2848) )
    {
      *v7 = *v9;
      *v9 = 0LL;
    }
  }
}
