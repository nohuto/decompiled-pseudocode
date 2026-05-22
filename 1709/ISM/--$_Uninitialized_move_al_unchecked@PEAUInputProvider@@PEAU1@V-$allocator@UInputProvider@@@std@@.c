/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUInputProvider@@PEAU1@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800364A4
 * Callers:
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAX$$QEAUInputProvider@@@Z @ 0x180036244 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_move_al_unchecked<InputProvider *,InputProvider *,std::allocator<InputProvider>>(
        _QWORD *a1,
        _QWORD *a2,
        _OWORD *a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  __int64 *v6; // [rsp+50h] [rbp+18h]
  __int64 *v7; // [rsp+58h] [rbp+20h]

  v6 = (__int64 *)a3;
  v7 = (__int64 *)a3;
  try
  {
    if ( a1 != a2 )
    {
      v3 = a3 + 1;
      v4 = a1 + 2;
      do
      {
        if ( a3 )
        {
          *a3 = *((_OWORD *)v4 - 1);
          *v3 = 0LL;
          if ( v3 != v4 )
          {
            *v3 = *v4;
            *v4 = 0LL;
          }
        }
        a3 = (_OWORD *)((char *)a3 + 24);
        v6 = (__int64 *)a3;
        v3 += 3;
        v4 += 3;
      }
      while ( v4 - 2 != a2 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<InputProvider>,InputProvider *>(v7, v6);
    throw;
  }
  return a3;
}
