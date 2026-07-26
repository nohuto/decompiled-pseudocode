/*
 * XREFs of WPP_SF_sL @ 0x1C004AC54
 * Callers:
 *     ndisOidPMRemove @ 0x1C00D4F7C (ndisOidPMRemove.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_sL(__int64 a1, __int64 a2, const char *a3, int a4)
{
  __int64 v4; // r9
  __int64 v5; // r9
  int v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  if ( !a3 )
    a3 = "NULL";
  ndisWppFastTraceMessage(&WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, 0x4Du, a3, v5, &v6, 4LL, 0LL);
}
