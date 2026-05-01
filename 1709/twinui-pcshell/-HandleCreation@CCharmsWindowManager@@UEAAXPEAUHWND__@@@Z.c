/*
 * XREFs of ?HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18003C740
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionNewCreatedApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Z @ 0x180018180 (-PositionNewCreatedApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180064ED4 (-s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal.c)
 *     ?GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x1801C0E94 (-GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCharmsWindowManager::HandleCreation(
        CCharmsWindowManager *this,
        CallerIdentity *a2,
        enum PROCESS_UICONTEXT *a3)
{
  __int64 v5; // rcx
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF

  if ( (int)CallerIdentity::GetProcessTypeFromWindow(a2, (HWND)&v6, a3) >= 0 && (_DWORD)v6 == 2 )
  {
    v6 = 0LL;
    IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v6);
    if ( (int)CTaskWindow::s_CreateInstance(a2, 0LL, 2LL) >= 0 )
      CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewCreatedApp((_QWORD *)this + 2, &v6);
    v5 = v6;
    if ( v6 )
    {
      v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
}
