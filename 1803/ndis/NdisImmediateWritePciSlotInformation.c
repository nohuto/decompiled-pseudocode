/*
 * XREFs of NdisImmediateWritePciSlotInformation @ 0x1C010FBD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C0062AF4 (ndisGetSetBusConfigSpace.c)
 */

__int64 __fastcall NdisImmediateWritePciSlotInformation(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  unsigned int SetBusConfigSpace; // edi

  v5 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int8)byte_1C009960E >= 4u )
    WPP_SF_q(0x10u, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, v5);
  SetBusConfigSpace = ndisGetSetBusConfigSpace(v5, a3, a4, a5, 0, 0);
  if ( (unsigned __int8)byte_1C009960E >= 4u )
    WPP_SF_q(0x11u, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, v5);
  return SetBusConfigSpace;
}
