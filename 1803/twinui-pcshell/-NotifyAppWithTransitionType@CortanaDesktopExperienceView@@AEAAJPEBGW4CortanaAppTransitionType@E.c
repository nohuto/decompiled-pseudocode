/*
 * XREFs of ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180061BE0
 * Callers:
 *     ?Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180063600 (-Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experienc.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180065EE0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?PrepareForAppTransition@CortanaDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800660F0 (-PrepareForAppTransition@CortanaDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experienc.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180061964 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18006CB74 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18006CC80 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaDesktopExperienceView::NotifyAppWithTransitionType(
        CortanaDesktopExperienceView *a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4)
{
  HRESULT v6; // eax
  int v7; // ebx
  __int64 v8; // rax
  struct Windows::Foundation::Collections::IPropertySet *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  struct Windows::Foundation::Collections::IPropertySet *v14; // rcx
  __int64 v16; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+20h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v18; // [rsp+28h] [rbp-48h] BYREF
  const WCHAR *v19[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v19[1] = (const WCHAR *)-2LL;
  v19[0] = a2;
  v17 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    RaiseException(v6, 1u, 0, 0LL);
    JUMPOUT(0x1800D5C54LL);
  }
  v17 = 0LL;
  v7 = RoActivateInstance(string, &v18);
  if ( v7 < 0 )
    goto LABEL_26;
  v8 = *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1
     - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
  if ( *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
    v8 = *(_QWORD *)GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data4
       - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  v9 = v18;
  if ( v8 )
  {
    v7 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v18)(
           v18,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v17);
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18 + 16LL))(v18);
    v9 = v17;
  }
  else
  {
    v17 = v18;
  }
  if ( v7 < 0 )
  {
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA94,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v7,
      (int)v17);
    goto LABEL_17;
  }
  v18 = v9;
  if ( v9 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v9 + 8LL))(v9);
  if ( a4
    && (v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&hstringHeader,
                (const WCHAR **)&off_18031D758),
        v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
                *(HSTRING *)(v10 + 24)),
        v7 = v11,
        v11 < 0) )
  {
    v16 = 2715LL;
  }
  else
  {
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)off_18031D738);
    v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
            *(HSTRING *)(v12 + 24));
    v7 = v11;
    if ( v11 < 0 )
    {
      v16 = 2720LL;
    }
    else
    {
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, v19);
      v11 = CortanaDesktopExperienceView::NotifyView(a1, *(HSTRING *)(v13 + 24), v17);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v7 = 0;
        goto LABEL_15;
      }
      v16 = 2722LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v11,
    (int)v17);
LABEL_15:
  if ( v18 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_17:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v7;
}
