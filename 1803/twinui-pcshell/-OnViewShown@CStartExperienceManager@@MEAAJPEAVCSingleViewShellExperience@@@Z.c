/*
 * XREFs of ?OnViewShown@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180077630
 * Callers:
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A07C (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_fe210b1289c3c46e19802a64f8cd29ca___ @ 0x180075EE0 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_180075EE0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewShown(RTL_SRWLOCK *this, struct CSingleViewShellExperience *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = this - 11;
  *(_QWORD *)v5 = &v7;
  *(_QWORD *)&v5[2] = &v8;
  v2 = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_fe210b1289c3c46e19802a64f8cd29ca___(
         this + 1,
         (__int128 *)v5);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FF,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v2,
      v5[0]);
  return v3;
}
