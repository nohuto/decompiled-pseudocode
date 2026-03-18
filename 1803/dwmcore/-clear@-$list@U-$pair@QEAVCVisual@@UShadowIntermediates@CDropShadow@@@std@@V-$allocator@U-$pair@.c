/*
 * XREFs of ?clear@?$list@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXXZ @ 0x18018AE98
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x180188D40 (--1CDropShadow@@UEAA@XZ.c)
 * Callees:
 *     ?_Freenode@?$_List_buy@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@PEAX@2@@Z @ 0x18018AE20 (-_Freenode@-$_List_buy@U-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$allocator.c)
 */

void __fastcall std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::clear(__int64 a1)
{
  char *v2; // rdx
  char *v3; // rbx

  v2 = **(char ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(char **)a1 )
  {
    do
    {
      v3 = *(char **)v2;
      std::_List_buy<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::_Freenode(a1, v2);
      v2 = v3;
    }
    while ( v3 != *(char **)a1 );
  }
}
