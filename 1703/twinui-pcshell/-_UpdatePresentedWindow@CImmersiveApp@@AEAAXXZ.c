/*
 * XREFs of ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1800570C8
 * Callers:
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0004@@@Z @ 0x180052630 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0004@@@Z.c)
 *     ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x180054E00 (-HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ @ 0x180054E30 (-HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180055340 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     WPP_SF_Sd @ 0x18004FC08 (WPP_SF_Sd.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180056304 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180058678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180058B34 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180059010 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::_UpdatePresentedWindow(CImmersiveApp *this)
{
  HWND v1; // rsi
  CImmersiveApp::CImmersiveWindowCollection *v3; // rdi
  __int64 v4; // r8
  bool v5; // dl
  char v6[4]; // [rsp+20h] [rbp-18h]
  char v7[4]; // [rsp+20h] [rbp-18h]

  v1 = (HWND)*((_QWORD *)this + 43);
  if ( v1
    && (v3 = (CImmersiveApp *)((char *)this + 224), !*((_DWORD *)this + 105))
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 240LL))(*((_QWORD *)this + 42)) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      *(_DWORD *)v6 = *((_DWORD *)this + 128);
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        &WPP_62695e9b884c3ff85ccc232e92679a04_Traceguids,
        *((const wchar_t **)this + 63),
        *(_DWORD *)v6);
    }
    CImmersiveApp::_SetApplicationWindowSynch((__int64)this, v1, v4, *((_DWORD *)this + 88));
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(v3);
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 224))
         && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp *)((char *)this + 224)) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      *(_DWORD *)v7 = *((_DWORD *)this + 128);
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        &WPP_62695e9b884c3ff85ccc232e92679a04_Traceguids,
        *((const wchar_t **)this + 63),
        *(_DWORD *)v7);
    }
    CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual((CImmersiveApp *)((char *)this + 224), v5);
  }
}
