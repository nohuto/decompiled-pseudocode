/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x180046590
 * Callers:
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     sub_1800468D4 @ 0x1800468D4 (sub_1800468D4.c)
 *     RtlpQueryDefaultUILanguage @ 0x18006D720 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18008F0E0 @ 0x18008F0E0 (sub_18008F0E0.c)
 *     ZwIsUILanguageComitted @ 0x1800A7230 (ZwIsUILanguageComitted.c)
 *     ZwQueryInstallUILanguage @ 0x1800A7B50 (ZwQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpGetSystemDefaultUILanguage(_WORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // edi
  int v6; // eax
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v7 = 0;
  v8 = 0LL;
  v4 = 0;
  if ( a1 )
  {
    *a1 = 0;
    if ( !a2 && (v6 = RtlpCreateProcessRegistryInfo(&v8), v2 = v8, v4 = v6, v6 < 0)
      || (!v2 || !*(_WORD *)(v2 + 4) ? (v4 = -1073741595) : (v7 = *(_WORD *)(v2 + 4)), v4 < 0) )
    {
      v4 = ZwQueryInstallUILanguage(&v7);
      if ( v4 < 0 )
        return (unsigned int)v4;
      if ( (int)ZwIsUILanguageComitted() >= 0 )
      {
        if ( v2 )
        {
          sub_18008F0E0(v2, v2 + 6, v2 + 8);
          *(_WORD *)(v2 + 4) = v7;
        }
      }
    }
    *a1 = v7;
    return (unsigned int)v4;
  }
  return 3221225485LL;
}
