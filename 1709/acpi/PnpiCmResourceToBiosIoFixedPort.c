/*
 * XREFs of PnpiCmResourceToBiosIoFixedPort @ 0x1C00A67CC
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C008E6A4 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosIoFixedPort(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // r9d
  __int64 i; // rdx

  *(_BYTE *)(a1 + 3) = 0;
  v2 = 0;
  *(_WORD *)(a1 + 1) = 0;
  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 1 || (*(_BYTE *)(i + 2) & 4) == 0; i += 20LL )
    {
      if ( ++v2 >= v3 )
        return 0LL;
    }
    *(_WORD *)(a1 + 1) = *(_WORD *)(i + 4);
    *(_BYTE *)(a1 + 3) = *(_BYTE *)(i + 12);
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
