/*
 * XREFs of ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00B9818
 * Callers:
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00BC228 (UpdateCursorImageForMonitorDpi.c)
 * Callees:
 *     GetAnimatedCursorFrame @ 0x1C00465D8 (GetAnimatedCursorFrame.c)
 */

struct tagCURSOR *__fastcall GetCurrentCursorFrame(struct tagCURSOR *a1)
{
  if ( a1 && (*((_DWORD *)a1 + 20) & 8) != 0 )
    return (struct tagCURSOR *)GetAnimatedCursorFrame((__int64)a1, *((_DWORD *)a1 + 30));
  return a1;
}
