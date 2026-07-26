/*
 * XREFs of WPP_SF_PP @ 0x1C004D234
 * Callers:
 *     NdisAllocateNetBufferListPool @ 0x1C001AC70 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateNetBufferPool @ 0x1C0022B30 (NdisAllocateNetBufferPool.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_PP(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  ndisWppFastTraceMessage(&WPP_897372624dc037cfb8480221ef22770e_Traceguids, a1, &v3);
}
