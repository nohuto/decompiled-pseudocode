/*
 * XREFs of ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C020C080
 * Callers:
 *     <none>
 * Callees:
 *     IncrementCompositedCount @ 0x1C01C5274 (IncrementCompositedCount.c)
 */

void __fastcall IncComposited(struct tagWND *a1)
{
  if ( (*((_BYTE *)a1 + 67) & 2) != 0 )
    IncrementCompositedCount((__int64)a1);
}
