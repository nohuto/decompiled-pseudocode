/*
 * XREFs of GreCreateSprite @ 0x1C001E1B4
 * Callers:
 *     CreateSprite @ 0x1C001E08C (CreateSprite.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024C6A8 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     bSetDevPreviewRect @ 0x1C02668BC (bSetDevPreviewRect.c)
 * Callees:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHHPEAG@Z @ 0x1C0020FA4 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void *__fastcall GreCreateSprite(
        HDEV a1,
        HWND a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned __int16 *a10)
{
  void *SpriteInternal; // rbx
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF

  v16 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SpriteInternal = GreCreateSpriteInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  return SpriteInternal;
}
