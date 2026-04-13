/*
 * XREFs of ?do_transform@?$collate@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBD0@Z @ 0x1800B2840
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180035938 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     _Strxfrm @ 0x1800B3394 (_Strxfrm.c)
 */

// Hidden C++ exception states: #wind=1
size_t *__fastcall std::collate<char>::do_transform(const _Collvec *a1, size_t *a2, const char *a3, const char *a4)
{
  size_t v7; // rax
  const _Collvec *v8; // rbp
  size_t *v9; // rcx
  size_t *v10; // rax
  char *v11; // rcx
  size_t v12; // rcx

  a2[3] = 15LL;
  a2[2] = 0LL;
  *(_BYTE *)a2 = 0;
  v7 = a4 - a3;
  if ( a4 == a3 )
  {
LABEL_17:
    if ( v7 > a2[2] )
    {
      std::string::append(a2, v7 - a2[2], 0);
      return a2;
    }
  }
  else
  {
    v8 = a1 + 1;
    while ( 1 )
    {
      if ( v7 > a2[2] )
      {
        std::string::append(a2, v7 - a2[2], 0);
      }
      else
      {
        a2[2] = v7;
        v9 = a2[3] < 0x10 ? a2 : (size_t *)*a2;
        *((_BYTE *)v9 + v7) = 0;
      }
      v10 = a2[3] < 0x10 ? a2 : (size_t *)*a2;
      v11 = a2[3] < 0x10 ? (char *)a2 : (char *)*a2;
      v7 = Strxfrm(v11, (char *)v10 + a2[2], a3, a4, v8);
      if ( v7 <= a2[2] )
        break;
      if ( !v7 )
        goto LABEL_17;
    }
  }
  a2[2] = v7;
  if ( a2[3] < 0x10 )
    v12 = (size_t)a2;
  else
    v12 = *a2;
  *(_BYTE *)(v12 + v7) = 0;
  return a2;
}
