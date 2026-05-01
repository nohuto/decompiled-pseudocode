/*
 * XREFs of ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18014A388
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18014B2D0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18019BEF0 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUParsedTaskbarLayout@@PEAU1@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@PEAU1@00AEAV?$allocator@UParsedTaskbarLayout@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18014A044 (--$_Uninitialized_move_al_unchecked@PEAUParsedTaskbarLayout@@PEAU1@V-$allocator@UParsedTaskbarLa.c)
 *     ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedPenWorkspaceLayout@@@1@QEAUParsedPenWorkspaceLayout@@$$QEAU3@@Z @ 0x18014A0C8 (--$construct@UParsedPenWorkspaceLayout@@U1@@-$_Default_allocator_traits@V-$allocator@UParsedPenW.c)
 *     ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x18019C9AC (-_Change_array@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@.c)
 */

__int64 __fastcall std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  char *v14; // rbx
  char *v15; // [rsp+80h] [rbp+18h]
  unsigned __int64 v16; // [rsp+88h] [rbp+20h]

  v4 = (_QWORD *)a1[2];
  v5 = (_QWORD *)a1[1];
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *a1) / 104;
    if ( v7 == 0x276276276276276LL )
      std::_Xlength_error("vector<T> too long");
    v8 = ((__int64)v4 - *a1) / 104;
    v9 = v8 >> 1;
    if ( v8 <= 0x276276276276276LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v16 = v10;
    v11 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 0x68uLL);
    v13 = (__int64)v11;
    v15 = v11;
    try
    {
      std::_Default_allocator_traits<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
        v12,
        &v11[104 * v7],
        a2);
      std::_Uninitialized_move_al_unchecked<ParsedTaskbarLayout *,ParsedTaskbarLayout *,std::allocator<ParsedTaskbarLayout>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v14 = &v15[104 * v7];
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(v14 + 32));
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(v14);
      std::_Deallocate(v15, v16, 0x68uLL);
      throw;
    }
    return std::vector<ParsedPenWorkspaceLayout>::_Change_array(a1, v13, v7 + 1, v10);
  }
  else
  {
    result = std::_Default_allocator_traits<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
               (__int64)v5,
               v5,
               a2);
    a1[1] += 104LL;
  }
  return result;
}
