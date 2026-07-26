/*
 * XREFs of IsOidRequestDirectOid @ 0x1C00455E8
 * Callers:
 *     ndisMDirectOidRequest @ 0x1C0047400 (ndisMDirectOidRequest.c)
 *     NdisFDirectOidRequest @ 0x1C0059560 (NdisFDirectOidRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOidRequestDirectOid(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &ndisDirectOidRequestPathOids;
  v3 = 0;
  while ( a1 != *v2 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0x15 )
      return result;
  }
  return 1;
}
