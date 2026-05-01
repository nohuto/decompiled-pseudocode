/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUItem@AgileRegistrationList@@PEAU12@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@PEAU12@00AEAV?$allocator@UItem@AgileRegistrationList@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180103628
 * Callers:
 *     ??$emplace_back@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAX$$QEAUItem@AgileRegistrationList@@@Z @ 0x180095BA8 (--$emplace_back@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$allocator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked<AgileRegistrationList::Item *,AgileRegistrationList::Item *,std::allocator<AgileRegistrationList::Item>>(
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
      *(_DWORD *)a3 = *(_DWORD *)a1;
      v3 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a3 + 8) = v3;
      a3 += 16LL;
      v5 = a3;
      a1 += 16LL;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(v6, v5);
    throw;
  }
  return a3;
}
