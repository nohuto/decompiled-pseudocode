/*
 * XREFs of ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180001908
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001410 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x18009B400 (-CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x18009D328 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_GetIdealWindowRect@CStoryboard@@KAXPEAVCWindowData@@_NPEBUtagRECT@@PEAU3@PEAPEAU3@@Z @ 0x180001980 (-_GetIdealWindowRect@CStoryboard@@KAXPEAVCWindowData@@_NPEBUtagRECT@@PEAU3@PEAPEAU3@@Z.c)
 */

void __fastcall CStoryboard::_GetIdealRects(
        struct CWindowData *a1,
        const struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT **a4,
        struct tagRECT *a5)
{
  struct tagRECT v8; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v9; // [rsp+40h] [rbp-18h] BYREF

  CStoryboard::_GetIdealWindowRect(a1, 1, a2, &v8, a4);
  CStoryboard::_GetIdealWindowRect(a1, 0, a2, &v9, 0LL);
  if ( a3 )
    *a3 = v8;
  if ( a5 )
    *a5 = v9;
}
