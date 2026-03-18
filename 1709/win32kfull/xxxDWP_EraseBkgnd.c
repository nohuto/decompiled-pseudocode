/*
 * XREFs of xxxDWP_EraseBkgnd @ 0x1C007CA74
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxFillWindow @ 0x1C007EFB0 (xxxFillWindow.c)
 *     xxxInternalPaintDesktop @ 0x1C00DFAEC (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxDWP_EraseBkgnd(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r9

  if ( a2 == 20 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 144LL);
    if ( !v3 )
      return 0LL;
    if ( v3 <= 0x1F )
      v3 = *(_QWORD *)(gpsi + 8 * v3 + 4672);
    xxxFillWindow(a1, a1, a3, v3);
  }
  else if ( a2 == 39 )
  {
    if ( (*(_BYTE *)(a1 + 71) & 0x40) != 0 )
      return 0LL;
    xxxInternalPaintDesktop(a1, a3, 1LL);
  }
  return 1LL;
}
