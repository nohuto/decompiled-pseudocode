/*
 * XREFs of zzzDecomposeDesktop @ 0x1C00A18B4
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     zzzDwmStartRedirection @ 0x1C0016490 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00A15E0 (xxxDwmStopRedirection.c)
 * Callees:
 *     ComposeWindow @ 0x1C001C75C (ComposeWindow.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C006D400 (GreUpdateSpriteVisRgn.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00A1A24 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00A1A50 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C00A1E3C (GreRemoveDisplayDriverRealizations.c)
 *     MagpDecomposeDesktop @ 0x1C00A22B4 (MagpDecomposeDesktop.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00B9A10 (zzzEnableDwmPointerSupport.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00C60EC (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1, int a2)
{
  int v3; // edi
  unsigned int v4; // esi
  __int64 v6; // rbx
  char v7; // r14
  int v8; // eax

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) & 1) != 0 )
  {
    v3 = a2 != 0 ? 0x10 : 0;
    MagpDecomposeDesktop(*(_QWORD *)&gMagnContext, a1);
    v4 = 0;
    do
    {
      if ( *(_BYTE *)(32LL * v4 + gSharedInfo[1] + 24) == 1 )
      {
        v6 = *(_QWORD *)(gpKernelHandleTable + 16LL * v4);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v6, a1) )
        {
          v7 = v3 + 2;
          LOBYTE(v8) = IsDesktopWindow(v6);
          if ( v8 )
          {
            v7 |= 4u;
          }
          else if ( (*(_BYTE *)(v6 + 71) & 1) != 0 )
          {
            PostEventMessageEx(
              *(_QWORD *)(v6 + 16),
              *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL),
              0x10u,
              v6,
              0,
              0LL,
              0LL,
              0LL);
          }
          ComposeWindow((struct tagWND *)v6, v7);
        }
      }
      ++v4;
    }
    while ( v4 <= giheLast );
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 32LL));
    zzzEnableDwmPointerSupport(0LL, 0LL);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 32LL));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) &= ~1u;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 32LL), 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
