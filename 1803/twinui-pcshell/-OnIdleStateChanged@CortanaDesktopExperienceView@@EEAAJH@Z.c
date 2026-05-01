/*
 * XREFs of ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1801864F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800619A8 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x180149878 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180185700 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1801873E8 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1801874B8 (CortanaHelpers--SetWindowsHelloActive.c)
 *     IsUserAssignedAccessSingleApp @ 0x18030AE84 (IsUserAssignedAccessSingleApp.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnIdleStateChanged(CortanaDesktopExperienceView *this, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  char v6; // al
  int v7; // eax
  bool v8; // sf
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+58h] [rbp+10h] BYREF

  *((_BYTE *)this + 142) = a2 != 0;
  if ( a2 )
  {
    v3 = CortanaDesktopExperienceView::NotifyView(
           (CortanaDesktopExperienceView *)((char *)this - 64),
           L"NotifyLockStatusChanged",
           0LL);
    if ( v3 < 0 )
    {
      v4 = 864LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
  }
  else if ( *((_BYTE *)this + 146) )
  {
    v3 = CortanaDesktopExperienceView::NotifyView(
           (CortanaDesktopExperienceView *)((char *)this - 64),
           L"NotifyLockStatusChanged",
           0LL);
    if ( v3 < 0 )
    {
      v4 = 871LL;
      goto LABEL_4;
    }
  }
  *((_BYTE *)this + 146) = 0;
  v6 = *((_BYTE *)this + 142);
  if ( v6 && *((_DWORD *)this + 17) != 3 && *((_DWORD *)this + 17) != 4 )
  {
    v3 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)((char *)this - 64));
    if ( v3 < 0 )
    {
      v4 = 884LL;
      goto LABEL_4;
    }
    v6 = *((_BYTE *)this + 142);
  }
  if ( !v6 && !*((_BYTE *)this + 143) )
  {
    v11 = 0;
    v7 = _RegSetKeyValue(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
           L"AnyAboveLockAppsActive",
           4u,
           (BYTE *)&v11,
           4u);
    v8 = v7 < 0;
    if ( v7 > 0 )
    {
      v7 = (unsigned __int16)v7 | 0x80070000;
      v8 = v7 < 0;
    }
    if ( v8 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        140LL,
        (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
        (const char *)(unsigned int)v7);
    CortanaHelpers::SetWindowsHelloActive();
    LOBYTE(v9) = (unsigned int)IsUserAssignedAccessSingleApp(-4LL) != 0;
    CortanaHelpers::SetIsAssignedAccess(v9);
    if ( *((_BYTE *)this + 144) )
    {
      *((_BYTE *)this + 144) = 0;
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    }
  }
  return 0LL;
}
