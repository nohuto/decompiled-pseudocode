/*
 * XREFs of ?OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B6F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x1800B9B2C (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 *     ?ReleaseResources@CStartSizingFrame@@QEAAXXZ @ 0x1800CFFDC (-ReleaseResources@CStartSizingFrame@@QEAAXXZ.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewDestroyed(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CStartSizingFrame::ReleaseResources((CStartExperienceManager *)((char *)this + 560));
  v3 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
         (char *)this + 56,
         (char *)this - 96);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
