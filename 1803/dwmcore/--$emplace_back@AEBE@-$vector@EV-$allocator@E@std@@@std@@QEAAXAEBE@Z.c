/*
 * XREFs of ??$emplace_back@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAXAEBE@Z @ 0x1800D2608
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800D2574 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800D25A4 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

char __fastcall std::vector<unsigned char>::emplace_back<unsigned char const &>(_QWORD *a1, _BYTE *a2)
{
  _BYTE *v2; // r15
  char result; // al
  _BYTE *v6; // r15
  unsigned __int64 v7; // rdi
  signed __int64 v8; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_BYTE *)a1[1];
  if ( (_BYTE *)a1[2] == v2 )
  {
    v6 = &v2[-*a1];
    if ( v6 == (_BYTE *)0x7FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v7 = std::vector<char>::_Calculate_growth(a1, (unsigned __int64)(v6 + 1));
    v8 = std::_Allocate<std::_Default_allocate_traits<1>>(v7, 1uLL);
    v6[v8] = *a2;
    memmove((void *)v8, (const void *)*a1, a1[1] - *a1);
    return std::vector<unsigned char>::_Change_array((__int64)a1, v8, (__int64)(v6 + 1), v7);
  }
  else
  {
    result = *a2;
    *v2 = *a2;
    ++a1[1];
  }
  return result;
}
