/*
 * XREFs of ??$insert@U?$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@1@@Z @ 0x18015F2EC
 * Callers:
 *     ??A?$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAAAEAUShadowIntermediates@CDropShadow@@AEBQEAVCVisual@@@Z @ 0x18015F5D4 (--A-$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U-$hash@PEAVCVisual@@@std@@U-$.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??$_Insert@AEAU?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@1@@Z @ 0x18015F138 (--$_Insert@AEAU-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$_List_unchecked_it.c)
 *     ??0ShadowIntermediates@CDropShadow@@QEAA@$$QEAU01@@Z @ 0x18015F474 (--0ShadowIntermediates@CDropShadow@@QEAA@$$QEAU01@@Z.c)
 *     ?_Buynode0@?$_List_alloc@$0A@U?$_List_base_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@PEAX@2@PEAU32@0@Z @ 0x1801613FC (-_Buynode0@-$_List_alloc@$0A@U-$_List_base_types@U-$pair@QEAVCVisual@@UShadowIntermediates@CDrop.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::insert<std::pair<CVisual *,CDropShadow::ShadowIntermediates>>(
        __int64 **a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 *v9; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = **a1;
  v7 = std::_List_alloc<0,std::_List_base_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>::_Buynode0(
         a1,
         v6,
         *(_QWORD *)(v6 + 8));
  v8 = v7;
  if ( v7 != -16 )
  {
    *(_QWORD *)(v7 + 16) = *a3;
    CDropShadow::ShadowIntermediates::ShadowIntermediates(v7 + 24, a3 + 1);
  }
  v9 = a1[1];
  if ( v9 == (__int64 *)0x492492492492491LL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  a1[1] = (__int64 *)((char *)v9 + 1);
  *(_QWORD *)(v6 + 8) = v8;
  **(_QWORD **)(v8 + 8) = v8;
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Insert<std::pair<CVisual * const,CDropShadow::ShadowIntermediates> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>(
    a1,
    a2,
    (_QWORD *)(**a1 + 16),
    (__int64 *)**a1);
  return a2;
}
