/*
 * XREFs of ?_Buynode0@?$_List_alloc@$0A@U?$_List_base_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@PEAX@2@PEAU32@0@Z @ 0x1801613FC
 * Callers:
 *     ??$insert@U?$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@1@@Z @ 0x18015F2EC (--$insert@U-$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@-$_Hash@V-$_Umap_traits@.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x18015F3A0 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::_List_alloc<0,std::_List_base_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = operator new(0x38uLL);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  if ( result != (_QWORD *)-8LL )
    result[1] = a3;
  return result;
}
