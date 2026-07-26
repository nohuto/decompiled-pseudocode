/*
 * XREFs of WPP_SF_dddd @ 0x1C007CF00
 * Callers:
 *     ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007BF60 (-ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_dddd(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, 0x10u, &v4);
}
