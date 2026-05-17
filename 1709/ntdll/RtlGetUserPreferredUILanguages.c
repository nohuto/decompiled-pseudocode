/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x180005240
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSystemPreferredUILanguages @ 0x180005620 (RtlGetSystemPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x180005E78 (InitializeTEBUserLangList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18002CBA4 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18002CE30 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpMergeLangFallbackLists @ 0x180051168 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800516DC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpCreateLangFallbackList @ 0x180052B14 (LdrpCreateLangFallbackList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EB470 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x1800F5FE0 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlGetUserPreferredUILanguages(int a1, const WCHAR *a2, _DWORD *a3, _WORD *a4, _DWORD *a5)
{
  _DWORD *v5; // rdi
  _WORD *v6; // r13
  int v8; // ebx
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // r12d
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r15
  _QWORD *v17; // r14
  __int64 v18; // rax
  int v19; // eax
  int SystemPreferredUILanguages; // ebx
  __int64 v21; // r15
  int v22; // eax
  int v23; // eax
  _BYTE *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // r8d
  int v27; // edi
  __int64 v28; // r11
  _BYTE *v29; // rdx
  __int64 v30; // r9
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  char v34; // [rsp+28h] [rbp-51h]
  bool v35; // [rsp+58h] [rbp-21h]
  __int16 v36; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v37; // [rsp+60h] [rbp-19h] BYREF
  int v38; // [rsp+64h] [rbp-15h]
  __int64 v39; // [rsp+68h] [rbp-11h] BYREF
  __int64 v40; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v41; // [rsp+78h] [rbp-1h]
  unsigned int v42; // [rsp+7Ch] [rbp+3h]
  _QWORD *v43; // [rsp+80h] [rbp+7h] BYREF
  __int64 v44; // [rsp+88h] [rbp+Fh]
  unsigned int v46; // [rsp+E0h] [rbp+67h]

  v5 = a5;
  v6 = a4;
  v36 = -1;
  v39 = 0LL;
  v8 = a1;
  v40 = 0LL;
  v37 = 0;
  v38 = 0;
  v43 = 0LL;
  v35 = 0;
  if ( a5 )
    v38 = *a5;
  if ( a2 )
  {
    v8 = 4104;
    v35 = (a1 & 0x80) != 0;
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( !a5 )
        goto LABEL_39;
LABEL_43:
      *a5 = 2;
      goto LABEL_39;
    }
  }
  if ( (v8 & 0xFFFF6771) != 0 )
    return 3221225485LL;
  v9 = v8 | 0x80;
  if ( (v8 & 0x9880) != 0 )
    v9 = v8;
  if ( (v9 & 0xC) == 0xC )
    return 3221225485LL;
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v41 = v10;
  v11 = v10 >> 1;
  LOBYTE(v11) = (v10 & 2) == 0;
  v42 = v11;
  v12 = v10 & 0x9880;
  if ( (v10 & 0x9880) == 0 )
  {
    v10 |= 0x8000u;
    v12 = 0x8000;
    v41 = v10;
  }
  if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 || !a5 || *a5 && !v6 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v43);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      LOBYTE(v15) = 1;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v43, a2, v15, &v36) < 0 )
      {
        SystemPreferredUILanguages = -1073741772;
        goto LABEL_43;
      }
    }
    LOBYTE(v14) = v10 & 1;
    InitializeTEBUserLangList(v14, v43);
    v16 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v17 = v43;
    if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
      v18 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v18 = v43[6];
    v44 = v18;
    if ( (v10 & 0x800) != 0 )
    {
      if ( !v16
        || ((*a5 = v38,
             v23 = LdrpConvertLangFallbackListToMultiSz(
                     v16,
                     (_DWORD)v17,
                     (_DWORD)v6,
                     (_DWORD)a5,
                     v10,
                     v11,
                     (__int64)&v37),
             SystemPreferredUILanguages = v23,
             v23 < 0)
         || !*(_WORD *)(v16 + 4))
        && v23 != -1073741789 )
      {
        *a5 = v38;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages((v10 & 8) != 0 ? 2056 : 2052, a2, &v37, v6, a5);
      }
LABEL_31:
      if ( SystemPreferredUILanguages >= 0 )
      {
        *a3 = v37;
        return (unsigned int)SystemPreferredUILanguages;
      }
LABEL_39:
      if ( v6 && v38 )
      {
        if ( v38 == 1 )
          *v6 = 0;
        else
          *(_DWORD *)v6 = 0;
      }
      return (unsigned int)SystemPreferredUILanguages;
    }
    v19 = LdrpCreateLangFallbackList(&v39, v43, 25LL);
    SystemPreferredUILanguages = v19;
    if ( (v10 & 0x8080) != 0 )
    {
      if ( v19 >= 0 )
      {
        if ( !v39 )
          goto LABEL_31;
        SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                       v10 | 0x30,
                                       (_DWORD)v17,
                                       (unsigned int)&v39,
                                       0,
                                       0LL,
                                       v16,
                                       v17[7],
                                       v44,
                                       1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v21 = v39;
          *a5 = v38;
          v22 = LdrpConvertLangFallbackListToMultiSz(v21, (_DWORD)v17, (_DWORD)v6, (_DWORD)a5, v10, v11, (__int64)&v37);
          SystemPreferredUILanguages = v22;
          if ( v22 >= 0 && *(_WORD *)(v21 + 4) || v22 == -1073741789 )
            goto LABEL_27;
          *a5 = v38;
          v33 = (v10 & 8) != 0 ? 8 : 4;
          LODWORD(v33) = v33 | 0x8000;
          v32 = RtlGetSystemPreferredUILanguages(v33, a2, &v37, v6, a5);
          goto LABEL_90;
        }
      }
    }
    else if ( v19 >= 0 )
    {
      if ( !v39 )
        goto LABEL_31;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                     v10 | 0x20,
                                     (_DWORD)v17,
                                     (unsigned int)&v39,
                                     0,
                                     0LL,
                                     v16,
                                     0LL,
                                     v44,
                                     0);
      if ( SystemPreferredUILanguages >= 0 )
      {
        SystemPreferredUILanguages = LdrpCreateLangFallbackList(&v40, v17, 25LL);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v21 = v39;
          if ( !v40 )
          {
LABEL_27:
            if ( v21 )
              RtlpMuiRegFreeLanguageList(v21);
            if ( v40 )
              RtlpMuiRegFreeLanguageList(v40);
            goto LABEL_31;
          }
          if ( a2 )
          {
            if ( v36 != -1 )
            {
              LOBYTE(v11) = v42;
              v24 = (_BYTE *)(*(_QWORD *)(v17[3] + 16LL) + 28LL * v36);
              if ( v24 )
              {
                if ( (*v24 & 2) != 0 || v35 && (*v24 & 4) != 0 )
                  LOBYTE(v11) = 0;
                if ( *(_BYTE *)(v40 + 8) )
                  v25 = v17[5];
                else
                  LODWORD(v25) = v44;
                LdrpMergeParentBaseLanguagesToList((unsigned int)&v40, (_DWORD)v24, (_DWORD)v17, v25, v34);
              }
            }
          }
          else
          {
            v26 = 0;
            v46 = 0;
            if ( *(_WORD *)(v39 + 4) )
            {
              v27 = v44;
              do
              {
                v28 = *(_QWORD *)(v21 + 24);
                if ( *(_WORD *)(v28 + 6LL * v26) == 2 )
                {
                  if ( (*(_BYTE *)(28LL * *(__int16 *)(v28 + 6LL * v26 + 4) + *(_QWORD *)(v17[3] + 16LL)) & 2) != 0 )
                    LOBYTE(v11) = 0;
                  v29 = (_BYTE *)(*(_QWORD *)(v17[3] + 16LL) + 28LL * *(__int16 *)(v28 + 6LL * v26 + 4));
                  if ( (*v29 & 6) != 0 )
                  {
                    if ( *(_BYTE *)(v40 + 8) )
                      v30 = v17[5];
                    else
                      LODWORD(v30) = v27;
                    v31 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v40, (_DWORD)v29, (_DWORD)v17, v30, v34);
                    v26 = v46;
                    SystemPreferredUILanguages = v31;
                    if ( v31 >= 0 )
                      break;
                  }
                }
                v46 = ++v26;
              }
              while ( v26 < *(unsigned __int16 *)(v21 + 4) );
              v5 = a5;
              v10 = v41;
              v6 = a4;
            }
            if ( !*(_WORD *)(*(_QWORD *)(v21 + 24) + 6LL * v26) || SystemPreferredUILanguages < 0 )
            {
              *v5 = v38;
              SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                             (v10 & 8) != 0 ? 4104 : 4100,
                                             0LL,
                                             &v37,
                                             v6,
                                             v5);
              if ( SystemPreferredUILanguages >= 0 )
                goto LABEL_27;
            }
          }
          v32 = LdrpConvertLangFallbackListToMultiSz(v40, (_DWORD)v17, (_DWORD)v6, (_DWORD)v5, v10, v11, (__int64)&v37);
LABEL_90:
          SystemPreferredUILanguages = v32;
          goto LABEL_27;
        }
      }
    }
    v21 = v39;
    goto LABEL_27;
  }
  return result;
}
