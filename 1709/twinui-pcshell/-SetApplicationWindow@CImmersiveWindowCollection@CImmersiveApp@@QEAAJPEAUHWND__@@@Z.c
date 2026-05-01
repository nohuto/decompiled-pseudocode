/*
 * XREFs of ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18005AFC4
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180055070 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x1800588F4 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180058B04 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x18005B05C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 * Callees:
 *     WPP_SF_Sdqd @ 0x180052400 (WPP_SF_Sdqd.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x18005B664 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005C3BC (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18005C448 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r9
  char v10[4]; // [rsp+20h] [rbp-28h]
  char v11[4]; // [rsp+30h] [rbp-18h]
  unsigned __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  CImmersiveApp::CImmersiveWindowCollection::_FindWindow(this, a2, &v12);
  v5 = v12;
  v6 = 0;
  if ( v12 )
  {
    v7 = CImmersiveApp::CImmersiveWindowCollection::_SetApplicationWindow(this, v12);
    v6 = v7;
    if ( *((_QWORD *)this + 15) )
    {
      if ( v7 >= 0 )
        CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow(this);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = *((_QWORD *)this + 18);
    *(_DWORD *)v11 = v6;
    *(_DWORD *)v10 = *(_DWORD *)(v8 + 552);
    WPP_SF_Sdqd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v5,
      v4,
      *(const wchar_t **)(v8 + 544),
      *(_DWORD *)v10,
      a2,
      *(_DWORD *)v11);
  }
  return v6;
}
