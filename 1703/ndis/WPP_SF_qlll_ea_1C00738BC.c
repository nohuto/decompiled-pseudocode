/*
 * XREFs of WPP_SF_qlll @ 0x1C00738BC
 * Callers:
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00EA84C (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qlll(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(
    &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids,
    0x1Fu,
    &v4,
    8LL,
    &v5,
    4LL,
    va,
    4LL,
    va1,
    4LL,
    0LL);
}
