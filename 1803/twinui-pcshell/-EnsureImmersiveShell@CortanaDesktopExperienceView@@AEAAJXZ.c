/*
 * XREFs of ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800648B8
 * Callers:
 *     ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x180063774 (-GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800643E4 (-UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064498 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800646A0 (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064768 (-EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1800647E4 (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::EnsureImmersiveShell(CortanaDesktopExperienceView *this)
{
  LPVOID *v1; // rbx
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  int ppv; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (LPVOID *)((char *)this + 112);
  if ( *((_QWORD *)this + 14) )
    return 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Instance = CoCreateInstance(
               &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               v1);
  v4 = Instance;
  if ( Instance >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A9,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)Instance,
    ppv);
  return v4;
}
