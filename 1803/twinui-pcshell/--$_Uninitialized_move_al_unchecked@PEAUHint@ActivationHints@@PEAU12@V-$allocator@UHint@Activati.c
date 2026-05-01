/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUHint@ActivationHints@@PEAU12@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAPEAUHint@ActivationHints@@PEAU12@00AEAV?$allocator@UHint@ActivationHints@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1802B0A08
 * Callers:
 *     ??$emplace_back@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAX$$QEAUHint@ActivationHints@@@Z @ 0x1802B0AD8 (--$emplace_back@UHint@ActivationHints@@@-$vector@UHint@ActivationHints@@V-$allocator@UHint@Activ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked<ActivationHints::Hint *,ActivationHints::Hint *,std::allocator<ActivationHints::Hint>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+50h] [rbp+18h]
  __int64 v8; // [rsp+58h] [rbp+20h]

  v7 = a3;
  v8 = a3;
  try
  {
    if ( a1 != a2 )
    {
      v3 = (_QWORD *)(a1 + 24);
      v4 = a1 - a3;
      do
      {
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_QWORD *)(a3 + 24) = 0LL;
        *(_OWORD *)a3 = *(_OWORD *)(v4 + a3);
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v4 + a3 + 16);
        *(v3 - 1) = 0LL;
        *v3 = 7LL;
        *(_WORD *)(v4 + a3) = 0;
        *(_QWORD *)(a3 + 32) = v3[1];
        v5 = v3[2];
        v3[2] = 0LL;
        *(_QWORD *)(a3 + 40) = v5;
        a3 += 48LL;
        v7 = a3;
        v3 += 6;
      }
      while ( v4 + a3 != a2 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ActivationHints::Hint>>(v8, v7);
    throw;
  }
  return a3;
}
