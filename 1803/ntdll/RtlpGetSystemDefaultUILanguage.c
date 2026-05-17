/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x1800311A0
 * Callers:
 *     sub_1800321EC @ 0x1800321EC (sub_1800321EC.c)
 *     RtlpQueryDefaultUILanguage @ 0x18006EA40 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18008A9A4 @ 0x18008A9A4 (sub_18008A9A4.c)
 *     ZwIsUILanguageComitted @ 0x18009CA30 (ZwIsUILanguageComitted.c)
 *     ZwQueryInstallUILanguage @ 0x18009D3B0 (ZwQueryInstallUILanguage.c)
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
          sub_18008A9A4(v2, v2 + 6, v2 + 8);
          *(_WORD *)(v2 + 4) = v7;
        }
      }
    }
    *a1 = v7;
    return (unsigned int)v4;
  }
  return 3221225485LL;
}
