/*
 * XREFs of ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A967C
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00BA600 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01A9240 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00BA470 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0197ACC (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 *     ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01A8E48 (-GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01A98BC (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A9C64 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
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
  if ( dword_1C032A7F4 )
  {
    AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
    if ( ((AutoRotationState - 64) & 0xFFFFFF3F) != 0 || AutoRotationState == 256 )
    {
      if ( ((AutoRotationState - 65) & 0xFFFFFF3F) == 0 && AutoRotationState != 257 )
        DockedOrientationValue = dword_1C032A7CC;
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
        PostShellHookMessagesEx(0x32u, dword_1C032A7D0, 0LL);
      }
    }
  }
}
