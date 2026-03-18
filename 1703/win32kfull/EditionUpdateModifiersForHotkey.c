/*
 * XREFs of EditionUpdateModifiersForHotkey @ 0x1C0108370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EditionUpdateModifiersForHotkey(int a1, int a2)
{
  if ( a1 )
    WPP_MAIN_CB.AlignmentRequirement &= ~a2;
  else
    WPP_MAIN_CB.AlignmentRequirement |= a2;
}
