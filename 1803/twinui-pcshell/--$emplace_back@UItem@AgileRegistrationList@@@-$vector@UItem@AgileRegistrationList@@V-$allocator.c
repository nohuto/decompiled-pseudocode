/*
 * XREFs of ??$emplace_back@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAX$$QEAUItem@AgileRegistrationList@@@Z @ 0x180095BA8
 * Callers:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18004E6B0 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUItem@AgileRegistrationList@@PEAU12@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@PEAU12@00AEAV?$allocator@UItem@AgileRegistrationList@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180103628 (--$_Uninitialized_move_al_unchecked@PEAUItem@AgileRegistrationList@@PEAU12@V-$allocator@UItem@Ag.c)
 *     ?_Change_array@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@AEAAXQEAUItem@AgileRegistrationList@@_K1@Z @ 0x18010EBF4 (-_Change_array@-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@@@.c)
 */

__int64 __fastcall std::vector<AgileRegistrationList::Item>::emplace_back<AgileRegistrationList::Item>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  char *v12; // rax
  char *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+80h] [rbp+18h]
  char *v18; // [rsp+88h] [rbp+20h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (v5 - *a1) >> 4;
    v17 = v7;
    if ( v7 == 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = v7 + 1;
    v9 = (v4 - *a1) >> 4;
    v10 = v9 >> 1;
    if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    v12 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v11, 0x10uLL);
    v13 = v12;
    v18 = v12;
    try
    {
      v14 = 2 * v7;
      *(_DWORD *)&v12[8 * v14] = *(_DWORD *)a2;
      v15 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)&v12[8 * v14 + 8] = v15;
      std::_Uninitialized_move_al_unchecked<AgileRegistrationList::Item *,AgileRegistrationList::Item *,std::allocator<AgileRegistrationList::Item>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      std::_Default_allocator_traits<std::allocator<AgileRegistrationList::Item>>::destroy<AgileRegistrationList::Item>(
        v16,
        &v18[16 * v17]);
      std::_Deallocate(v18, v11, 0x10uLL);
      throw;
    }
    return std::vector<AgileRegistrationList::Item>::_Change_array(a1, v13, v8, v11);
  }
  else
  {
    *(_DWORD *)v5 = *(_DWORD *)a2;
    result = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(v5 + 8) = result;
    a1[1] += 16LL;
  }
  return result;
}
