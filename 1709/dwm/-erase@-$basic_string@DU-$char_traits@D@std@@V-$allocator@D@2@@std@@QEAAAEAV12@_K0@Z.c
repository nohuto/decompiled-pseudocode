/*
 * XREFs of ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x14000335C
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1400030A4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAXXZ @ 0x140003090 (-_Xran@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAXXZ.c)
 *     memmove_0 @ 0x140003EED (memmove_0.c)
 */

_QWORD *__fastcall std::string::erase(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  bool v5; // cf
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax

  v3 = a1[2];
  if ( v3 < a2 )
    std::string::_Xran();
  if ( v3 - a2 > a3 )
  {
    if ( a3 )
    {
      if ( a1[3] < 0x10uLL )
        v7 = a1;
      else
        v7 = (_QWORD *)*a1;
      v8 = v3 - a3;
      if ( v8 != a2 )
        memmove_0((char *)v7 + a2, (char *)v7 + a2 + a3, v8 - a2);
      v5 = a1[3] < 0x10uLL;
      a1[2] = v8;
      if ( v5 )
        v9 = a1;
      else
        v9 = (_QWORD *)*a1;
      *((_BYTE *)v9 + v8) = 0;
    }
  }
  else
  {
    v5 = a1[3] < 0x10uLL;
    a1[2] = a2;
    if ( v5 )
      v6 = a1;
    else
      v6 = (_QWORD *)*a1;
    *((_BYTE *)v6 + a2) = 0;
  }
  return a1;
}
