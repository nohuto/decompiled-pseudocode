/*
 * XREFs of ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18008F0E4
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008D680 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800F0570 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x18008F52C (-_Change_array@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@.c)
 *     ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Wrap_alloc@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAAXPEAUParsedPenWorkspaceLayout@@$$QEAU2@@Z @ 0x18008F66C (--$construct@UParsedPenWorkspaceLayout@@U1@@-$_Wrap_alloc@V-$allocator@UParsedPenWorkspaceLayout.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUParsedTaskbarLayout@@PEAU1@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18008F870 (--$_Uninitialized_move_al_unchecked@PEAUParsedTaskbarLayout@@PEAU1@V-$allocator@UParsedTaskbarLa.c)
 */

__int64 __fastcall std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // [rsp+80h] [rbp+18h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (v5 - *a1) / 104;
    if ( v7 == 0x276276276276276LL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v8 = (v4 - *a1) / 104;
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
    v11 = std::_Allocate(v10, 0x68uLL);
    v13 = v11;
    v17 = v11;
    try
    {
      std::_Wrap_alloc<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
        v12,
        &v11[13 * v7],
        a2);
      std::_Uninitialized_move_al_unchecked<ParsedTaskbarLayout *,ParsedTaskbarLayout *,std::allocator<ParsedTaskbarLayout>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v14 = std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v17[13 * v7]);
      std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::destroy<ParsedTaskbarLayout>(v15, v14);
      std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::deallocate(v16, v17, v10);
      throw;
    }
    return std::vector<ParsedPenWorkspaceLayout>::_Change_array(a1, v13, v7 + 1, v10);
  }
  else
  {
    result = std::_Wrap_alloc<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
               v5,
               v5,
               a2);
    a1[1] += 104LL;
  }
  return result;
}
