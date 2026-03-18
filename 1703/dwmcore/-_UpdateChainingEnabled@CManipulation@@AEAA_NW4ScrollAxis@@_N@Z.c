/*
 * XREFs of ?_UpdateChainingEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x180169350
 * Callers:
 *     ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x18012F9C4 (-ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESET.c)
 * Callees:
 *     <none>
 */

char __fastcall CManipulation::_UpdateChainingEnabled(__int64 a1, int a2, char a3)
{
  char result; // al

  result = 1;
  if ( (*(_BYTE *)(a2 + a1 + 420) & 1) == a3 )
    return 0;
  *(_BYTE *)(a2 + a1 + 420) = a3 | *(_BYTE *)(a2 + a1 + 420) & 0xFE;
  return result;
}
