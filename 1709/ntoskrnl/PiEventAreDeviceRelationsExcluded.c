/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x14055DB20
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x14055BA6C (PiProcessQueryAndCancelRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

char __fastcall PiEventAreDeviceRelationsExcluded(int a1)
{
  char result; // al

  result = 1;
  if ( a1 <= 1 || a1 == 4 || a1 >= 7 )
    return 0;
  return result;
}
