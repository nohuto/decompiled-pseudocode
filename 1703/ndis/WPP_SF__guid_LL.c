/*
 * XREFs of WPP_SF__guid_LL @ 0x1C00441EC
 * Callers:
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00CFFEC (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF__guid_LL(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v4 = a4;
  ndisWppFastTraceMessage(&WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, 0x83u, a3, 16LL, &v4, 4LL, va, 4LL, 0LL);
}
