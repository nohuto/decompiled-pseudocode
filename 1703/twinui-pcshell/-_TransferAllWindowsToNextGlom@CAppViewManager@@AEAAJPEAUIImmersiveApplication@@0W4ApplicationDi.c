/*
 * XREFs of ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180041A90
 * Callers:
 *     ?OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@@Z @ 0x18003E160 (-OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_R.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x180042970 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9__&___ptr64_1__1_::Invoke @ 0x1800449E0 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9__-.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180041B4C (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlom(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        unsigned int a4)
{
  __int64 (__fastcall **v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  int GlomWorker; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  v8 = *a2;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
  GlomWorker = (*v8)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v9);
  if ( GlomWorker >= 0 )
    GlomWorker = CAppViewManager::_TransferAllWindowsToNextGlomWorker(a1, v13, a3, a4, -2LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)GlomWorker;
}
