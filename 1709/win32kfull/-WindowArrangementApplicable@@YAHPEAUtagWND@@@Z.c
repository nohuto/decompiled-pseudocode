/*
 * XREFs of ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C01401E0
 * Callers:
 *     DragOperationFromMaximizedAllowed @ 0x1C01401B0 (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C01F82D4 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01F8304 (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C01F841C (WindowArrangementAllowed.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00FFBC0 (GetAppCompatFlags2QuadWord.c)
 */

_BOOL8 __fastcall WindowArrangementApplicable(struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  return IsNonImmersiveBand((__int64)a1) && (GetAppCompatFlags2QuadWord(0LL, v1, v2, v3) & 0x100000000LL) == 0;
}
