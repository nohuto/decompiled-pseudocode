/*
 * XREFs of NdisReadEisaSlotInformation @ 0x1C00ED050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

void __fastcall NdisReadEisaSlotInformation(_DWORD *a1, __int64 a2)
{
  if ( (unsigned __int8)byte_1C009960E >= 4u )
    WPP_SF_q(0xAu, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, a2);
  *a1 = -1073741637;
  if ( (unsigned __int8)byte_1C009960E >= 4u )
    WPP_SF_qD(0xBu, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, a2, -1073741637);
}
