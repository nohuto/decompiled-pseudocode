/*
 * XREFs of ndisIMDeleteIfStackEntry @ 0x1C005F0F4
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisIfDeleteStackEntries @ 0x1C00023D0 (ndisIfDeleteStackEntries.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisDereferenceMiniportRef @ 0x1C005D044 (ndisDereferenceMiniportRef.c)
 *     ndisReferenceMiniportByName @ 0x1C0101EBC (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisIMDeleteIfStackEntry(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // edi

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0xC4u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  v2 = *(_DWORD **)(a1 + 3792);
  if ( *v2 > 1u )
  {
    ndisReferenceMiniportByName((PCUNICODE_STRING)&v2[4 * (*v2 - 2) + 2]);
    v3 = -1073741772;
  }
  else
  {
    v3 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0xC5u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  return v3;
}
