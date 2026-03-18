/*
 * XREFs of ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C020ACE0
 * Callers:
 *     <none>
 * Callees:
 *     IncrementCompositedCount @ 0x1C01C2094 (IncrementCompositedCount.c)
 */

void __fastcall IncComposited(struct tagWND *a1)
{
  if ( (*((_BYTE *)a1 + 67) & 2) != 0 )
    IncrementCompositedCount((__int64)a1);
}
