/*
 * XREFs of ?DestroyUnlockedCursorIfSupported@@YAXPEAX@Z @ 0x1C008AE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DestroyUnlockedCursorIfSupported(void *a1)
{
  if ( (int)IsDestroyUnlockedCursorSupported() >= 0 )
    DestroyUnlockedCursor(a1);
}
