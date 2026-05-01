/*
 * XREFs of ??$_Uninitialized_move_al_unchecked1@PEAUItem@AgileRegistrationList@@PEAU12@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@PEAU12@00AEAU?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180024FB0
 * Callers:
 *     ??$emplace_back@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAX$$QEAUItem@AgileRegistrationList@@@Z @ 0x180025128 (--$emplace_back@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$allocator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked1<AgileRegistrationList::Item *,AgileRegistrationList::Item *,std::allocator<AgileRegistrationList::Item>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+50h] [rbp+18h]
  __int64 v6; // [rsp+58h] [rbp+20h]

  v5 = a3;
  v6 = a3;
  try
  {
    while ( a1 != a2 )
    {
      if ( a3 )
      {
        *(_DWORD *)a3 = *(_DWORD *)a1;
        v3 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a3 + 8) = v3;
      }
      a3 += 16LL;
      v5 = a3;
      a1 += 16LL;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>,AgileRegistrationList::Item *>(v6, v5);
    throw;
  }
  return a3;
}
