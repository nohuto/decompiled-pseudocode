/*
 * XREFs of ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01AC95C
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00429C0 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01AC5B0 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C0042830 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C01A357C (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 *     ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01AC220 (-GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01ACB9C (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01ACF74 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxApplyDockedOrientation(CLegacyRotationMgr *this)
{
  unsigned int DockedOrientationValue; // edi
  unsigned int *v3; // rdx
  CLegacyRotationMgr *v4; // rcx
  int AutoRotationState; // ebx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  DockedOrientationValue = 0;
  if ( dword_1C03267EC )
  {
    AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
    if ( ((AutoRotationState - 64) & 0xFFFFFF3F) != 0 || AutoRotationState == 256 )
    {
      if ( ((AutoRotationState - 65) & 0xFFFFFF3F) == 0 && AutoRotationState != 257 )
        DockedOrientationValue = dword_1C03267C4;
    }
    else
    {
      DockedOrientationValue = CLegacyRotationMgr::GetDockedOrientationValue(this, v3);
    }
    if ( !(unsigned int)CLegacyRotationMgr::xxxRotateScreen(v4, DockedOrientationValue, 0, &v6) )
    {
      TraceLoggingScreenOrientationChangeEvent(DockedOrientationValue, 2LL, v6 == 0);
      if ( ((AutoRotationState - 64) & 0xFFFFFF3F) == 0 && AutoRotationState != 256 )
      {
        CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, 0);
        PostShellHookMessagesEx(0x32u, dword_1C03267C8, 0LL);
      }
    }
  }
}
