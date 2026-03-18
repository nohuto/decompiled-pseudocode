/*
 * XREFs of AslpEnvResolveVars @ 0x14061ED10
 * Callers:
 *     AslEnvExpandStrings2 @ 0x14061EB74 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140161C60 (RtlStringCchCatW.c)
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        NTSTRSAFE_PCWSTR pszSrc,
        unsigned int a2,
        wchar_t *a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned int *a7)
{
  unsigned int v7; // esi
  int v9; // ebx
  int v10; // edi
  unsigned int v11; // ebp
  unsigned __int64 v12; // r14
  const wchar_t *v13; // r9
  unsigned int v14; // ecx
  int v15; // eax
  unsigned __int64 i; // rbx
  unsigned __int16 v17; // r10
  size_t v18; // rdi
  unsigned int v19; // esi
  size_t v20; // rdx
  wchar_t *v21; // rax
  wchar_t v22; // cx
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  unsigned int v26; // ebx
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  int v29; // r8d
  NTSTATUS v30; // eax
  __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+28h] [rbp-40h]
  unsigned int v34; // [rsp+78h] [rbp+10h]

  v34 = a2;
  v7 = a4;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = pszSrc;
  do
  {
    if ( v9 )
      goto LABEL_34;
    v14 = dword_140398610[6 * v12];
    if ( a2 > v14 )
    {
      v15 = wcsnicmp(v13, *(const wchar_t **)(0x140000000LL + 24 * v12 + 3769856), v14);
      a2 = v34;
      if ( v15 )
        goto LABEL_13;
      v11 = v34 + *(_DWORD *)(0x140000014LL + 24 * v12 + 3769856) - *(_DWORD *)(0x140000010LL + 24 * v12 + 3769856);
      if ( v11 > v7 )
      {
        v19 = -1073741789;
LABEL_26:
        *a7 = v11;
        return v19;
      }
      if ( v12 )
      {
        if ( v10 )
        {
LABEL_12:
          v9 = 1;
LABEL_13:
          v13 = pszSrc;
          goto LABEL_14;
        }
      }
      else
      {
        for ( i = 0LL; i < 14; i += 2LL )
        {
          v17 = a6;
          if ( *(_WORD *)((char *)&unk_1403992F0 + i * 8) == a5 && *(_WORD *)((char *)&unk_1403992F2 + i * 8) == a6 )
          {
            v18 = v7;
            v19 = 0;
            if ( v18 - 1 > 0x7FFFFFFE )
              v19 = -1073741811;
            if ( (v19 & 0x80000000) != 0 )
            {
              if ( v18 )
                *a3 = 0;
            }
            else
            {
              v20 = v18;
              v21 = a3;
              v19 = 0;
              if ( !v18 )
                goto LABEL_35;
              while ( 2147483646 - v18 + v20 )
              {
                v22 = *(wchar_t *)((char *)v21 + (char *)L"%systemroot%" - (char *)a3);
                if ( !v22 )
                  break;
                *v21++ = v22;
                if ( !--v20 )
                  goto LABEL_35;
              }
              if ( !v20 )
              {
LABEL_35:
                --v21;
                v19 = -2147483643;
              }
              *v21 = 0;
            }
            if ( (v19 & 0x80000000) != 0 )
            {
              LODWORD(v31) = v19;
              v29 = 940;
              goto LABEL_49;
            }
            v24 = RtlStringCchCatW(a3, v18, (&off_1403992F8)[i]);
            v19 = v24;
            if ( v24 < 0 )
            {
              LODWORD(v31) = v24;
              AslLogCallPrintf(
                1,
                (unsigned int)"AslpEnvResolveVars",
                946,
                (unsigned int)"RtlStringCchCatW failed [%x]",
                v31);
              return v19;
            }
            v25 = RtlStringCchCatW(a3, v18, &pszSrc[*(unsigned int *)(0x140000010LL + 24 * v12 + 3769856)]);
            v19 = v25;
            if ( v25 < 0 )
            {
              LODWORD(v31) = v25;
              AslLogCallPrintf(
                1,
                (unsigned int)"AslpEnvResolveVars",
                952,
                (unsigned int)"RtlStringCchCatW failed [%x]",
                v31);
              return v19;
            }
            v7 = a4;
            v17 = a6;
            v10 = 1;
          }
        }
        if ( v10 )
        {
          a2 = v34;
          goto LABEL_12;
        }
        LODWORD(v32) = v17;
        LODWORD(v31) = a5;
        AslLogCallPrintf(
          1,
          (unsigned int)"AslpEnvResolveVars",
          963,
          (unsigned int)"Invalid combination of Host/Current processor architectures passed to AslpEnvResolveVars Host: %x4 Current: %x4",
          v31,
          v32);
      }
      v26 = v7;
      v27 = RtlStringCchCopyW(a3, v7, *(NTSTRSAFE_PCWSTR *)(0x140000008LL + 24 * v12 + 3769856));
      v19 = v27;
      if ( v27 < 0 )
      {
        LODWORD(v31) = v27;
        v29 = 980;
        goto LABEL_49;
      }
      v28 = RtlStringCchCatW(a3, v26, &pszSrc[*(unsigned int *)(0x140000010LL + 24 * v12 + 3769856)]);
      v19 = v28;
      if ( v28 < 0 )
      {
        LODWORD(v31) = v28;
        AslLogCallPrintf(1, (unsigned int)"AslpEnvResolveVars", 986, (unsigned int)"RtlStringCchCatW failed [%x]", v31);
        return v19;
      }
      v7 = a4;
      a2 = v34;
      goto LABEL_12;
    }
LABEL_14:
    ++v12;
  }
  while ( v12 < 4 );
  if ( v9 )
    goto LABEL_34;
  v11 = a2;
  if ( a2 > v7 )
  {
    v19 = -1073741789;
    *a7 = a2;
    return v19;
  }
  v30 = RtlStringCchCopyW(a3, v7, v13);
  v19 = v30;
  if ( v30 >= 0 )
  {
LABEL_34:
    v19 = 0;
    goto LABEL_26;
  }
  LODWORD(v31) = v30;
  v29 = 1018;
LABEL_49:
  AslLogCallPrintf(1, (unsigned int)"AslpEnvResolveVars", v29, (unsigned int)"RtlStringCchCopyW failed [%x]", v31);
  return v19;
}
