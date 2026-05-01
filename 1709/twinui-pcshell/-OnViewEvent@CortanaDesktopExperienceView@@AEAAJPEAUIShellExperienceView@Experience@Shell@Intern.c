/*
 * XREFs of ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1800D5EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800D5FB4 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::OnViewEvent(
        CortanaDesktopExperienceView *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  struct Windows::Foundation::Collections::IPropertySet *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Foundation::Collections::IPropertySet *v11; // [rsp+50h] [rbp+18h] BYREF
  HSTRING string; // [rsp+58h] [rbp+20h] BYREF

  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &string);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v11 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)a3 + 56LL))(
           a3,
           &v11);
    v6 = v7;
    if ( v7 >= 0 )
      v6 = CortanaDesktopExperienceView::OnViewEventQueued(this, string, v11);
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3C5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v7);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3C3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
  }
  WindowsDeleteString(string);
  return v6;
}
