/*
 * XREFs of ??$_Copy_impl@PEBDV?$back_insert_iterator@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$vector@EV?$allocator@E@std@@@std@@@0@PEBD0V10@U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800062BC
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?_Reserve@?$vector@EV?$allocator@E@std@@@std@@IEAAX_K@Z @ 0x180006374 (-_Reserve@-$vector@EV-$allocator@E@std@@@std@@IEAAX_K@Z.c)
 */

_QWORD *__fastcall std::_Copy_impl<char const *,std::back_insert_iterator<std::vector<unsigned char>>>(
        _QWORD *a1,
        char *a2,
        unsigned __int64 a3,
        _QWORD *a4,
        char a5)
{
  unsigned __int64 v5; // r15
  char *v7; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  char v11; // di
  char *v12; // rax
  _QWORD *result; // rax
  char *v14; // rdi
  _BYTE *v15; // rdx

  v5 = a3 - (_QWORD)a2;
  v7 = a2;
  v9 = 0LL;
  if ( (unsigned __int64)a2 > a3 )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      v10 = a4[1];
      v11 = *v7;
      a5 = *v7;
      if ( (unsigned __int64)&a5 < v10 && *a4 <= (unsigned __int64)&a5 )
      {
        v14 = &a5 - *a4;
        if ( v10 == a4[2] )
          std::vector<unsigned char>::_Reserve(a4, 1LL);
        v15 = (_BYTE *)a4[1];
        if ( v15 )
          *v15 = v14[*a4];
      }
      else
      {
        if ( v10 == a4[2] )
          std::vector<unsigned char>::_Reserve(a4, 1LL);
        v12 = (char *)a4[1];
        if ( v12 )
          *v12 = v11;
      }
      ++a4[1];
      ++v7;
      ++v9;
    }
    while ( v9 != v5 );
  }
  result = a1;
  *a1 = a4;
  return result;
}
