/*
 * XREFs of Template_p @ 0x180081A80
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800079B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18000BC58 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x180084388 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180085280 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800853B0 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x18009CCAC (-Morph@CAnimationComponent@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_p(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v4 = &v7;
  v6 = 0;
  v5 = 8;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 1LL, &v4);
}
