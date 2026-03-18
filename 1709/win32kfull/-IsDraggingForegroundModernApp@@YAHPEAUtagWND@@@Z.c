/*
 * XREFs of ?IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z @ 0x1C01D86F0
 * Callers:
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D7968 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDraggingForegroundModernApp(struct tagWND *a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 1184) & 0x1C0000) == 0x40000
    && *(_QWORD *)(v1 + 1360)
    && *(struct tagWND **)(v1 + 1352) == a1
    && gptiForeground )
  {
    return *(_QWORD *)(v1 + 408) == *(_QWORD *)(gptiForeground + 408LL);
  }
  return v2;
}
