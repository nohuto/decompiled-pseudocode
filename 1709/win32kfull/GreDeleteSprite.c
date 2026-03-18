/*
 * XREFs of GreDeleteSprite @ 0x1C008BA1C
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0045C40 (GreTransferDwmStateToSpriteState.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0091DF0 (vCleanupUMWindowlessSprite.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C00E3724 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     DeleteFadeSprite @ 0x1C013E1F0 (DeleteFadeSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024E138 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024E70C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     bSetDevPreviewRect @ 0x1C0265B44 (bSetDevPreviewRect.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C008F260 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
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
