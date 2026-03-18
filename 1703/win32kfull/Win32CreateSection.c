/*
 * XREFs of Win32CreateSection @ 0x1C010BA74
 * Callers:
 *     CreateDesktopHeap @ 0x1C010B9D4 (CreateDesktopHeap.c)
 *     cMapRemoteFonts @ 0x1C026AC44 (cMapRemoteFonts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1)
{
  int Section; // ebx

  Section = MmCreateSection(a1, 983071LL, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
