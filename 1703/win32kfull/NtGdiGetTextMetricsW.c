/*
 * XREFs of NtGdiGetTextMetricsW @ 0x1C008A220
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextMetricsW @ 0x1C000C4B4 (GreGetTextMetricsW.c)
 */

__int64 __fastcall NtGdiGetTextMetricsW(HDC a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int TextMetricsW; // edx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  __int128 v7; // [rsp+30h] [rbp-48h]
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int128 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-18h]

  TextMetricsW = 0;
  if ( a3 >= 0x44 )
  {
    v6 = 0uLL;
    v7 = 0uLL;
    v8 = 0uLL;
    v9 = 0uLL;
    v10 = 0;
    TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)&v6);
    if ( TextMetricsW )
    {
      if ( a2 + 68 > W32UserProbeAddress || a2 + 68 <= a2 || (a2 & 3) != 0 )
        *W32UserProbeAddress = 0;
      *(_OWORD *)a2 = v6;
      *(_OWORD *)(a2 + 16) = v7;
      *(_OWORD *)(a2 + 32) = v8;
      *(_OWORD *)(a2 + 48) = v9;
      *(_DWORD *)(a2 + 64) = v10;
    }
  }
  return TextMetricsW;
}
