/*
 * XREFs of ?WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z @ 0x1C019DC2C
 * Callers:
 *     EditionTryDwmHitTest @ 0x1C005F960 (EditionTryDwmHitTest.c)
 * Callees:
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0017D90 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 */

__int64 __fastcall WindowHasAnyCompositionTargetWithInputSink(struct tagWND *a1)
{
  __int64 TopLevelWindow; // rax
  unsigned int v3; // r11d

  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  if ( !TopLevelWindow || (*(_BYTE *)(TopLevelWindow + 306) & 0x10) == 0 )
    return 0LL;
  if ( (unsigned int)WindowHasCompositionTarget(a1) || (unsigned int)WindowHasCompositionTarget(a1) )
    return 1;
  return v3;
}
