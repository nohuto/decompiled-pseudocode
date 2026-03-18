/*
 * XREFs of IsDesktopWindow @ 0x1C0092C4C
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00449AC (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0045740 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     TrackLayeredZorder @ 0x1C0090DAC (TrackLayeredZorder.c)
 *     ComposeWindowIfNeeded @ 0x1C009286C (ComposeWindowIfNeeded.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00928E8 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0092BA0 (UserGetRedirectedWindowOrigin.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 *     MagSlicerControl @ 0x1C01A96C8 (MagSlicerControl.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDesktopWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      v2 = *(_QWORD *)(v3 + 16);
  }
  return a1 == v2;
}
