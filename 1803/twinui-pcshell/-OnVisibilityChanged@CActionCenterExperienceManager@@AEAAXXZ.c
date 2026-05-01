/*
 * XREFs of ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18007B970
 * Callers:
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B300 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B3C0 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180154C30 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18007C0D4 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_5e56cf8d1dd2eec0a17832a5cbbc524e___ @ 0x18007DE9C (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18007DE9C.c)
 *     ?InternalRelease@?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007E1E4 (-InternalRelease@-$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@M.c)
 *     ??$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18007E220 (--$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7ff06451c04686f908764c61c63c3ce9___ @ 0x18009E1E8 (Windows--Internal--ComTaskPool--QueueTask__lambda_7ff06451c04686f908764c61c63c3ce9___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CActionCenterExperienceManager::OnVisibilityChanged(
        CActionCenterExperienceManager *this,
        const unsigned __int16 *a2)
{
  bool v3; // di
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-20h]
  _QWORD v9[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CActionCenterExperienceManager *v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF

  v8 = -2;
  v3 = *((_DWORD *)this + 40) == 2;
  v4 = CActionCenterExperienceManager::RaisePropertyChangedEvent(this, a2, v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x30B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      -2);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs>::InternalRelease(&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CVisibilityChangedEventArgs,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,>(&v12);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x30F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v8);
  }
  else
  {
    v13 = v12;
    v11 = this;
    v9[0] = &v11;
    v9[1] = &v13;
    Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_5e56cf8d1dd2eec0a17832a5cbbc524e___(
      (char *)this + 536,
      v9);
  }
  LOBYTE(v11) = v3;
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_7ff06451c04686f908764c61c63c3ce9___(v6, &v11);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x323,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      v8);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs>::InternalRelease(&v12);
}
