/*
 * XREFs of ndisIMDeleteIfStackEntry @ 0x1C005F348
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisIfDeleteStackEntries @ 0x1C0026758 (ndisIfDeleteStackEntries.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisDereferenceMiniportRef @ 0x1C005D4DC (ndisDereferenceMiniportRef.c)
 *     ndisReferenceMiniportByName @ 0x1C00F5008 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisIMDeleteIfStackEntry(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // edi

  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xB8u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xB9u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
  return v3;
}
