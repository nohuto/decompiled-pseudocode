/*
 * XREFs of zzzDecomposeDesktop @ 0x1C0044214
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00443AC (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     xxxDwmStopRedirection @ 0x1C00E3780 (xxxDwmStopRedirection.c)
 * Callees:
 *     GreRemoveDisplayDriverRealizations @ 0x1C0043D84 (GreRemoveDisplayDriverRealizations.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0044380 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0044F58 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0045C40 (GreTransferDwmStateToSpriteState.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00471BC (zzzEnableDwmPointerSupport.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00721C0 (GreUpdateSpriteVisRgn.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     MagpDecomposeDesktop @ 0x1C01230F0 (MagpDecomposeDesktop.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rsi
  __int64 v4; // rbx

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) & 1) != 0 )
  {
    MagpDecomposeDesktop(*(_QWORD *)&gMagnContext, a1);
    v2 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v2 + gSharedInfo[1] + 24) == 1 )
      {
        v4 = *(_QWORD *)(gpKernelHandleTable + 24 * v2);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v4, a1) )
        {
          if ( !(unsigned int)IsDesktopWindow(v4) && (*(_BYTE *)(v4 + 71) & 1) != 0 )
            PostEventMessageEx(*(struct tagTHREADINFO **)(v4 + 16), 0, 0LL, 0LL, 0LL);
          ComposeWindow((struct tagWND *)v4);
        }
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 <= giheLast );
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 32LL));
    zzzEnableDwmPointerSupport(0LL, 0LL);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 32LL));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) &= ~1u;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 32LL), 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
