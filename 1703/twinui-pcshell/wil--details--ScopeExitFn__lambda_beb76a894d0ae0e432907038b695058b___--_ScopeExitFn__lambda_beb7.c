/*
 * XREFs of wil::details::ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___::_ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___ @ 0x1800436FC
 * Callers:
 *     ?DragComplete@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z @ 0x18003E970 (-DragComplete@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z.c)
 *     _CAppViewManager::DragComplete_::_1_::dtor$2 @ 0x180199923 (_CAppViewManager--DragComplete_--_1_--dtor$2.c)
 * Callees:
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x18003F41C (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180041B4C (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___::_ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rbx

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    if ( (int)CAppViewManager::_ObliterateOperation(*(CAppViewManager **)a1, *(const struct _GUID **)(a1 + 8)) < 0 )
    {
      if ( **(_QWORD **)(a1 + 16) )
      {
        v2 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CAppViewManager::_TransferAllWindowsToNextGlomWorker(*(_QWORD *)a1, **(_QWORD **)(a1 + 16), 0LL, -3);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 112LL) + 168LL))(
          *(_QWORD *)(*(_QWORD *)a1 + 112LL),
          **(_QWORD **)(a1 + 16));
        if ( v2 )
          ReleaseSRWLockExclusive(v2);
      }
    }
  }
}
