/*
 * XREFs of WPP_SF_Sx @ 0x1C0062488
 * Callers:
 *     ndisQueryDeviceFlags @ 0x1C00C8884 (ndisQueryDeviceFlags.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_Sx(__int64 a1, __int64 a2, const wchar_t *a3, ...)
{
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r9
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = v3 + 1;
  }
  else
  {
    v4 = 5LL;
  }
  v5 = 2 * v4;
  if ( !a3 )
    a3 = L"NULL";
  ndisWppFastTraceMessage(&WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, 0x72u, a3, v5, va, 8LL, 0LL);
}
