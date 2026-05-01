/*
 * XREFs of ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x18019C9AC
 * Callers:
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18014A388 (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18014A854 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18019B3A4 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

__int64 __fastcall std::vector<ParsedPenWorkspaceLayout>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  char *v9; // rbp
  __int64 result; // rax

  v4 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(char **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(v4 + 32));
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v4);
        v4 += 104;
      }
      while ( v4 != v9 );
      v4 = *(char **)a1;
    }
    std::_Deallocate(v4, (*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 104LL, 0x68uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 104 * a3;
  result = a2 + 104 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
