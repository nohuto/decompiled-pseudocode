/*
 * XREFs of WPP_SF_Ddd @ 0x1C0045AC8
 * Callers:
 *     ndisQuerySetMiniportEx2 @ 0x1C001D418 (ndisQuerySetMiniportEx2.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Ddd(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, 0xAu, &v4);
}
