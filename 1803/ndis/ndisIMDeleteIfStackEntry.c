/*
 * XREFs of ndisIMDeleteIfStackEntry @ 0x1C005FBBC
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisIfDeleteStackEntries @ 0x1C0013B3C (ndisIfDeleteStackEntries.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisDereferenceMiniportRef @ 0x1C005D9C8 (ndisDereferenceMiniportRef.c)
 *     ndisReferenceMiniportByName @ 0x1C01003B4 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisIMDeleteIfStackEntry(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // edi

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xC7u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xC8u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  return v3;
}
