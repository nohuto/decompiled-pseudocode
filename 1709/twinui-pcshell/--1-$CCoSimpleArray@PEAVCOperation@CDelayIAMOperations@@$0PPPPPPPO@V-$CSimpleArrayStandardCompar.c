/*
 * XREFs of ??1?$CCoSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAA@XZ @ 0x180007110
 * Callers:
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$24 @ 0x1801E62CE (_CApplicationManager--_CApplicationManager_--_1_--dtor$24.c)
 *     _CApplicationManager::v_ShutdownServices_::_1_::dtor$1 @ 0x1801E6674 (_CApplicationManager--v_ShutdownServices_--_1_--dtor$1.c)
 *     _CApplicationManager::_ExecuteShellHookDelayedOperations_::_1_::dtor$0 @ 0x1801E726C (_CApplicationManager--_ExecuteShellHookDelayedOperations_--_1_--dtor$0.c)
 *     _CSimplePointerArray_IUnknown_CTContainer_PolicyRelease_IUnknown__CSimpleArrayStandardCompareHelper_IUnknown_____ptr64___::_CSimplePointerArray_IUnknown_CTContainer_PolicyRelease_IUnknown__CSimpleArrayStandardCompareHelper_IUnknown_____ptr64____::_1_::dtor$0 @ 0x1801E7534 (_CSimplePointerArray_IUnknown_CTContainer_PolicyRelease_IUnknown__CSimpleArrayStandardCompareHel.c)
 *     _RecoverApplicationWindows_::_1_::dtor$0 @ 0x1801E7850 (_RecoverApplicationWindows_--_1_--dtor$0.c)
 *     _CClassicWindowManager::EnumerateOwnershipTree_::_1_::dtor$1 @ 0x1801E7DBD (_CClassicWindowManager--EnumerateOwnershipTree_--_1_--dtor$1.c)
 *     _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$2 @ 0x1801E9D44 (_CWin32ApplicationView--EnumerateOwnershipTree_--_1_--dtor$2.c)
 *     _ApplicationViewManagement::ToolWindowGathererTemplated_ApplicationViewManagement::AssociatedWindowWin32Calls_::GatherWindows_::_1_::dtor$0 @ 0x1801E9D8C (_ApplicationViewManagement--ToolWindowGathererTemplated_ApplicationViewManagement--AssociatedWin.c)
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$1 @ 0x1801EEC13 (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoSimpleArray<CDelayIAMOperations::COperation *,4294967294,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>>::~CCoSimpleArray<CDelayIAMOperations::COperation *,4294967294,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
