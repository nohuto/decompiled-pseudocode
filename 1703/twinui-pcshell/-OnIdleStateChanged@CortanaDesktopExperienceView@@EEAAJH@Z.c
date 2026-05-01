/*
 * XREFs of ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1800C3C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1800C22FC (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1800C23D4 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C82DC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C8468 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     _anonymous_namespace_::queryLockdownMode @ 0x1801912DC (_anonymous_namespace_--queryLockdownMode.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnIdleStateChanged(CortanaDesktopExperienceView *this, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // rcx
  int LockdownMode; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_BYTE *)this + 141) = a2 != 0;
  v3 = CortanaDesktopExperienceView::NotifyView(
         (CortanaDesktopExperienceView *)((char *)this - 64),
         L"NotifyLockStatusChanged",
         0LL);
  if ( v3 < 0 )
  {
    v4 = 822LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( !*((_BYTE *)this + 141) )
    goto LABEL_15;
  if ( (unsigned int)(*((_DWORD *)this + 17) - 3) > 1 )
  {
    v3 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)((char *)this - 64));
    if ( v3 < 0 )
    {
      v4 = 831LL;
      goto LABEL_3;
    }
  }
  if ( !*((_BYTE *)this + 141) )
  {
LABEL_15:
    if ( !*((_BYTE *)this + 142) )
    {
      CortanaHelpers::ResetTransientAboveLockCachedValues();
      LockdownMode = anonymous_namespace_::queryLockdownMode(v6);
      CortanaHelpers::SetIsAssignedAccess(LockdownMode == 2);
      if ( *((_BYTE *)this + 143) )
      {
        *((_BYTE *)this + 143) = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
      }
    }
  }
  return 0LL;
}
