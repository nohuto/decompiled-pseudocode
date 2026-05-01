/*
 * XREFs of ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180116F48
 * Callers:
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x180113160 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x180113BB0 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 *     ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180114630 (-SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180115B80 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180116770 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1801168A0 (-UnboostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?SetImportanceVector@ViewWrapperBase@@UEAAJI@Z @ 0x180116960 (-SetImportanceVector@ViewWrapperBase@@UEAAJI@Z.c)
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4FRAMED_VIEW_FLAGS@@@Z @ 0x180116DD0 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4FRAMED_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x180112054 (-Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ.c)
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180112BEC (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::CommitImportanceVector(ViewWrapperBase *this)
{
  __int64 v1; // rdx
  _DWORD *v3; // rcx
  ViewManagerInteropTraceLogging *v4; // rcx

  v1 = *((_QWORD *)this + 21);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 19) + 448LL) + 64LL))(
      *(_QWORD *)(*((_QWORD *)this + 19) + 448LL),
      v1,
      *((unsigned int *)this + 81));
    v3 = (_DWORD *)*((_QWORD *)ViewManagerInteropTraceLogging::Instance() + 1);
    if ( v3 )
    {
      if ( *v3 )
      {
        ViewManagerInteropTraceLogging::Instance();
        ViewManagerInteropTraceLogging::CommitImportanceVector_(
          v4,
          *((_DWORD *)this + 33),
          (ViewWrapperBase *)((char *)this + 324));
      }
    }
  }
}
