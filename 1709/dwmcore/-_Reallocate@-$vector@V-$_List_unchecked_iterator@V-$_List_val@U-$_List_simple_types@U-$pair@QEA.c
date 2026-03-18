/*
 * XREFs of ?_Reallocate@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@std@@@2@@std@@IEAAX_K@Z @ 0x180161858
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801614B0 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>>>::_Reallocate(
        __int64 a1,
        unsigned __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  char *result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v4 = operator new(8 * a2)) == 0LL )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
  }
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = 0LL;
  v8 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 7LL) >> 3;
  if ( *(_QWORD *)a1 > *(_QWORD *)(a1 + 8) )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      if ( v6 )
        *v6 = *v5;
      ++v6;
      ++v5;
      ++v7;
    }
    while ( v7 != v8 );
  }
  v9 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( *(_QWORD *)a1 )
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = &v4[a2];
  result = (char *)&v4[v9];
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
