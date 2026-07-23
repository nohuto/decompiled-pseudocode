/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x1800FEC08
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1800FE3E0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180006350 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180050D2C (RtlpIsALicensedRegularLanguage.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051DBC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _MuiRegAllocArray @ 0x180051F04 (_MuiRegAllocArray.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180084520 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtIsUILanguageComitted @ 0x1800A2010 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A2970 (NtQueryInstallUILanguage.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1800FCBC4 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800FCCB0 (RtlpMuiRegGetOrAddString.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x1800FEFCC (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x1800FF1F4 (_RtlpMuiRegValidatePartialLanguage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800FF32C (_RtlpRemovePendingDeleteLanguages.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  unsigned __int16 v2; // di
  int v3; // esi
  int v4; // r14d
  wchar_t *v5; // r12
  NTSTATUS IsUILanguageComitted; // eax
  LANGID v7; // dx
  bool v8; // r13
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v11; // rcx
  wchar_t *v12; // rax
  int v13; // eax
  unsigned __int16 v14; // cx
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // r15d
  __int64 v18; // r9
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int16 v21; // cx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r10
  __int16 v26; // cx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rsi
  LANGID InstallUILanguageId[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v32; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v33; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t *v34; // [rsp+38h] [rbp-D0h]
  _UNICODE_STRING String; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING v36; // [rsp+50h] [rbp-B8h] BYREF
  int v37; // [rsp+60h] [rbp-A8h] BYREF
  LANGID v38; // [rsp+64h] [rbp-A4h]
  int v39; // [rsp+66h] [rbp-A2h]
  __int64 v40; // [rsp+6Ch] [rbp-9Ch]
  __int64 v41; // [rsp+74h] [rbp-94h]
  _BYTE v42[176]; // [rsp+88h] [rbp-80h] BYREF

  v2 = -1;
  InstallUILanguageId[0] = 0;
  v32 = -1;
  v34 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset(v42, 0, 0xAAuLL);
  IsUILanguageComitted = NtIsUILanguageComitted();
  v7 = *(_WORD *)(a1 + 4);
  v8 = IsUILanguageComitted == 0;
  if ( v7 )
  {
    InstallUILanguageId[0] = *(_WORD *)(a1 + 4);
  }
  else
  {
    result = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
    v7 = InstallUILanguageId[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v7, 0, &v32);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    LOWORD(v33) = -1;
    v12 = (wchar_t *)MuiRegAllocArray(v11, 0x55u);
    v34 = v12;
    v5 = v12;
    if ( !v12 )
      return -1073741801;
    String.Buffer = v12;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
    {
      v13 = RtlpMuiRegGetOrAddString(a1, String.Buffer, 1, (__int16 *)&v33);
      v14 = -1;
      if ( v13 >= 0 )
        v14 = v33;
      v39 = v14;
      v38 = InstallUILanguageId[0];
      v37 = 49;
      v40 = 0LL;
      v41 = 0LL;
      RtlpMuiRegAddNeutralLanguage(a1, (__int64)&v37, String.Buffer);
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)&v37, 0LL) >= 0 )
      {
        v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v32;
LABEL_16:
    if ( v3 != -1 )
    {
      v36.Buffer = (wchar_t *)v42;
      v36.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), &v36) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage((_QWORD *)a1, v36.Buffer) >= 0 )
        {
          v4 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) |= 0x8000u;
        }
      }
    }
  }
  if ( v8 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v16 = *(_QWORD *)(a1 + 24);
  v17 = 0;
  v18 = 4096LL;
  if ( *(_WORD *)(v16 + 6) )
  {
    v19 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v19 + *(_QWORD *)(v16 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v17, v15, 4096LL);
        v18 = 4096LL;
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v20 = v4 + 1;
        v21 = *(_WORD *)(v15 + v19);
        if ( (v21 & 0x1000) != 0 )
          v20 = v4;
        v4 = v20;
        if ( v8 && v17 != v3 && v20 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v15 + v19) = v21 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v19) |= 0x8000u;
        }
      }
      v16 = *(_QWORD *)(a1 + 24);
      ++v17;
      v19 += 28LL;
    }
    while ( v17 < *(unsigned __int16 *)(v16 + 6) );
    v5 = v34;
  }
  v22 = *(_QWORD *)(a1 + 24);
  v23 = 0LL;
  if ( *(_WORD *)(v22 + 6) )
  {
    v24 = 0LL;
    do
    {
      v25 = *(_QWORD *)(v22 + 16);
      v26 = *(_WORD *)(v25 + v24);
      if ( (v26 & 0x21) == 0x21 )
      {
        v27 = v4 + 1;
        if ( (v26 & 0x1000) != 0 )
          v27 = v4;
        v4 = v27;
        if ( v8 && (_DWORD)v23 != v3 && v27 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v25 + v24) = v26 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v24) |= 0x8000u;
        }
      }
      v22 = *(_QWORD *)(a1 + 24);
      v23 = (unsigned int)(v23 + 1);
      v24 += 28LL;
      v18 = 4096LL;
    }
    while ( (int)v23 < *(unsigned __int16 *)(v22 + 6) );
    v5 = v34;
  }
  v28 = *(_QWORD *)(a1 + 24);
  v29 = 0;
  if ( *(_WORD *)(v28 + 6) )
  {
    v30 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v30 + *(_QWORD *)(v28 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v29, v23, v18);
      v28 = *(_QWORD *)(a1 + 24);
      ++v29;
      v30 += 28LL;
    }
    while ( v29 < *(unsigned __int16 *)(v28 + 6) );
  }
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0;
}
