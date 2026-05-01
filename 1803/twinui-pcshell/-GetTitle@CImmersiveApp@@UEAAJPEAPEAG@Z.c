/*
 * XREFs of ?GetTitle@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x18004C4B0
 * Callers:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x18001B724 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 * Callees:
 *     ?GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x180047D00 (-GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetTitle(CImmersiveApp *this, unsigned __int16 **a2)
{
  unsigned int v4; // ebx
  CTaskWindow *v5; // rcx
  __int64 (__fastcall *v6)(CTaskWindow *, unsigned __int16 **); // rax
  unsigned int Title; // eax

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = 0LL;
  v4 = -2147023728;
  if ( *((_QWORD *)this + 42) )
  {
    v5 = (CTaskWindow *)**((_QWORD **)this + 41);
    v6 = *(__int64 (__fastcall **)(CTaskWindow *, unsigned __int16 **))(*(_QWORD *)v5 + 168LL);
    if ( v6 == CTaskWindow::GetTitle )
      Title = CTaskWindow::GetTitle(v5, a2);
    else
      Title = v6(v5, a2);
    v4 = Title;
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v4;
}
