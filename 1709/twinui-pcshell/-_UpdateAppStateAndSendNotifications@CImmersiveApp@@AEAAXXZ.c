/*
 * XREFs of ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18005953C
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800575B0 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?Ensure@CImmersiveApp@@UEAAXXZ @ 0x180057E70 (-Ensure@CImmersiveApp@@UEAAXXZ.c)
 *     ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x180057E80 (-Unensure@CImmersiveApp@@UEAAXXZ.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180058B04 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x180058C50 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180059AC8 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C148 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058EA0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 */

void __fastcall CImmersiveApp::_UpdateAppStateAndSendNotifications(CImmersiveApp *this)
{
  __int64 v2; // rcx
  bool v3; // cl
  char v4; // cl
  int v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)this + 53);
  if ( (v2 != 0) != (*((_BYTE *)this + 536) & 1) )
  {
    if ( v2 )
    {
      *((_DWORD *)this + 134) |= 1u;
      v6 = 0LL;
      v5 = 1;
      CImmersiveApp::_ScheduleApplicationNotifications(this, (const struct APP_CHANGE_INFO *)&v5, 1uLL);
    }
    else
    {
      *((_DWORD *)this + 134) &= ~1u;
    }
  }
  v3 = *((_BYTE *)this + 448) && !*((_BYTE *)this + 449);
  if ( v3 != ((*((_DWORD *)this + 134) & 4) != 0) )
  {
    if ( v3 )
      *((_DWORD *)this + 134) |= 4u;
    else
      *((_DWORD *)this + 134) &= ~4u;
    v6 = 0LL;
    v5 = !v3 + 4;
    CImmersiveApp::_ScheduleApplicationNotifications(this, (const struct APP_CHANGE_INFO *)&v5, 1uLL);
  }
  v4 = *((_BYTE *)this + 556);
  if ( v4 != ((*((_DWORD *)this + 134) & 8) != 0) )
  {
    if ( v4 )
      *((_DWORD *)this + 134) |= 8u;
    else
      *((_DWORD *)this + 134) &= ~8u;
  }
}
