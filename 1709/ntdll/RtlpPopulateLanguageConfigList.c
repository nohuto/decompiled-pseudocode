/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x18007ED48
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18005302C (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegGetLanguageSpec @ 0x180006450 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlStringCbLengthW @ 0x180079544 (RtlStringCbLengthW.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18007EE78 (RtlpMuiRegCreateLanguageConfigList.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x1800A0320 (ZwEnumerateValueKey.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x1800FBD2C (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegValidateConfigNode @ 0x1800FD860 (RtlpMuiRegValidateConfigNode.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(HANDLE KeyHandle, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  int v4; // r11d
  __int64 v6; // r15
  HANDLE v7; // rax
  __int64 v8; // rdi
  ULONG v9; // r12d
  NTSTATUS v10; // eax
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  int LanguageSpec; // eax
  __int64 v18; // r9
  __int16 v19; // r13
  __int16 v20; // r13
  __int64 v21; // rax
  WCHAR *v22; // rsi
  __int64 v23; // rax
  int v24; // r15d
  unsigned __int16 v25; // r12
  __int16 v26; // ax
  __int64 v27; // rcx
  int v28; // eax
  __int64 LanguageConfigList; // rax
  int v30; // eax
  char v31; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL);
  LOWORD(v4) = 0;
  *((_QWORD *)v3 + 4) = a3;
  *((_QWORD *)v3 + 7) = KeyHandle;
  v6 = a3;
  v7 = KeyHandle;
  v8 = 0LL;
  if ( KeyHandle && a2 && a3 )
  {
    v8 = *a2;
    v9 = 0;
    *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = *a2;
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0;
    while ( 1 )
    {
      v10 = ZwEnumerateValueKey(v7, v9, KeyValueFullInformation, v3 + 96, 0x200u, (PULONG)v3 + 10);
      v4 = 0;
      v12 = v10;
      if ( v10 < 0 )
        break;
      if ( *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
      {
        v15 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
        if ( (unsigned int)(v15 + 24) <= 0x200 )
        {
          v16 = (unsigned __int64)(unsigned int)v15 >> 1;
          *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                      + 0x74
                                                                                      + 2 * v16);
          *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v16) = 0;
          LanguageSpec = RtlpMuiRegGetLanguageSpec(
                           v6,
                           (const WCHAR *)v3 + 58,
                           (char *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL),
                           v11,
                           (_WORD *)v3 + 2);
          v4 = 0;
          v12 = LanguageSpec;
          if ( LanguageSpec >= 0 )
          {
            v19 = *v3;
            *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
            *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 0;
            v20 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x42) & 0x3FFF | (v19 << 14);
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 4);
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v16) = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            v21 = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x42) = v20;
            v22 = (WCHAR *)&v3[v21 + 96];
            if ( !v22 )
              goto LABEL_39;
            v23 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
            if ( (_DWORD)v23 )
            {
              v24 = 2 * v23;
              v25 = 0;
              do
              {
                if ( *v22 == (_WORD)v4 || v24 <= 0 || v25 >= 3u )
                  break;
                if ( (int)RtlpMuiRegGetLanguageSpec(
                            *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
                            v22,
                            (char *)v3 + 1,
                            v18,
                            (_WORD *)v3 + 6) >= 0 )
                {
                  v26 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
                  *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x42) = ((*(_BYTE *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 1) & 3) << (2 * v25)) | v20 & ~(3 << (2 * v25));
                  *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x46 + 2LL * v25) = v26;
                  v20 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x42);
                }
                v12 = RtlStringCbLengthW(v22, v24, (_QWORD *)v3 + 6);
                if ( v12 < 0 )
                  goto LABEL_31;
                v27 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
                v24 += -2 - v27;
                ++v25;
                v22 = (WCHAR *)((char *)v22 + v27 + 2);
              }
              while ( v22 );
              v12 = v4;
LABEL_31:
              v9 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              v6 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
            }
            else
            {
LABEL_39:
              v12 = -1073741811;
            }
            if ( v12 >= 0 )
            {
              v28 = RtlpMuiRegValidateConfigNode(v6, v3 + 64);
              v4 = 0;
              v12 = v28;
              if ( v28 >= 0 )
              {
                if ( !v8 )
                {
                  LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(0xFFFFFFFFLL);
                  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = LanguageConfigList;
                  if ( !LanguageConfigList )
                  {
                    v12 = -1073741801;
                    goto LABEL_12;
                  }
                  *a2 = LanguageConfigList;
                }
                v30 = RtlpMuiRegConfigListAddLanguage(v3 + 24, v3 + 64);
                v8 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
                v4 = 0;
                v12 = v30;
                if ( v30 >= 0 )
                  *a2 = v8;
              }
            }
          }
          goto LABEL_7;
        }
      }
LABEL_8:
      if ( v12 == -2147483622 )
      {
        v12 = v4;
        goto LABEL_10;
      }
      v7 = *(HANDLE *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
    }
    if ( v10 != -2147483622 )
      goto LABEL_10;
LABEL_7:
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = ++v9;
    goto LABEL_8;
  }
  v12 = -1073741811;
LABEL_10:
  if ( !v8 && v12 != -1073741811 )
  {
LABEL_12:
    v13 = RtlpMuiRegCreateLanguageConfigList(1LL);
    LOWORD(v4) = 0;
    *a2 = v13;
    v8 = v13;
    if ( !v13 )
      v12 = -1073741801;
  }
  if ( v12 < 0 && v8 )
    *(_WORD *)(v8 + 4) = v4;
  return (unsigned int)v12;
}
