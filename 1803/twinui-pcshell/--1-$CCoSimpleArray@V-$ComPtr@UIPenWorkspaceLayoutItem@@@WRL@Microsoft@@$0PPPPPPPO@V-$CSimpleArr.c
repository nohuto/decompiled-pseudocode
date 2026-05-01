/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x18019A4BC
 * Callers:
 *     _TaskbarLayoutPolicyManager::GetTaskbarLayout_::_1_::dtor$1 @ 0x1801477A6 (_TaskbarLayoutPolicyManager--GetTaskbarLayout_--_1_--dtor$1.c)
 *     _TaskbarLayoutPolicyManager::PopulateAndSetPinned_::_1_::dtor$1 @ 0x180147FB8 (_TaskbarLayoutPolicyManager--PopulateAndSetPinned_--_1_--dtor$1.c)
 *     _std::_Default_allocator_traits_std::allocator_ParsedPenWorkspaceLayout___::construct_ParsedPenWorkspaceLayout_ParsedPenWorkspaceLayout__::_1_::dtor$2 @ 0x18014A15F (_std--_Default_allocator_traits_std--allocator_ParsedPenWorkspaceLayout___--constru_ea_18014A15F.c)
 *     _PWSLayoutPolicyManager::GetPenWorkspaceLayout_::_1_::dtor$0 @ 0x18019AC9D (_PWSLayoutPolicyManager--GetPenWorkspaceLayout_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::Populate_::_1_::dtor$1 @ 0x18019B031 (_PWSLayoutPolicyManager--Populate_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>(
        __int64 a1)
{
  return CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(a1);
}
