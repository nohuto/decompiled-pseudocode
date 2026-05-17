/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x180005620
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180005240 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpSetProcUserMachineLangList @ 0x180005D20 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18002CBA4 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18002CE30 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpMergeLangFallbackLists @ 0x180051168 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800516DC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrpCreateLangFallbackList @ 0x180052B14 (LdrpCreateLangFallbackList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EB470 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x1800F5FE0 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlGetSystemPreferredUILanguages(int a1, const WCHAR *a2, _DWORD *a3, _WORD *a4, unsigned int *a5)
{
  unsigned int *v5; // rbx
  unsigned int v8; // r15d
  int v9; // edi
  __int64 v10; // r14
  int v11; // ecx
  int v12; // r15d
  char v13; // r12
  int v14; // eax
  __int64 result; // rax
  _QWORD *v16; // rdi
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rsi
  int v20; // eax
  int v21; // ebx
  unsigned int v22; // esi
  int v23; // eax
  char v24; // r14
  _BYTE *v25; // rdx
  __int64 v26; // r9
  bool v27; // cf
  unsigned int i; // ecx
  __int64 v29; // r10
  _BYTE *v30; // rdx
  __int64 v31; // r9
  char v32; // [rsp+28h] [rbp-51h]
  char v33; // [rsp+30h] [rbp-49h]
  bool v34; // [rsp+58h] [rbp-21h]
  __int16 v35; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v36; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v37; // [rsp+64h] [rbp-15h]
  __int64 v38; // [rsp+68h] [rbp-11h] BYREF
  __int64 v39; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v40; // [rsp+78h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v43; // [rsp+E0h] [rbp+67h]

  v5 = a5;
  v36 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v8 = *a5;
  v9 = a1;
  v35 = -1;
  v10 = 0LL;
  v40 = 0LL;
  v34 = 0;
  if ( a2 )
  {
    v21 = a1 & 0x80;
    v9 = 4104;
    RtlInitUnicodeString(&DestinationString, a2);
    v34 = v21 != 0;
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
    {
      v18 = -1073741772;
LABEL_35:
      if ( a4 )
      {
        if ( v8 )
          *a4 = 0;
        if ( v8 > 1 )
          a4[1] = 0;
      }
      return (unsigned int)v18;
    }
    v5 = a5;
  }
  if ( (v9 & 0xFFFF6373) != 0 )
    return 3221225485LL;
  v11 = v9 | 0x80;
  if ( (v9 & 0x9880) != 0 )
    v11 = v9;
  if ( (v11 & 0xC) == 0xC )
    return 3221225485LL;
  v12 = v11 | 8;
  if ( (v11 & 0xC) != 0 )
    v12 = v11;
  v13 = (v12 & 0x400) == 0;
  v14 = v12 & 0x9880;
  if ( (v12 & 0x9880) == 0 )
  {
    v12 |= 0x8000u;
    v14 = 0x8000;
  }
  if ( v14 != 128 && v14 != 2048 && v14 != 4096 && v14 != 0x8000 )
    return 3221225485LL;
  v37 = *v5;
  if ( v37 )
  {
    if ( !a4 )
      return 3221225485LL;
  }
  result = RtlpCreateProcessRegistryInfo(&v40);
  if ( (int)result >= 0 )
  {
    v16 = v40;
    if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName(v40, a2, 0LL, &v35) < 0 )
    {
      v18 = -1073741772;
LABEL_32:
      v8 = v37;
      goto LABEL_35;
    }
    result = RtlpSetProcUserMachineLangList(v16, 0LL);
    if ( (int)result >= 0 )
    {
      if ( (v12 & 0x800) != 0 )
      {
        v22 = v37;
        *v5 = v37;
        v18 = LdrpConvertLangFallbackListToMultiSz(v16[7], (_DWORD)v16, (_DWORD)a4, (_DWORD)v5, v12, v13, (__int64)&v36);
        if ( v18 >= 0 && v36 )
          goto LABEL_27;
        v18 = LdrpCreateLangFallbackList(&v38, v16, 25LL);
        if ( v18 < 0 )
          goto LABEL_81;
        v18 = LdrpMergeLangFallbackLists(v12 | 0x30u, (_DWORD)v16, (unsigned int)&v38, 0, 0LL, 0LL, 0LL, 0LL, 0);
        if ( v18 < 0 )
          goto LABEL_81;
        *a5 = v22;
        v19 = v38;
        v20 = LdrpConvertLangFallbackListToMultiSz(v38, (_DWORD)v16, (_DWORD)a4, (_DWORD)a5, v12, v13, (__int64)&v36);
      }
      else
      {
        v17 = LdrpCreateLangFallbackList(&v38, v16, 25LL);
        v18 = v17;
        if ( (v12 & 0x8080) != 0 )
        {
          if ( v17 >= 0 )
          {
            v18 = LdrpMergeLangFallbackLists(v12 | 0x30u, (_DWORD)v16, (unsigned int)&v38, 0, 0LL, 0LL, v16[7], 0LL, 1);
            if ( v18 >= 0 )
            {
              v19 = v38;
              v20 = LdrpConvertLangFallbackListToMultiSz(
                      v38,
                      (_DWORD)v16,
                      (_DWORD)a4,
                      (_DWORD)a5,
                      v12,
                      v13,
                      (__int64)&v36);
              goto LABEL_22;
            }
          }
LABEL_81:
          v19 = v38;
          goto LABEL_23;
        }
        if ( v17 < 0 )
          goto LABEL_81;
        v18 = LdrpMergeLangFallbackLists(v12 | 0x30u, (_DWORD)v16, (unsigned int)&v38, 0, 0LL, 0LL, v16[7], 0LL, 0);
        if ( v18 < 0 )
          goto LABEL_81;
        v23 = LdrpCreateLangFallbackList(&v39, v16, 25LL);
        v19 = v38;
        v18 = v23;
        if ( v23 < 0 )
          goto LABEL_80;
        v24 = v13;
        if ( a2 )
        {
          if ( v35 != -1 )
          {
            v25 = (_BYTE *)(*(_QWORD *)(v16[3] + 16LL) + 28LL * v35);
            if ( v25 )
            {
              if ( (*v25 & 2) != 0 || v34 && (*v25 & 4) != 0 )
                v24 = 0;
              if ( *(_BYTE *)(v38 + 8) )
                v26 = v16[5];
              else
                v26 = v16[6];
              v18 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v39, (_DWORD)v25, (_DWORD)v16, v26, v32);
            }
          }
        }
        else
        {
          v27 = *(_WORD *)(v38 + 4) != 0;
          for ( i = 0; ; v27 = i < *(unsigned __int16 *)(v19 + 4) )
          {
            v43 = i;
            if ( !v27 )
              break;
            v29 = *(_QWORD *)(v19 + 24);
            if ( *(_WORD *)(v29 + 6LL * i) == 2 )
            {
              if ( (*(_BYTE *)(28LL * *(__int16 *)(v29 + 6LL * i + 4) + *(_QWORD *)(v16[3] + 16LL)) & 2) != 0 )
                v24 = 0;
              v30 = (_BYTE *)(*(_QWORD *)(v16[3] + 16LL) + 28LL * *(__int16 *)(v29 + 6LL * i + 4));
              if ( (*v30 & 6) != 0 )
              {
                v31 = *(_BYTE *)(v19 + 8) ? v16[5] : v16[6];
                v18 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v39, (_DWORD)v30, (_DWORD)v16, v31, v32);
                if ( v18 >= 0 )
                  goto LABEL_79;
              }
              i = v43;
            }
            ++i;
          }
        }
        if ( v18 < 0 )
        {
LABEL_80:
          v10 = v39;
          goto LABEL_23;
        }
LABEL_79:
        v33 = v24;
        v10 = v39;
        v20 = LdrpConvertLangFallbackListToMultiSz(v39, (_DWORD)v16, (_DWORD)a4, (_DWORD)a5, v12, v33, (__int64)&v36);
      }
LABEL_22:
      v18 = v20;
LABEL_23:
      if ( v19 )
        RtlpMuiRegFreeLanguageList(v19);
      if ( v10 )
        RtlpMuiRegFreeLanguageList(v10);
LABEL_27:
      if ( v18 >= 0 )
      {
        *a3 = v36;
        return (unsigned int)v18;
      }
      goto LABEL_32;
    }
  }
  return result;
}
