/*
 * XREFs of ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0139694
 * Callers:
 *     DragOperationFromMaximizedAllowed @ 0x1C0139664 (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C01EDE38 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01EDE68 (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C01EDF7C (WindowArrangementAllowed.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00B79A8 (IsNonImmersiveBand.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00F2A40 (GetAppCompatFlags2QuadWord.c)
 */

_BOOL8 __fastcall WindowArrangementApplicable(struct tagWND *a1)
{
  return IsNonImmersiveBand((__int64)a1) && (GetAppCompatFlags2QuadWord(0LL) & 0x100000000LL) == 0;
}
