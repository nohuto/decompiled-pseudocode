/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18023F480
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18023D32C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@She.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnClientWindowReadyForPresentationChanged(
        TouchKeyboardExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int ViewInfo; // eax
  std::_Ref_count_base *v9; // rbx
  std::_Ref_count_base *v10[2]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v12; // [rsp+60h] [rbp+18h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BE,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( v12 )
  {
    *(_OWORD *)v10 = 0LL;
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((__int64)this, (__int64)a2, v10);
    v6 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ViewInfo);
      if ( v10[1] )
        std::_Ref_count_base::_Decref(v10[1]);
      return v6;
    }
    v9 = v10[0];
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, _QWORD))(*(_QWORD *)a2 + 88LL))(
      a2,
      *((_QWORD *)v10[0] + 3));
    *((_QWORD *)v9 + 3) = 0LL;
    if ( v10[1] )
      std::_Ref_count_base::_Decref(v10[1]);
  }
  return 0LL;
}
