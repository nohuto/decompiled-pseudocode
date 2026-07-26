/*
 * XREFs of NdisReadEisaSlotInformation @ 0x1C00EA4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __fastcall NdisReadEisaSlotInformation(_DWORD *a1, __int64 a2)
{
  if ( (unsigned __int8)byte_1C009874E >= 4u )
    WPP_SF_q(0xAu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, a2);
  *a1 = -1073741637;
  if ( (unsigned __int8)byte_1C009874E >= 4u )
    WPP_SF_qD(0xBu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, a2, -1073741637);
}
