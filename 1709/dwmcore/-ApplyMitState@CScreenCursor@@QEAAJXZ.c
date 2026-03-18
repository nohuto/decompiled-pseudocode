/*
 * XREFs of ?ApplyMitState@CScreenCursor@@QEAAJXZ @ 0x18017D344
 * Callers:
 *     ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180016770 (-ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?ProcessSetScreenCursor@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETSCREENCURSOR@@@Z @ 0x1801342BC (-ProcessSetScreenCursor@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERT.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CScreenCursor::ApplyMitState(CScreenCursor *this)
{
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(unsigned int)DWMSetCursorOrientation(*((unsigned int *)this + 14)) )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return 0LL;
}
