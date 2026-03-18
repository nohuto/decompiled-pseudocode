/*
 * XREFs of ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01AC5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C0042830 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01AC95C (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01ACF74 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 *     ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01AD154 (-xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::RotationLockTogglePressed(CLegacyRotationMgr *this)
{
  unsigned int AutoRotationState; // eax
  BOOL v3; // ebx
  CLegacyRotationMgr *v4; // rcx

  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  if ( AutoRotationState <= 1 )
  {
    v3 = dword_1C03267C8 == 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, v3);
    CLegacyRotationMgr::xxxSetSlateAutoRotationState(v4, v3);
    PostShellHookMessagesEx(0x32u, dword_1C03267C8, 0LL);
  }
  else if ( (AutoRotationState & 0x2E) == 0 )
  {
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  }
}
