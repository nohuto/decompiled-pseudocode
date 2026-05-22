/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180034164
 * Callers:
 *     ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x180033DC4 (-Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z.c)
 *     GetHolographicInputSession @ 0x180090C58 (GetHolographicInputSession.c)
 * Callees:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800343A4 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800343A4.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, _WORD *a2)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // cf
  __int64 v7; // rsi
  _QWORD *v8; // rdi

  v3 = Src;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = Src[2];
  if ( v4 > v3[3] - v5 )
    return (_QWORD *)std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_(
                       v3,
                       v4);
  v6 = v3[3] < 8uLL;
  v7 = v5 + v4;
  v3[2] = v5 + v4;
  v8 = v3;
  if ( !v6 )
    v8 = (_QWORD *)*v3;
  memmove((char *)v8 + 2 * v5, a2, 2 * v4);
  *((_WORD *)v8 + v7) = 0;
  return v3;
}
