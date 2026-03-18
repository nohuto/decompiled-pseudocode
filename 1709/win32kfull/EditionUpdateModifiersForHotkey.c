/*
 * XREFs of EditionUpdateModifiersForHotkey @ 0x1C0112240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EditionUpdateModifiersForHotkey(int a1, int a2)
{
  if ( a1 )
    LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) &= ~a2;
  else
    LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) |= a2;
}
