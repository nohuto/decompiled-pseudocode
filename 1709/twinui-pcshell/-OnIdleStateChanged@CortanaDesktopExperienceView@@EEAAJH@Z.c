/*
 * XREFs of ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1800D5AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1800D3E38 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1800D3F10 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800DA718 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA8A0 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     IsUserAssignedAccessSingleApp @ 0x1801DEA74 (IsUserAssignedAccessSingleApp.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnIdleStateChanged(CortanaDesktopExperienceView *this, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_BYTE *)this + 143) = a2 != 0;
  v3 = CortanaDesktopExperienceView::NotifyView(
         (CortanaDesktopExperienceView *)((char *)this - 64),
         L"NotifyLockStatusChanged",
         0LL);
  if ( v3 < 0 )
  {
    v4 = 839LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( !*((_BYTE *)this + 143) )
    goto LABEL_15;
  if ( (unsigned int)(*((_DWORD *)this + 17) - 3) > 1 )
  {
    v3 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)((char *)this - 64));
    if ( v3 < 0 )
    {
      v4 = 848LL;
      goto LABEL_3;
    }
  }
  if ( !*((_BYTE *)this + 143) )
  {
LABEL_15:
    if ( !*((_BYTE *)this + 144) )
    {
      CortanaHelpers::ResetTransientAboveLockCachedValues();
      v6 = IsUserAssignedAccessSingleApp(-4LL);
      CortanaHelpers::SetIsAssignedAccess(v6 != 0);
      if ( *((_BYTE *)this + 145) )
      {
        *((_BYTE *)this + 145) = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
      }
    }
  }
  return 0LL;
}
