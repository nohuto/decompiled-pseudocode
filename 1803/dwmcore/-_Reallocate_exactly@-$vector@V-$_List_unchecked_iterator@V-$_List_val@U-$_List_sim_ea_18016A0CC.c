/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18016A0CC
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x18016BDE4 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

char *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>::_Reallocate_exactly(
        char **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  char *v6; // rcx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  char *result; // rax

  v4 = (a1[1] - *a1) >> 3;
  v5 = std::_Allocate<std::_Default_allocate_traits<1>>(a2, 8uLL);
  v6 = *a1;
  v7 = v5;
  v8 = (_QWORD *)v5;
  v9 = 0LL;
  v10 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
  if ( *a1 > a1[1] )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      ++v9;
      *v8++ = *(_QWORD *)v6;
      v6 += 8;
    }
    while ( v9 != v10 );
    v6 = *a1;
  }
  if ( v6 )
    std::_Deallocate(v6, (a1[2] - v6) >> 3, 8uLL);
  *a1 = (char *)v7;
  a1[1] = (char *)(v7 + 8 * v4);
  result = (char *)(v7 + 8 * a2);
  a1[2] = result;
  return result;
}
