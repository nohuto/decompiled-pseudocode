/*
 * XREFs of ?_Freenode@?$_List_buy@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@PEAX@2@@Z @ 0x18018AE20
 * Callers:
 *     ?clear@?$list@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXXZ @ 0x18018AE98 (-clear@-$list@U-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 *     ?erase@?$list@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x18018AEDC (-erase@-$list@U-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 * Callees:
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x180188E14 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

void __fastcall std::_List_buy<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::_Freenode(
        __int64 a1,
        char *a2)
{
  CDropShadow::ShadowIntermediates::~ShadowIntermediates((CDropShadow::ShadowIntermediates *)(a2 + 24));
  std::_Deallocate(a2, 1uLL, 0x40uLL);
}
