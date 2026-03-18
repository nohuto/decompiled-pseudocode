/*
 * XREFs of KiAddSpecCtrlSsbdBit @ 0x14017B784
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14017B4B0 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAddSpecCtrlSsbdBit(_BYTE *a1)
{
  if ( KiSsbdMsr == 72 )
    *a1 |= 4u;
}
