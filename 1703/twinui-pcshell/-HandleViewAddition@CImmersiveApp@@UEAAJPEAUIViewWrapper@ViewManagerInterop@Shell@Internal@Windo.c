/*
 * XREFs of ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180054A10
 * Callers:
 *     <none>
 * Callees:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18005664C (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005681C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x1800575B4 (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180057844 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::HandleViewAddition(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  CImmersiveApp *v5; // rbx
  int v6; // edi
  int v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  char v10; // [rsp+50h] [rbp+8h] BYREF

  v5 = (CImmersiveApp *)(a1 - 88);
  v6 = CImmersiveApp::_ProcessNewView(a1 - 88, a2, 0LL, a3, a4, &v10);
  if ( v6 >= 0 && v10 )
  {
    CImmersiveApp::_ClearForegroundBoostHintedProcess(v5);
    if ( (*(_DWORD *)(a1 + 408) & 2) != 0 )
      CImmersiveApp::_SetApplicationForegroundPriority(v5, 0LL);
    v9 = 0LL;
    v8 = 11;
    CImmersiveApp::_ScheduleApplicationNotifications(v5, (const struct APP_CHANGE_INFO *const)&v8, 1uLL);
  }
  return (unsigned int)v6;
}
