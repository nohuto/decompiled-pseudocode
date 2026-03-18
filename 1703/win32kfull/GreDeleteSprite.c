/*
 * XREFs of GreDeleteSprite @ 0x1C001DBF8
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00245D0 (vCleanupUMWindowlessSprite.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00A1A50 (GreTransferDwmStateToSpriteState.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C00A2674 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     DeleteFadeSprite @ 0x1C01C1F70 (DeleteFadeSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024C6A8 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024CC78 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     bSetDevPreviewRect @ 0x1C02668BC (bSetDevPreviewRect.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0020DE4 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDeleteSprite(HDEV a1, HWND a2, void *a3, int a4)
{
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[0] = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v8 = GreDeleteSpriteInternal(a1, a2, a3, a4);
  SEMOBJ::vUnlock((SEMOBJ *)v10);
  return v8;
}
