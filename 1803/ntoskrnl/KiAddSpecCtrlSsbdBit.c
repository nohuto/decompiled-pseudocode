/*
 * XREFs of KiAddSpecCtrlSsbdBit @ 0x1401A5EA4
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401A5BD0 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAddSpecCtrlSsbdBit(_BYTE *a1)
{
  if ( KiSsbdMsr == 72 )
    *a1 |= 4u;
}
