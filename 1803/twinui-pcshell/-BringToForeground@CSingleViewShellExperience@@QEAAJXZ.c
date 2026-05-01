/*
 * XREFs of ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x1800697EC
 * Callers:
 *     ?BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180068440 (-BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180163200 (-HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Window.c)
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1801667D4 (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?BringToForeground@CStartExperienceManager@@UEAAJXZ @ 0x180173460 (-BringToForeground@CStartExperienceManager@@UEAAJXZ.c)
 *     ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x180174790 (-TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Inter.c)
 * Callees:
 *     ?BringToForeground@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x18006E1E0 (-BringToForeground@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::BringToForeground(CSingleViewShellExperience *this)
{
  DesktopSingleViewShellExperiencePersonality *v1; // rcx
  __int64 (__fastcall *v2)(DesktopSingleViewShellExperiencePersonality *__hidden); // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 3) || *((_DWORD *)this + 10) != 2 )
    return 0LL;
  v1 = (DesktopSingleViewShellExperiencePersonality *)*((_QWORD *)this + 10);
  v2 = *(__int64 (__fastcall **)(DesktopSingleViewShellExperiencePersonality *__hidden))(*(_QWORD *)v1 + 72LL);
  v3 = v2 == DesktopSingleViewShellExperiencePersonality::BringToForeground
     ? DesktopSingleViewShellExperiencePersonality::BringToForeground(v1)
     : ((__int64 (*)(void))v2)();
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E3,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
