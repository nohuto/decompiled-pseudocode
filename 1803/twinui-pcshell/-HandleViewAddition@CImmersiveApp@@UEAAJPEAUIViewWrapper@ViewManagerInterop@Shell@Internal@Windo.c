/*
 * XREFs of ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18012EC40
 * Callers:
 *     <none>
 * Callees:
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x18004817C (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18004829C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x1800F1D88 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 */

__int64 __fastcall CImmersiveApp::HandleViewAddition(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        unsigned int a3,
        struct ITaskWindow *a4)
{
  RTL_SRWLOCK *v5; // rbx
  int v6; // edi
  int v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  bool v10; // [rsp+50h] [rbp+8h] BYREF

  v5 = (RTL_SRWLOCK *)(a1 - 112);
  v6 = CImmersiveApp::_ProcessNewView(a1 - 112, a2, 0, a3, a4, &v10);
  if ( v6 >= 0 && v10 )
  {
    CImmersiveApp::_ClearForegroundBoostHintedProcess(&v5->Ptr);
    if ( (*(_BYTE *)(a1 + 424) & 2) != 0 )
      CImmersiveApp::_SetApplicationForegroundPriority((__int64)v5, 0);
    v9 = 0LL;
    v8 = 11;
    CImmersiveApp::_ScheduleApplicationNotifications(v5, (const struct APP_CHANGE_INFO *const)&v8, 1uLL);
  }
  return (unsigned int)v6;
}
