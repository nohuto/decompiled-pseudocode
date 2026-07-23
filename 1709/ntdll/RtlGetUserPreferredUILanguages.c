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

NTSTATUS __cdecl RtlGetUserPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v5; // rdi
  WCHAR *v6; // r13
  ULONG v8; // ebx
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // r12d
  int v12; // eax
  NTSTATUS result; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r15
  _QWORD *v17; // r14
  __int64 v18; // rax
  int v19; // eax
  int SystemPreferredUILanguages; // ebx
  _WORD *v21; // r15
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
  NTSTATUS v32; // eax
  char v33; // [rsp+28h] [rbp-51h]
  bool v34; // [rsp+58h] [rbp-21h]
  __int16 v35; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG NumberOfLanguagesa; // [rsp+60h] [rbp-19h] BYREF
  ULONG v37; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  PVOID v39; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v40; // [rsp+78h] [rbp-1h]
  unsigned int v41; // [rsp+7Ch] [rbp+3h]
  _QWORD *v42; // [rsp+80h] [rbp+7h] BYREF
  __int64 v43; // [rsp+88h] [rbp+Fh]
  unsigned int LocaleNameb; // [rsp+E0h] [rbp+67h]

  v5 = ReturnLength;
  v6 = Languages;
  v35 = -1;
  BaseAddress = 0LL;
  v8 = Flags;
  v39 = 0LL;
  NumberOfLanguagesa = 0;
  v37 = 0;
  v42 = 0LL;
  v34 = 0;
  if ( ReturnLength )
    v37 = *ReturnLength;
  if ( LocaleName )
  {
    v8 = 4104;
    v34 = (Flags & 0x80) != 0;
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( !ReturnLength )
        goto LABEL_39;
LABEL_43:
      *ReturnLength = 2;
      goto LABEL_39;
    }
  }
  if ( (v8 & 0xFFFF6771) != 0 )
    return -1073741811;
  v9 = v8 | 0x80;
  if ( (v8 & 0x9880) != 0 )
    v9 = v8;
  if ( (v9 & 0xC) == 0xC )
    return -1073741811;
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v40 = v10;
  v11 = v10 >> 1;
  LOBYTE(v11) = (v10 & 2) == 0;
  v41 = v11;
  v12 = v10 & 0x9880;
  if ( (v10 & 0x9880) == 0 )
  {
    v10 |= 0x8000u;
    v12 = 0x8000;
    v40 = v10;
  }
  if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 || !ReturnLength || *ReturnLength && !v6 )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v42);
  if ( result >= 0 )
  {
    if ( LocaleName )
    {
      LOBYTE(v15) = 1;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v42, LocaleName, v15, &v35) < 0 )
      {
        SystemPreferredUILanguages = -1073741772;
        goto LABEL_43;
      }
    }
    LOBYTE(v14) = v10 & 1;
    InitializeTEBUserLangList(v14, v42);
    v16 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v17 = v42;
    if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
      v18 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v18 = v42[6];
    v43 = v18;
    if ( (v10 & 0x800) != 0 )
    {
      if ( !v16
        || ((*ReturnLength = v37,
             v23 = LdrpConvertLangFallbackListToMultiSz(
                     v16,
                     (_DWORD)v17,
                     (_DWORD)v6,
                     (_DWORD)ReturnLength,
                     v10,
                     v11,
                     (__int64)&NumberOfLanguagesa),
             SystemPreferredUILanguages = v23,
             v23 < 0)
         || !*(_WORD *)(v16 + 4))
        && v23 != -1073741789 )
      {
        *ReturnLength = v37;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       (v10 & 8) != 0 ? 2056 : 2052,
                                       LocaleName,
                                       &NumberOfLanguagesa,
                                       v6,
                                       ReturnLength);
      }
LABEL_31:
      if ( SystemPreferredUILanguages >= 0 )
      {
        *NumberOfLanguages = NumberOfLanguagesa;
        return SystemPreferredUILanguages;
      }
