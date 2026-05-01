/*
 * XREFs of ?OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800686F0
 * Callers:
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006A7C0 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShe_ea_180068EF0.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_3fcbdf772bf6d08dd540030a55dddaea___ @ 0x1800691DC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Ex.c)
 *     ??$MakeAndInitialize@VShellExperienceViewEventArg@?1??_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAU6@AEAPEAU789Windows@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAUHSTRING__@@AEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18006933C (--$MakeAndInitialize@VShellExperienceViewEventArg@-1--_FireViewEvent@ShellExperienceView@Cortana.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::OnEventQueued(
        TwinUI::Cortana::ShellExperienceView *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  struct Windows::Foundation::Collections::IPropertySet *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  void *v7; // rcx
  void (*v8)(void); // rax
  __int64 v10; // rdx
  _QWORD v11[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v13; // [rsp+50h] [rbp+20h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v14; // [rsp+60h] [rbp+30h] BYREF
  HSTRING v15; // [rsp+68h] [rbp+38h] BYREF

  v13 = 0LL;
  v4 = (TwinUI::Cortana::ShellExperienceView *)((char *)this - 40);
  v15 = a3;
  v14 = a4;
  v5 = Windows::Internal::Shell::Experience::UIShellExperienceViewEventArg::Z::MakeAndInitialize<`TwinUI::Cortana::ShellExperienceView::_FireViewEvent'::`2'::ShellExperienceViewEventArg,AJPEAUHSTRING__ &,Windows::Foundation::Collections::IPropertySet *>(
         &v13,
         &v15,
         &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 367LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v5,
      v11[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    return v6;
  }
  v15 = (HSTRING)v13;
  v14 = v4;
  v11[0] = &v14;
  v11[1] = &v15;
  v5 = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_3fcbdf772bf6d08dd540030a55dddaea___(
         (char *)v4 + 272,
         v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 368LL;
    goto LABEL_11;
  }
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v7);
    else
      v8();
  }
  return 0;
}
