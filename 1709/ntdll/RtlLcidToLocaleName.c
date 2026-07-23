/*
 * XREFs of RtlLcidToLocaleName @ 0x180051F50
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18000625C (_RtlpMuiRegAddNeutralToInstalled.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18001AA5C (LdrpGetMUIFromCMFSegment.c)
 *     LdrResSearchResource @ 0x18001D400 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     LdrpQuerySxSMUIFile @ 0x18007D764 (LdrpQuerySxSMUIFile.c)
 *     LdrpGetParentLangId @ 0x180085030 (LdrpGetParentLangId.c)
 *     LdrpResSearchResourceHandle @ 0x1800E3210 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlpInitUnicodeStringUsingBuffer @ 0x1800520B4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpNlsGetLcidIndex @ 0x180052124 (RtlpNlsGetLcidIndex.c)
 *     RtlpLoadNlsData @ 0x18007F624 (RtlpLoadNlsData.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x1800F63B4 (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FB500 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // r14
  LCID v7; // ebx
  int LcidIndex; // eax
  __int64 v9; // r9
  __int64 v10; // rax
  wchar_t *v11; // r10
  _WORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r8
  wchar_t *Buffer; // rdx
  __int64 v19; // [rsp+20h] [rbp-A9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v21[176]; // [rsp+40h] [rbp-89h] BYREF

  v19 = 85LL;
  v5 = Flags;
  v7 = lcid;
  if ( (lcid & 0xFFFFEFFF) != 0 )
  {
    if ( !LocaleName )
      return -1073741584;
    if ( (Flags & 0xFFFFFFFD) != 0 )
      return -1073741583;
    if ( !AllocateDestinationString && !LocaleName->Buffer )
      return -1073741584;
    if ( lcid == 5120 )
    {
      if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v21, &v19) >= 0 )
      {
        v16 = (unsigned int)v19;
        Buffer = (wchar_t *)v21;
        goto LABEL_21;
      }
    }
    else if ( ((lcid - 1024) & 0xFFFFF7FF) != 0 )
    {
      if ( pTblPtrs || (unsigned __int8)RtlpLoadNlsData() )
      {
        if ( v7 == 2048 )
          v7 = gSystemLocale;
        LcidIndex = RtlpNlsGetLcidIndex(v7);
        v9 = LcidIndex;
        if ( LcidIndex < 0 )
          return -1073741585;
        if ( (v5 & 2) == 0 )
        {
          _mm_lfence();
          if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                         * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * LcidIndex + 4)
                         + *(_QWORD *)(pTblPtrs + 16)
                         + 24LL) & 1) == 0 )
            return -1073741585;
        }
        _mm_lfence();
        v10 = *(_QWORD *)(pTblPtrs + 40) + 2LL;
        v11 = (wchar_t *)(v10 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8 * v9 + 6));
        if ( v11 )
        {
          v12 = (_WORD *)(v10 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8 * v9 + 6));
          v13 = 84LL;
          do
          {
            if ( !*v12 )
              break;
            ++v12;
            --v13;
          }
          while ( v13 );
          v14 = v13 == 0 ? 0xC000000D : 0;
          v15 = v13 ? 84 - v13 : 0;
        }
        else
        {
          v15 = v19;
          v14 = 3221225485LL;
        }
        if ( (int)v14 >= 0 )
        {
          v16 = v15;
          Buffer = v11;
LABEL_21:
          LOBYTE(v14) = AllocateDestinationString;
          return RtlpInitUnicodeStringUsingBuffer(v14, Buffer, v16, LocaleName);
        }
      }
    }
    else
    {
      DestinationString.Buffer = (wchar_t *)v21;
      DestinationString.MaximumLength = 170;
      if ( (int)RtlpGetUserLocaleName(&DestinationString) >= 0 )
      {
        Buffer = DestinationString.Buffer;
        v16 = DestinationString.Length >> 1;
        goto LABEL_21;
      }
    }
    return -1073741823;
  }
  return -1073741585;
}
