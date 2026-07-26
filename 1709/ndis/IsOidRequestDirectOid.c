/*
 * XREFs of IsOidRequestDirectOid @ 0x1C0042390
 * Callers:
 *     ndisMDirectOidRequest @ 0x1C0044600 (ndisMDirectOidRequest.c)
 *     NdisFDirectOidRequest @ 0x1C0058920 (NdisFDirectOidRequest.c)
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
    if ( v3 >= 0x16 )
      return result;
  }
  return 1;
}
