/*
 * XREFs of ?do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z @ 0x1800ACD80
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x180081F14 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     _Wcsxfrm @ 0x1800B3268 (_Wcsxfrm.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::collate<wchar_t>::do_transform(
        const _Collvec *a1,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  size_t v7; // rax
  const _Collvec *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  wchar_t *v11; // rcx
  _WORD *v12; // rcx

  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  v7 = a4 - a3;
  if ( v7 )
  {
    v8 = a1 + 1;
    while ( 1 )
    {
      if ( v7 > *(_QWORD *)(a2 + 16) )
      {
        std::wstring::append((_WORD **)a2, v7 - *(_QWORD *)(a2 + 16), 0);
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v7;
        v9 = *(_QWORD *)(a2 + 24) < 8uLL ? a2 : *(_QWORD *)a2;
        *(_WORD *)(v9 + 2 * v7) = 0;
      }
      v10 = *(_QWORD *)(a2 + 24) < 8uLL ? a2 : *(_QWORD *)a2;
      v11 = *(_QWORD *)(a2 + 24) < 8uLL ? (wchar_t *)a2 : *(wchar_t **)a2;
      v7 = Wcsxfrm(v11, (wchar_t *)(v10 + 2LL * *(_QWORD *)(a2 + 16)), a3, a4, v8);
      if ( v7 <= *(_QWORD *)(a2 + 16) )
        break;
      if ( !v7 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    if ( v7 > *(_QWORD *)(a2 + 16) )
    {
      std::wstring::append((_WORD **)a2, v7 - *(_QWORD *)(a2 + 16), 0);
      return a2;
    }
  }
  *(_QWORD *)(a2 + 16) = v7;
  if ( *(_QWORD *)(a2 + 24) < 8uLL )
    v12 = (_WORD *)a2;
  else
    v12 = *(_WORD **)a2;
  v12[v7] = 0;
  return a2;
}
