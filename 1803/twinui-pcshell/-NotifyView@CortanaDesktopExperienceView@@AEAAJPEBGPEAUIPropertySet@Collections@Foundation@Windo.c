/*
 * XREFs of ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800619A8
 * Callers:
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064984 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180065BE0 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180065C7C (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnUIATreesUnlinked@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180066230 (-OnUIATreesUnlinked@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18018618C (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801862DC (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1801864F0 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x180186680 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?TryInvokeBack@CortanaDesktopExperienceView@@EEAAJXZ @ 0x180188200 (-TryInvokeBack@CortanaDesktopExperienceView@@EEAAJXZ.c)
 * Callees:
 *     ?NotifyView@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180068470 (-NotifyView@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::NotifyView(
        CortanaDesktopExperienceView *this,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  unsigned int v9; // eax
  UINT32 v10; // edx
  HRESULT v11; // eax
  TwinUI::Cortana::ShellExperienceView *v12; // rcx
  int (*v13)(TwinUI::Cortana::ShellExperienceView *__hidden, HSTRING, struct Windows::Foundation::Collections::IPropertySet *); // rax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-48h]
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v16 = -2;
  string = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v7 = -1;
  if ( v6 > 0xFFFFFFFF )
  {
    RaiseException(v6 > 0xFFFFFFFF ? 0x80070216 : 0, 1u, 0, 0LL);
    JUMPOUT(0x1800D5BA8LL);
  }
  v8 = v6;
  v9 = v6 + 1;
  if ( v8 + 1 >= v8 )
    v7 = v8 + 1;
  if ( v9 < v8 )
  {
    RaiseException(v9 < v8 ? 0x80070216 : 0, 1u, 0, 0LL);
    JUMPOUT(0x1800D5BB9LL);
  }
  v10 = v7 - 1;
  if ( v8 < v7 )
    v10 = v8;
  v11 = WindowsCreateStringReference(a2, v10, &hstringHeader, &string);
  if ( v11 < 0 )
  {
    RaiseException(v11, 1u, 0, 0LL);
  }
  else
  {
    v12 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 18);
    if ( !v12
      || ((v13 = *(int (**)(TwinUI::Cortana::ShellExperienceView *__hidden, HSTRING, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v12 + 120LL),
           v13 != TwinUI::Cortana::ShellExperienceView::NotifyView)
        ? (v14 = ((__int64 (__fastcall *)(TwinUI::Cortana::ShellExperienceView *, HSTRING, struct Windows::Foundation::Collections::IPropertySet *))v13)(
                   v12,
                   string,
                   a3))
        : (v14 = TwinUI::Cortana::ShellExperienceView::NotifyView(v12, string, a3)),
          LODWORD(a3) = v14,
          v14 >= 0) )
    {
      LODWORD(a3) = 0;
      goto LABEL_15;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB44,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)a3,
    -2);
LABEL_15:
  if ( (int)a3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)a3,
      v16);
  return (unsigned int)a3;
}
