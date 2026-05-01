/*
 * XREFs of ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180306F94
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180154F78 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180158A18 (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CCortanaConversationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180159A08 (-RuntimeClassInitialize@CCortanaConversationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801613F8 (-RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180166278 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18016CBB8 (-RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18016F554 (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180170068 (-RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180171FF8 (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180174054 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180177C9C (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017D21C (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180182598 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x180184204 (-RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRI.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001A298 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x180307BA4 (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::AddTestAumid(CSingleViewShellExperience *this, HSTRING a2)
{
  int v2; // eax
  LSTATUS ValueW; // eax
  bool v5; // zf
  int v6; // ebx
  __int64 v7; // rdx
  DWORD v9[10]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HSTRING v11; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+18h] BYREF
  DWORD v13; // [rsp+88h] [rbp+20h] BYREF

  v11 = a2;
  v2 = dword_180439AB4;
  if ( dword_180439AB4 )
  {
LABEL_12:
    if ( v2 != 1 )
      return 0LL;
    goto LABEL_13;
  }
  v13 = 0;
  v9[0] = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
             L"PrereleaseExperience",
             0x10000012u,
             &v13,
             &v12,
             v9);
  if ( ValueW )
    goto LABEL_11;
  if ( v13 == 4 )
  {
    if ( v12 <= 1 )
    {
      v5 = v12 == 1;
      goto LABEL_9;
    }
LABEL_11:
    v2 = 2;
    dword_180439AB4 = 2;
    goto LABEL_12;
  }
  if ( v9[0] != 4 || (unsigned __int16)(v12 - 48) > 1u )
    goto LABEL_11;
  ValueW = 0;
  v5 = (_WORD)v12 == 49;
LABEL_9:
  LOBYTE(ValueW) = v5;
  if ( !ValueW )
    goto LABEL_11;
  dword_180439AB4 = 1;
LABEL_13:
  if ( *((_QWORD *)this + 23) )
  {
    v6 = -2147023654;
    v7 = 189LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 22, &v11);
  if ( v6 < 0 )
  {
    v7 = 190LL;
    goto LABEL_15;
  }
  v6 = CSingleViewShellExperience::RegisterAumid(
         this,
         *((HSTRING *)this + 22),
         (struct EventRegistrationToken *)this + 23);
  if ( v6 < 0 )
  {
    v7 = 191LL;
    goto LABEL_15;
  }
  return 0LL;
}
