/*
 * XREFs of WPP_SF_LqL @ 0x1C004081C
 * Callers:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0021A78 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00B71B0 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryLoopbackObject@@YAHPEAXIPEAK0@Z @ 0x1C00B8400 (-ndisIfQueryLoopbackObject@@YAHPEAXIPEAK0@Z.c)
 *     ?ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z @ 0x1C00B85FC (-ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00B91C0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00B9290 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_LqL(unsigned __int16 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  __int64 v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, &v4);
}
