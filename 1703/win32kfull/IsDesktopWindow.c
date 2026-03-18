/*
 * XREFs of IsDesktopWindow @ 0x1C002250C
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0016158 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00170BC (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ComposeWindow @ 0x1C001C75C (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C0022184 (ComposeWindowIfNeeded.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022200 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0022460 (UserGetRedirectedWindowOrigin.c)
 *     TrackLayeredZorder @ 0x1C0022594 (TrackLayeredZorder.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     zzzDecomposeDesktop @ 0x1C00A18B4 (zzzDecomposeDesktop.c)
 *     CreateSpb @ 0x1C011C530 (CreateSpb.c)
 *     MagSlicerControl @ 0x1C01ED248 (MagSlicerControl.c)
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
