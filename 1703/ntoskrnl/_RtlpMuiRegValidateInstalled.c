/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x1405B7C0C
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1405B7714 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _RtlpRemovePendingDeleteLanguages @ 0x140157150 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpGetNameFromLangInfoNode @ 0x140157210 (RtlpGetNameFromLangInfoNode.c)
 *     _MuiRegAllocArray @ 0x140166BBC (_MuiRegAllocArray.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     NtQueryInstallUILanguage @ 0x14044E3E4 (NtQueryInstallUILanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x1405B7EAC (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1405B82DC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1405B8478 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetOrAddString @ 0x1405B84A0 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1405D1E7C (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlLCIDToCultureName @ 0x1406EB9D0 (RtlLCIDToCultureName.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x1407499E4 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x140749C14 (_RtlpMuiRegValidatePartialLanguage.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  __int16 v2; // di
  int v3; // esi
  int v4; // r14d
  wchar_t *v5; // r12
  LANGID v6; // r15
  unsigned int v7; // r13d
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // r15d
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r10
  __int16 v20; // cx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rsi
  wchar_t *v25; // rax
  __int64 v26; // r8
  bool v27; // sf
  LANGID v28; // ax
  unsigned int v29; // eax
  __int16 v30; // cx
  LANGID LanguageId[4]; // [rsp+28h] [rbp-E0h] BYREF
  wchar_t *v32; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING String; // [rsp+38h] [rbp-D0h] BYREF
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  LANGID v35; // [rsp+4Ch] [rbp-BCh]
  int v36; // [rsp+4Eh] [rbp-BAh]
  __int64 v37; // [rsp+54h] [rbp-B4h]
  __int64 v38; // [rsp+5Ch] [rbp-ACh]
  _BYTE v39[176]; // [rsp+68h] [rbp-A0h] BYREF

  v2 = -1;
  LanguageId[0] = 0;
  LanguageId[2] = -1;
  v32 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset(v39, 0, 0xAAuLL);
  v6 = *(_WORD *)(a1 + 4);
  v7 = PsUILanguageComitted == 0 ? 0xC0000034 : 0;
  if ( !v6 )
  {
    result = NtQueryInstallUILanguage(LanguageId);
    if ( result < 0 )
      return result;
    v6 = LanguageId[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v6, 0LL, &LanguageId[2]);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    LanguageId[0] = -1;
    v25 = (wchar_t *)MuiRegAllocArray(v10, 0x55u);
    v32 = v25;
    v5 = v25;
    if ( !v25 )
      return -1073741801;
    String.Buffer = v25;
    if ( !RtlLCIDToCultureName(v6, &String) )
      goto LABEL_12;
    LOBYTE(v26) = 1;
    v27 = (int)RtlpMuiRegGetOrAddString(a1, String.Buffer, v26, LanguageId) < 0;
    v28 = -1;
    if ( !v27 )
      v28 = LanguageId[0];
    v37 = 0LL;
    v38 = 0LL;
    v34 = 49;
    v35 = v6;
    v36 = v28;
    RtlpMuiRegAddNeutralLanguage(a1, &v34);
    if ( (int)RtlpMuiRegGetOrAddLangInfo(a1 + 24, &v34, 0LL) < 0 )
      goto LABEL_12;
    v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
    goto LABEL_8;
  }
  if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = (__int16)LanguageId[2];
LABEL_8:
    if ( v3 != -1 )
    {
      String.Buffer = (wchar_t *)v39;
      String.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), &String) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage(a1, String.Buffer) < 0 )
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) |= 0x8000u;
        }
        else
        {
          v4 = 1;
        }
      }
    }
  }
LABEL_12:
  if ( !v7 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v12 = *(_QWORD *)(a1 + 24);
  v13 = 0;
  v14 = 4096LL;
  if ( *(_WORD *)(v12 + 6) )
  {
    v15 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v15 + *(_QWORD *)(v12 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v13, v11, 4096LL);
        v14 = 4096LL;
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v29 = v4 + 1;
        v30 = *(_WORD *)(v11 + v15);
        if ( (v30 & 0x1000) != 0 )
          v29 = v4;
        v4 = v29;
        if ( !v7 && v13 != v3 && v29 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v11 + v15) = v30 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v15) |= 0x8000u;
        }
      }
      v12 = *(_QWORD *)(a1 + 24);
      ++v13;
      v15 += 28LL;
    }
    while ( v13 < *(unsigned __int16 *)(v12 + 6) );
    v5 = v32;
  }
  v16 = *(_QWORD *)(a1 + 24);
  v17 = 0LL;
  if ( *(_WORD *)(v16 + 6) )
  {
    v18 = 0LL;
    do
    {
      v19 = *(_QWORD *)(v16 + 16);
      v20 = *(_WORD *)(v19 + v18);
      if ( (v20 & 0x21) == 0x21 )
      {
        v21 = v4 + 1;
        if ( (v20 & 0x1000) != 0 )
          v21 = v4;
        v4 = v21;
        if ( !v7 && (_DWORD)v17 != v3 && v21 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v19 + v18) = v20 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v18) |= 0x8000u;
        }
      }
      v16 = *(_QWORD *)(a1 + 24);
      v17 = (unsigned int)(v17 + 1);
      v18 += 28LL;
      v14 = 4096LL;
    }
    while ( (int)v17 < *(unsigned __int16 *)(v16 + 6) );
    v5 = v32;
  }
  v22 = *(_QWORD *)(a1 + 24);
  v23 = 0;
  if ( *(_WORD *)(v22 + 6) )
  {
    v24 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v24 + *(_QWORD *)(v22 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v23, v17, v14);
      v22 = *(_QWORD *)(a1 + 24);
      ++v23;
      v24 += 28LL;
    }
    while ( v23 < *(unsigned __int16 *)(v22 + 6) );
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return 0;
}
