/*
 * XREFs of RtlGetUILanguageInfo @ 0x1800EB810
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitializeLangRegistryInfo @ 0x1800043B0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800043E0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180004FEC (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800516DC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051DBC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlUnicodeStringToLcid @ 0x1800EBD58 (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800FC520 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800FC6DC (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800FC850 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 */

NTSTATUS __cdecl RtlGetUILanguageInfo(
        ULONG Flags,
        PCZZWSTR Languages,
        PZZWSTR FallbackLanguages,
        PULONG NumberOfFallbackLanguages,
        PULONG Attributes)
{
  char v5; // bl
  PZZWSTR v7; // r15
  WCHAR *v8; // rdi
  ULONG v9; // r13d
  __int64 v10; // rdx
  ULONG v11; // r12d
  int v12; // eax
  PVOID v13; // rsi
  NTSTATUS FallbackLanguagesAsMultiSZ; // ebx
  __int64 v15; // r15
  PVOID Heap; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v18; // r9
  __int64 v19; // r12
  const WCHAR *v20; // rdi
  int v22; // r8d
  ULONG v23; // r15d
  int v24; // r9d
  int FallbackLanguageInfoByLangId; // eax
  int v26; // eax
  __int16 v27; // [rsp+30h] [rbp-71h] BYREF
  PZZWSTR v28; // [rsp+38h] [rbp-69h]
  LCID Lcid; // [rsp+40h] [rbp-61h] BYREF
  int v30; // [rsp+44h] [rbp-5Dh]
  PVOID v31; // [rsp+48h] [rbp-59h] BYREF
  ULONG v32; // [rsp+50h] [rbp-51h]
  ULONG v33; // [rsp+54h] [rbp-4Dh]
  int v34; // [rsp+58h] [rbp-49h]
  PVOID BaseAddress; // [rsp+60h] [rbp-41h]
  _UNICODE_STRING String; // [rsp+68h] [rbp-39h] BYREF
  PULONG v37; // [rsp+78h] [rbp-29h]
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-21h] BYREF
  __int128 v39; // [rsp+90h] [rbp-11h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-1h]
  int v41; // [rsp+A8h] [rbp+7h]

  v5 = Flags;
  v33 = Flags;
  v28 = FallbackLanguages;
  v37 = Attributes;
  v31 = 0LL;
  v7 = FallbackLanguages;
  v27 = -1;
  v8 = (WCHAR *)Languages;
  LOBYTE(v30) = 0;
  BaseAddress = 0LL;
  if ( NumberOfFallbackLanguages )
    v9 = *NumberOfFallbackLanguages;
  else
    v9 = 0;
  if ( !Languages || !*Languages || (Flags & 0xC) == 0xC || (Flags & 0xFFFFFF73) != 0 || v9 && !FallbackLanguages )
    return -1073741811;
  v10 = 4LL;
  v11 = Flags & 4;
  v32 = v11;
  if ( (Flags & 4) == 0 )
    v10 = 85LL;
  if ( (int)RtlpCheckMuiMultiStringSafe(v8, v10) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter pwmszLanguage for function RtlGetUILanguageInfo is not a valid multi-string!\n");
  if ( v7 )
  {
    if ( v9 )
      *v7 = 0;
    if ( v9 > 1 )
      v7[1] = 0;
  }
  if ( NumberOfFallbackLanguages )
    *NumberOfFallbackLanguages = 2;
  if ( Attributes )
    *Attributes = 0;
  v34 = v5 & 0x80;
  if ( v5 < 0 )
    v12 = RtlpInitializeLangRegistryInfo(&v31);
  else
    v12 = RtlpCreateProcessRegistryInfo(&v31);
  v13 = v31;
  FallbackLanguagesAsMultiSZ = v12;
  if ( v12 >= 0 )
  {
    if ( !v31 )
    {
      FallbackLanguagesAsMultiSZ = -1073741823;
      goto LABEL_56;
    }
    v15 = *((_QWORD *)v31 + 3);
    if ( v11 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      BaseAddress = Heap;
      if ( !Heap )
      {
        v13 = v31;
        FallbackLanguagesAsMultiSZ = -1073741801;
LABEL_32:
        v7 = v28;
        goto LABEL_56;
      }
      String.Buffer = (wchar_t *)Heap;
      *(_DWORD *)&String.Length = 11141120;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( (int)RtlUnicodeStringToLcid(&DestinationString, &Lcid) < 0 || !RtlLCIDToCultureName(Lcid, &String) )
      {
        v13 = v31;
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_53;
      }
      v13 = v31;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId((__int64)v31, Lcid, 1, &v27);
    }
    else
    {
      RtlInitUnicodeString(&String, v8);
      if ( !RtlCultureNameToLCID(&String, &Lcid) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_32;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v13, v8, 1, &v27);
    }
    FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
    if ( InstalledLanguageIndexByLangId < 0 )
    {
      v7 = v28;
      if ( InstalledLanguageIndexByLangId == -1073741823 )
        FallbackLanguagesAsMultiSZ = -1073741772;
      goto LABEL_54;
    }
    if ( v27 < 0 || v27 >= (int)*(unsigned __int16 *)(v15 + 6) )
      goto LABEL_52;
    v19 = *(_QWORD *)(v15 + 16) + 28LL * v27;
    while ( *v8 )
      ++v8;
    v20 = v8 + 1;
    v39 = *(_OWORD *)v19;
    v40 = *(_QWORD *)(v19 + 16);
    v41 = *(_DWORD *)(v19 + 24);
    if ( (*(_BYTE *)v19 & 1) != 0 )
    {
      if ( (*(_BYTE *)v19 & 6) != 0 )
      {
        FallbackLanguagesAsMultiSZ = -1073741595;
        goto LABEL_53;
      }
      if ( *v20 )
      {
LABEL_52:
        FallbackLanguagesAsMultiSZ = -1073741772;
        goto LABEL_53;
      }
      LOBYTE(v22) = v30;
    }
    else
    {
      LOBYTE(v22) = v30;
      if ( *v20 )
      {
        v23 = v32;
        while ( !(_BYTE)v22 )
        {
          if ( v23 )
          {
            RtlInitUnicodeString(&DestinationString, v20);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Lcid) < 0 )
              break;
            LOBYTE(v24) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                             (_DWORD)v13,
                                             (unsigned int)&v39,
                                             (unsigned __int16)Lcid,
                                             v24,
                                             (__int64)&v39);
          }
          else
          {
            LOBYTE(v18) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v13, &v39, v20, v18, &v39);
          }
          FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
          if ( FallbackLanguageInfoByLangId < 0 )
            goto LABEL_53;
          v22 = (unsigned __int8)v30;
          if ( (v39 & 0x20) != 0 )
            v22 = 1;
          v30 = v22;
          while ( *v20 )
            ++v20;
          if ( !*++v20 )
            goto LABEL_82;
        }
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_53;
      }
    }
LABEL_82:
    if ( v37 )
    {
      v26 = *(_WORD *)v19 & 0x419F | 0x20;
      if ( (*(_WORD *)v19 & 0x1000) != 0 )
        v26 = *(_WORD *)v19 & 0x419F;
      *v37 = v26 | 0x40;
    }
    if ( NumberOfFallbackLanguages )
    {
      v7 = v28;
      *NumberOfFallbackLanguages = v9;
      if ( (_BYTE)v22 )
        *NumberOfFallbackLanguages = 2;
      else
        FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                       v33,
                                       (_DWORD)v13,
                                       (unsigned int)&v39,
                                       (_DWORD)NumberOfFallbackLanguages,
                                       (__int64)v7);
LABEL_54:
      if ( BaseAddress )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        v13 = v31;
      }
      goto LABEL_56;
    }
LABEL_53:
    v7 = v28;
    goto LABEL_54;
  }
LABEL_56:
  if ( v34 && v13 )
    RtlpMuiFreeLangRegistryInfo(v13);
  if ( !FallbackLanguagesAsMultiSZ && NumberOfFallbackLanguages && *NumberOfFallbackLanguages > v9 )
  {
    if ( v7 )
      return -1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
