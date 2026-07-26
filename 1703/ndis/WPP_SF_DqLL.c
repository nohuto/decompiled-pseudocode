/*
 * XREFs of WPP_SF_DqLL @ 0x1C0043D20
 * Callers:
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00A3D60 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DqLL(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // [rsp+80h] [rbp+18h] BYREF
  __int64 v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, 0x41u, &v4);
}
