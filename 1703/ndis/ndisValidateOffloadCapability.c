/*
 * XREFs of ndisValidateOffloadCapability @ 0x1C00AAFCC
 * Callers:
 *     ndisMSetOffloadAttributes @ 0x1C00AAC50 (ndisMSetOffloadAttributes.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateOffloadCapability(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)a1 != 0xA7 )
    return 0;
  result = 1;
  if ( !*(_BYTE *)(a1 + 1) || *(_WORD *)(a1 + 2) < 0x70u )
    return 0;
  return result;
}
