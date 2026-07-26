/*
 * XREFs of ndisRssPmObjectHeaderFixup @ 0x1C0016E5C
 * Callers:
 *     ndisMSetPowerManagementCapabilities @ 0x1C0016D7C (ndisMSetPowerManagementCapabilities.c)
 *     ndisMSetRssCapabilities @ 0x1C00B6DEC (ndisMSetRssCapabilities.c)
 * Callees:
 *     WPP_SF_qsDDs @ 0x1C005F784 (WPP_SF_qsDDs.c)
 */

char __fastcall ndisRssPmObjectHeaderFixup(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int16 a5)
{
  char result; // al
  char v10; // cl
  unsigned __int16 v11; // cx

  result = 0;
  if ( *(_BYTE *)a2 != a3 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qsDDs(118, a3, a2, a1, a3, *(_BYTE *)a2, a1);
    *(_BYTE *)a2 = a3;
    result = 1;
  }
  v10 = *(_BYTE *)(a2 + 1);
  if ( v10 != a4 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qsDDs(119, a4, a2, a1, a4, v10, a1);
    *(_BYTE *)(a2 + 1) = a4;
    result = 1;
  }
  v11 = *(_WORD *)(a2 + 2);
  if ( v11 < a5 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qsDDs(120, a5, a2, a1, a5, v11, a1);
    *(_WORD *)(a2 + 2) = a5;
    return 1;
  }
  return result;
}
