/*
 * XREFs of ??0ShadowIntermediates@CDropShadow@@QEAA@$$QEAU01@@Z @ 0x18015F474
 * Callers:
 *     ??$insert@U?$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@1@@Z @ 0x18015F2EC (--$insert@U-$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@-$_Hash@V-$_Umap_traits@.c)
 *     ??A?$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAAAEAUShadowIntermediates@CDropShadow@@AEBQEAVCVisual@@@Z @ 0x18015F5D4 (--A-$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U-$hash@PEAVCVisual@@@std@@U-$.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CDropShadow::ShadowIntermediates::ShadowIntermediates(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // r9

  *a1 = *a2;
  a1[1] = 0LL;
  v3 = a2 + 1;
  if ( a1 + 1 != v3 )
  {
    a1[1] = *v3;
    *v3 = 0LL;
  }
  v4 = a2 + 2;
  a1[2] = 0LL;
  if ( a1 + 2 != a2 + 2 )
  {
    a1[2] = *v4;
    *v4 = 0LL;
  }
  a1[3] = a2[3];
  return a1;
}
