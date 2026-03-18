/*
 * XREFs of ?_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x18019AF30
 * Callers:
 *     ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x180199858 (-ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESET.c)
 * Callees:
 *     <none>
 */

char __fastcall CManipulation::_UpdateInertiaEnabled(__int64 a1, int a2, char a3)
{
  char result; // al

  result = 1;
  if ( (*(_BYTE *)(a1 + 8LL * a2 + 452) & 1) == a3 )
    return 0;
  *(_BYTE *)(a1 + 8LL * a2 + 452) = a3 | *(_BYTE *)(a1 + 8LL * a2 + 452) & 0xFE;
  return result;
}
