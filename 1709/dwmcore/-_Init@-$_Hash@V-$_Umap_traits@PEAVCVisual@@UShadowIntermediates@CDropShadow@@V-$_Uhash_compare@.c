/*
 * XREFs of ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801614B0
 * Callers:
 *     ??$_Insert@AEAU?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@1@@Z @ 0x18015F138 (--$_Insert@AEAU-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$_List_unchecked_it.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x18015F3A0 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x18015F4C0 (--1CDropShadow@@UEAA@XZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?_Insert_n@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@std@@@2@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@std@@@std@@@2@_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x180161548 (-_Insert_n@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVC.c)
 *     ?_Reallocate@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@std@@@2@@std@@IEAAX_K@Z @ 0x180161858 (-_Reallocate@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEA.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Init(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v2; // rbx
  unsigned __int64 v4; // rdi
  __int64 v6; // r8
  __int64 result; // rax
  const void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  char v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1 + 2;
  v4 = 2 * a2;
  if ( (a1[4] - a1[2]) >> 3 < (unsigned __int64)(2 * a2) )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>>>::_Reallocate(
      a1 + 2,
      v4);
  }
  v6 = *v2;
  v9 = *a1;
  v2[1] = v6;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>>>::_Insert_n(
    (_DWORD)v2,
    (unsigned int)&v10,
    v6,
    v4,
    (__int64)&v9);
  result = a2 - 1;
  a1[5] = a2 - 1;
  a1[6] = a2;
  return result;
}
