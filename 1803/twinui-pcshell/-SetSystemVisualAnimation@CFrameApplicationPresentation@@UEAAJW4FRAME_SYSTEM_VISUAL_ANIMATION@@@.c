/*
 * XREFs of ?SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z @ 0x1801373C0
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_9b0229a43634bf5cd6097f4bac7ea1eb___ @ 0x18013617C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_9b0229a43634bf5cd6097f4bac7ea1eb___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSystemVisualAnimation(unsigned int *a1, unsigned int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  DWORD2(v4) = a2;
  *(_QWORD *)&v4 = a1;
  v2 = v4;
  a1[134] = a2;
  v4 = v2;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_9b0229a43634bf5cd6097f4bac7ea1eb___(a1, &v4);
}
