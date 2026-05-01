/*
 * XREFs of ??$emplace_back@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAX$$QEAUHint@ActivationHints@@@Z @ 0x1802B0AD8
 * Callers:
 *     ?AddHint@ActivationHints@@UEAAJPEBGPEAUIUnknown@@@Z @ 0x1802B0F60 (-AddHint@ActivationHints@@UEAAJPEBGPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUHint@ActivationHints@@PEAU12@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAPEAUHint@ActivationHints@@PEAU12@00AEAV?$allocator@UHint@ActivationHints@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1802B0A08 (--$_Uninitialized_move_al_unchecked@PEAUHint@ActivationHints@@PEAU12@V-$allocator@UHint@Activati.c)
 *     ?_Change_array@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXQEAUHint@ActivationHints@@_K1@Z @ 0x1802B1450 (-_Change_array@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@A.c)
 */

__int64 __fastcall std::vector<ActivationHints::Hint>::emplace_back<ActivationHints::Hint>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  char *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  char *v16; // [rsp+88h] [rbp+20h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (v5 - *a1) / 48;
    if ( v7 == 0x555555555555555LL )
      std::_Xlength_error("vector<T> too long");
    v8 = (v4 - *a1) / 48;
    v9 = v8 >> 1;
    if ( v8 <= 0x555555555555555LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 0x30uLL);
    v12 = (__int64)v11;
    v16 = v11;
    try
    {
      v13 = 6 * v7;
      *(_QWORD *)&v11[8 * v13 + 16] = 0LL;
      *(_QWORD *)&v11[8 * v13 + 24] = 0LL;
      *(_OWORD *)&v11[8 * v13] = *(_OWORD *)a2;
      *(_OWORD *)&v11[8 * v13 + 16] = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 24) = 7LL;
      *(_WORD *)a2 = 0;
      *(_QWORD *)&v11[8 * v13 + 32] = *(_QWORD *)(a2 + 32);
      v14 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = 0LL;
      *(_QWORD *)(v12 + 8 * v13 + 40) = v14;
      std::_Uninitialized_move_al_unchecked<ActivationHints::Hint *,ActivationHints::Hint *,std::allocator<ActivationHints::Hint>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      std::_Default_allocator_traits<std::allocator<ActivationHints::Hint>>::destroy<ActivationHints::Hint>(
        v15,
        (__int64)&v16[48 * v7]);
      std::_Deallocate(v16, v10, 0x30uLL);
      throw;
    }
    return std::vector<ActivationHints::Hint>::_Change_array(a1, v12, v7 + 1, v10);
  }
  else
  {
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a2 + 32);
    result = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(v5 + 40) = result;
    a1[1] += 48LL;
  }
  return result;
}
