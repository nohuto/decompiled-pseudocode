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

NTSTATUS __cdecl RtlGetParentLocaleName(
        PCWSTR LocaleName,
        PUNICODE_STRING ParentLocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  int NameIndex; // eax
  __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // r11
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // [rsp+40h] [rbp+8h] BYREF

  if ( !LocaleName )
    return -1073741585;
  if ( !ParentLocaleName || !ParentLocaleName->Buffer )
    return -1073741584;
  if ( (Flags & 0xFFFFFFF9) != 0 )
    return -1073741583;
  if ( (Flags & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale(LocaleName)
    || (v14 = Flags >> 1,
        LOBYTE(v13) = AllocateDestinationString,
        LOBYTE(v14) = (Flags & 2) != 0,
        result = RtlpGetCustomCultureData(LocaleName, v14, v13, ParentLocaleName),
        result < 0) )
  {
    if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
      return -1073741823;
    NameIndex = RtlpNlsGetNameIndex(LocaleName);
    if ( NameIndex >= 0 )
    {
      if ( (Flags & 2) == 0 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                       * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                       + *(_QWORD *)(pTblPtrs + 16)
                       + 24LL) & 1) == 0 )
          return -1073741585;
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
          return -1073741823;
        LOBYTE(v10) = AllocateDestinationString;
        return RtlpInitUnicodeStringUsingBuffer(v10, v11, v17, ParentLocaleName);
      }
    }
    if ( (Flags & 4) != 0 && (unsigned __int8)RtlpIsCustomLocale(LocaleName) )
    {
      LOBYTE(v16) = AllocateDestinationString;
      LOBYTE(v15) = (Flags & 2) != 0;
      return RtlpGetCustomCultureData(LocaleName, v15, v16, ParentLocaleName);
    }
    return -1073741585;
  }
  return result;
}