LABEL_39:
      if ( v6 && v37 )
      {
        if ( v37 == 1 )
          *v6 = 0;
        else
          *(_DWORD *)v6 = 0;
      }
      return SystemPreferredUILanguages;
    }
    v19 = LdrpCreateLangFallbackList(&BaseAddress, v42, 25LL);
    SystemPreferredUILanguages = v19;
    if ( (v10 & 0x8080) != 0 )
    {
      if ( v19 >= 0 )
      {
        if ( !BaseAddress )
          goto LABEL_31;
        SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                       v10 | 0x30,
                                       (_DWORD)v17,
                                       (unsigned int)&BaseAddress,
                                       0,
                                       0LL,
                                       v16,
                                       v17[7],
                                       v43,
                                       1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v21 = BaseAddress;
          *ReturnLength = v37;
          v22 = LdrpConvertLangFallbackListToMultiSz(
                  (_DWORD)v21,
                  (_DWORD)v17,
                  (_DWORD)v6,
                  (_DWORD)ReturnLength,
                  v10,
                  v11,
                  (__int64)&NumberOfLanguagesa);
          SystemPreferredUILanguages = v22;
          if ( v22 >= 0 && v21[2] || v22 == -1073741789 )
            goto LABEL_27;
          *ReturnLength = v37;
          v32 = RtlGetSystemPreferredUILanguages(
                  ((v10 & 8) != 0 ? 8 : 4) | 0x8000,
                  LocaleName,
                  &NumberOfLanguagesa,
                  v6,
                  ReturnLength);
          goto LABEL_90;
        }
      }
    }
    else if ( v19 >= 0 )
    {
      if ( !BaseAddress )
        goto LABEL_31;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                     v10 | 0x20,
                                     (_DWORD)v17,
                                     (unsigned int)&BaseAddress,
                                     0,
                                     0LL,
                                     v16,
                                     0LL,
                                     v43,
                                     0);
      if ( SystemPreferredUILanguages >= 0 )
      {
        SystemPreferredUILanguages = LdrpCreateLangFallbackList(&v39, v17, 25LL);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v21 = BaseAddress;
          if ( !v39 )
          {
LABEL_27:
            if ( v21 )
              RtlpMuiRegFreeLanguageList(v21);
            if ( v39 )
              RtlpMuiRegFreeLanguageList(v39);
            goto LABEL_31;
          }
          if ( LocaleName )
          {
            if ( v35 != -1 )
            {
              LOBYTE(v11) = v41;
              v24 = (_BYTE *)(*(_QWORD *)(v17[3] + 16LL) + 28LL * v35);
              if ( v24 )
              {
                if ( (*v24 & 2) != 0 || v34 && (*v24 & 4) != 0 )
                  LOBYTE(v11) = 0;
                if ( *((_BYTE *)v39 + 8) )
                  v25 = v17[5];
                else
                  LODWORD(v25) = v43;
                LdrpMergeParentBaseLanguagesToList((unsigned int)&v39, (_DWORD)v24, (_DWORD)v17, v25, v33);
              }
            }
          }
          else
          {
            v26 = 0;
            LocaleNameb = 0;
            if ( *((_WORD *)BaseAddress + 2) )
            {
              v27 = v43;
              do
              {
                v28 = *((_QWORD *)v21 + 3);
                if ( *(_WORD *)(v28 + 6LL * v26) == 2 )
                {
                  if ( (*(_BYTE *)(28LL * *(__int16 *)(v28 + 6LL * v26 + 4) + *(_QWORD *)(v17[3] + 16LL)) & 2) != 0 )
                    LOBYTE(v11) = 0;
                  v29 = (_BYTE *)(*(_QWORD *)(v17[3] + 16LL) + 28LL * *(__int16 *)(v28 + 6LL * v26 + 4));
                  if ( (*v29 & 6) != 0 )
                  {
                    if ( *((_BYTE *)v39 + 8) )
                      v30 = v17[5];
                    else
                      LODWORD(v30) = v27;
                    v31 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v39, (_DWORD)v29, (_DWORD)v17, v30, v33);
                    v26 = LocaleNameb;
                    SystemPreferredUILanguages = v31;
                    if ( v31 >= 0 )
                      break;
                  }
                }
                LocaleNameb = ++v26;
              }
              while ( v26 < (unsigned __int16)v21[2] );
              v5 = ReturnLength;
              v10 = v40;
              v6 = Languages;
            }
            if ( !*(_WORD *)(*((_QWORD *)v21 + 3) + 6LL * v26) || SystemPreferredUILanguages < 0 )
            {
              *v5 = v37;
              SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                             (v10 & 8) != 0 ? 4104 : 4100,
                                             0LL,
                                             &NumberOfLanguagesa,
                                             v6,
                                             v5);
              if ( SystemPreferredUILanguages >= 0 )
                goto LABEL_27;
            }
          }
          v32 = LdrpConvertLangFallbackListToMultiSz(
                  (_DWORD)v39,
                  (_DWORD)v17,
                  (_DWORD)v6,
                  (_DWORD)v5,
                  v10,
                  v11,
                  (__int64)&NumberOfLanguagesa);
LABEL_90:
          SystemPreferredUILanguages = v32;
          goto LABEL_27;
        }
      }
    }
    v21 = BaseAddress;
    goto LABEL_27;
  }
  return result;
}
