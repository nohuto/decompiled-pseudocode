/*
 * XREFs of ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedPenWorkspaceLayout@@@1@QEAUParsedPenWorkspaceLayout@@$$QEAU3@@Z @ 0x18014A0C8
 * Callers:
 *     ??$_Uninitialized_move_al_unchecked@PEAUParsedTaskbarLayout@@PEAU1@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@PEAU1@00AEAV?$allocator@UParsedTaskbarLayout@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18014A044 (--$_Uninitialized_move_al_unchecked@PEAUParsedTaskbarLayout@@PEAU1@V-$allocator@UParsedTaskbarLa.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18014A388 (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 * Callees:
 *     ??0SelectionData@StartLayout@@QEAA@AEBU01@@Z @ 0x18014A6DC (--0SelectionData@StartLayout@@QEAA@AEBU01@@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18019B3A4 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Default_allocator_traits<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  v5 = *a3;
  v6 = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[3] = 0LL;
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(a2);
  *a2 = v5;
  a2[1] = v6;
  a2[3] = v6;
  return StartLayout::SelectionData::SelectionData(
           (StartLayout::SelectionData *)(a2 + 4),
           (const struct StartLayout::SelectionData *)(a3 + 4));
}
