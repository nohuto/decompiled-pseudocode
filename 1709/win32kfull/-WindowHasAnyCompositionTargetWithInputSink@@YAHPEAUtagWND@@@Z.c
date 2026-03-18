/*
 * XREFs of ?WindowHasAnyCompositionTargetWithInputSink@@YAHPEAUtagWND@@@Z @ 0x1C01BA18C
 * Callers:
 *     EditionTryDwmHitTest @ 0x1C005DF50 (EditionTryDwmHitTest.c)
 * Callees:
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0044E00 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 */

__int64 __fastcall WindowHasAnyCompositionTargetWithInputSink(struct tagWND *a1)
{
  __int64 TopLevelWindow; // rax
  unsigned int v3; // ebx

  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  v3 = 0;
  if ( !TopLevelWindow || (*(_BYTE *)(TopLevelWindow + 306) & 0x10) == 0 )
    return 0LL;
  if ( (unsigned int)WindowHasCompositionTarget(a1) || (unsigned int)WindowHasCompositionTarget(a1) )
    return 1;
  return v3;
}
