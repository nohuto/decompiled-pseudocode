/*
 * XREFs of ?_UpdateChainingEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x180171DFC
 * Callers:
 *     ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x1801709EC (-ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESET.c)
 * Callees:
 *     <none>
 */

char __fastcall CManipulation::_UpdateChainingEnabled(__int64 a1, int a2, char a3)
{
  char result; // al

  result = 1;
  if ( (*(_BYTE *)(a2 + a1 + 428) & 1) == a3 )
    return 0;
  *(_BYTE *)(a2 + a1 + 428) = a3 | *(_BYTE *)(a2 + a1 + 428) & 0xFE;
  return result;
}
