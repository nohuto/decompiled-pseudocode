/*
 * XREFs of ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1800DBB20
 * Callers:
 *     ?BindSizeToRectangle@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@@Z @ 0x1800D7DC0 (-BindSizeToRectangle@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@@Z.c)
 *     ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@@Z @ 0x1800D8170 (-ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@@Z.c)
 *     ?IsViewFullScreen@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800D8DD0 (-IsViewFullScreen@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1800D8EA0 (-EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1800D8FC0 (-ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1800D94B0 (-GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@W.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA250 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA4AC (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA590 (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1800DA674 (-_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VI.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA948 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB438 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB6D4 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB8B4 (-_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z @ 0x1800DBDD8 (-_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall HolographicPositioner::_FindViewHostItem(RTL_SRWLOCK *a1, _QWORD *a2, struct IApplicationView *a3)
{
  int ApplicationViewUniqueId; // eax
  _QWORD *Ptr; // rbx
  _QWORD *v7; // rsi
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  PSRWLOCK SRWLock[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  v14 = 0;
  ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId((HolographicPositioner *)a1, a3, &v14);
  if ( ApplicationViewUniqueId < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5C0,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)ApplicationViewUniqueId);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 32, SRWLock);
  Ptr = a1[30].Ptr;
  v7 = a1[29].Ptr;
  v8 = v14;
  while ( v7 != Ptr )
  {
    v15 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v7 + 64LL))(*v7, &v15);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5C8,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
    if ( v8 == v15 )
      break;
    ++v7;
  }
  if ( v7 == a1[30].Ptr )
  {
    *a2 = 0LL;
  }
  else
  {
    v10 = *v7;
    *a2 = *v7;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockShared(SRWLock[0]);
  return a2;
}
