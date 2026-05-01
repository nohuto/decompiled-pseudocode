/*
 * XREFs of ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180180944
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180091414 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A1A68 (-RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A4714 (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A6314 (-RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A6F30 (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800AC488 (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B6500 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x1800BFE40 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x180180644 (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::AddTestAumid(struct EventRegistrationToken *this, HSTRING string)
{
  int v2; // eax
  unsigned int v5; // ebx
  HSTRING *v7; // rbx
  HRESULT v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = dword_180244EDC;
  if ( !dword_180244EDC )
  {
    v12 = 0;
    SHRegGetBOOL(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
      L"PrereleaseExperience",
      &v12);
    v2 = 2 - (v12 != 0);
    dword_180244EDC = v2;
  }
  if ( v2 == 1 )
  {
    if ( this[23].value )
    {
      v5 = -2147023654;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)0x800704DALL);
      return v5;
    }
    v7 = (HSTRING *)&this[22];
    if ( !string || string != *v7 )
    {
      WindowsDeleteString(*v7);
      *v7 = 0LL;
      v8 = WindowsDuplicateString(string, (HSTRING *)&this[22]);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xBF,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
    }
    v10 = CSingleViewShellExperience::RegisterAumid((CSingleViewShellExperience *)this, *v7, this + 23);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xC0,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v10);
      return v5;
    }
  }
  return 0LL;
}
