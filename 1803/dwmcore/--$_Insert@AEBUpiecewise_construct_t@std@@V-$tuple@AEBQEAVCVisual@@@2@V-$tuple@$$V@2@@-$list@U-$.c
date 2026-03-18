/*
 * XREFs of ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCVisual@@@2@V?$tuple@$$V@2@@?$list@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCVisual@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180188AC8
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x180188B7C (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShado.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@PEAX@2@PEAU32@0@Z @ 0x18018AD6C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAVCVisual@@UShadowIntermediates@CDropShad.c)
 */

__int64 __fastcall std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::_Insert<std::piecewise_construct_t const &,std::tuple<CVisual * const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  _QWORD *v4; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD **)(a2 + 8);
  v8 = (_QWORD *)std::_List_alloc<std::_List_base_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>::_Buynode0(
                   a1,
                   a2,
                   v4);
  v8[2] = **a4;
  memset_0(v8 + 3, 0, 0x28uLL);
  v8[3] = 0LL;
  v8[4] = 0LL;
  v8[5] = 0LL;
  v8[6] = 0LL;
  v8[7] = 0LL;
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 == 0x3FFFFFFFFFFFFFELL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  result = v9 + 1;
  *(_QWORD *)(a1 + 8) = v9 + 1;
  *(_QWORD *)(a2 + 8) = v8;
  *v4 = v8;
  return result;
}
