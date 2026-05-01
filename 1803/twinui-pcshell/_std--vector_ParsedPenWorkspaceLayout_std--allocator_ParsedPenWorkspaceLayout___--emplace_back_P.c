/*
 * XREFs of _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::catch$67 @ 0x18014A4B6
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18014A854 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18019B3A4 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

void __fastcall __noreturn std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::catch_67(
        __int64 a1,
        __int64 a2)
{
  char *v3; // rdi
  char *v4; // rbx

  v3 = *(char **)(a2 + 128);
  if ( *(_BYTE *)(a2 + 112) )
  {
    v4 = &v3[104 * *(_QWORD *)(a2 + 48)];
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(v4 + 32));
    CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(v4);
  }
  std::_Deallocate(v3, *(_QWORD *)(a2 + 136), 0x68uLL);
  throw;
}
