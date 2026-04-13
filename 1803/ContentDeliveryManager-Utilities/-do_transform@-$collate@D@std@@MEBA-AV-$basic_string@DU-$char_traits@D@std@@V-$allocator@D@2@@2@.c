/*
 * XREFs of ?do_transform@?$collate@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBD0@Z @ 0x1800BF8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180038E2C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     _Strxfrm @ 0x1800C03EC (_Strxfrm.c)
 */

// Hidden C++ exception states: #wind=1
size_t *__fastcall std::collate<char>::do_transform(const _Collvec *a1, size_t *a2, const char *a3, const char *a4)
{
  size_t v8; // rax
  size_t v9; // rcx
  const _Collvec *v10; // rbp
  size_t v11; // rcx
  size_t v12; // rax
  char *v13; // rcx
  size_t v14; // rcx

  a2[3] = 15LL;
  a2[2] = 0LL;
  *(_BYTE *)a2 = 0;
  v8 = a4 - a3;
  if ( a4 != a3 )
  {
    v9 = a2[2];
    v10 = a1 + 1;
    do
    {
      if ( v8 > v9 )
      {
        std::string::append(a2, v8 - v9, 0);
      }
      else
      {
        a2[2] = v8;
        if ( a2[3] < 0x10 )
          v11 = (size_t)a2;
        else
          v11 = *a2;
        *(_BYTE *)(v11 + v8) = 0;
      }
      if ( a2[3] < 0x10 )
        v12 = (size_t)a2;
      else
        v12 = *a2;
      if ( a2[3] < 0x10 )
        v13 = (char *)a2;
      else
        v13 = (char *)*a2;
      v8 = Strxfrm(v13, (char *)(v12 + a2[2]), a3, a4, v10);
      v9 = a2[2];
    }
    while ( v8 > v9 && v8 );
  }
  if ( v8 > a2[2] )
  {
    std::string::append(a2, v8 - a2[2], 0);
  }
  else
  {
    a2[2] = v8;
    if ( a2[3] < 0x10 )
      v14 = (size_t)a2;
    else
      v14 = *a2;
    *(_BYTE *)(v14 + v8) = 0;
  }
  return a2;
}
