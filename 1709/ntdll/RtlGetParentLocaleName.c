/*
 * XREFs of RtlGetParentLocaleName @ 0x180050A40
 * Callers:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180006350 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlGetNeutralFallback @ 0x180050E04 (RtlGetNeutralFallback.c)
 *     LdrpGetParentLangId @ 0x180085030 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x180051880 (RtlStringCchLengthW.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x1800520B4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpNlsGetNameIndex @ 0x180052770 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18007F624 (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800F6124 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800F648C (RtlpIsCustomLocale.c)
 */

__int64 __fastcall RtlGetParentLocaleName(PCWSTR SourceString, __int64 a2, unsigned int a3, char a4)
{
  int NameIndex; // eax
  __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // [rsp+40h] [rbp+8h] BYREF

  if ( !SourceString )
    return 3221225711LL;
  if ( !a2 || !*(_QWORD *)(a2 + 8) )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFF9) != 0 )
    return 3221225713LL;
  if ( (a3 & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale(SourceString)
    || (v14 = a3 >> 1,
        LOBYTE(v13) = a4,
        LOBYTE(v14) = (a3 & 2) != 0,
        result = RtlpGetCustomCultureData(SourceString, v14, v13, a2),
        (int)result < 0) )
  {
    if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
      return 3221225473LL;
    NameIndex = RtlpNlsGetNameIndex(SourceString);
    if ( NameIndex >= 0 )
    {
      if ( (a3 & 2) == 0 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                       * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                       + *(_QWORD *)(pTblPtrs + 16)
                       + 24LL) & 1) == 0 )
          return 3221225711LL;
      }
      _mm_lfence();
      v9 = *(_QWORD *)(pTblPtrs + 40)
         + 2LL
         + 2LL
         * *(unsigned int *)(*(unsigned __int16 *)(pTblPtrs + 56)
                           * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                           + *(_QWORD *)(pTblPtrs + 16)
                           + 184LL);
      if ( v9 )
      {
        if ( (int)RtlStringCchLengthW(v9, 85LL, &v17) < 0 )
          return 3221225473LL;
        LOBYTE(v10) = a4;
        return RtlpInitUnicodeStringUsingBuffer(v10, v11, v17, a2);
      }
    }
    if ( (a3 & 4) != 0 && (unsigned __int8)RtlpIsCustomLocale(SourceString) )
    {
      LOBYTE(v16) = a4;
      LOBYTE(v15) = (a3 & 2) != 0;
      return RtlpGetCustomCultureData(SourceString, v15, v16, a2);
    }
    return 3221225711LL;
  }
  return result;
}
