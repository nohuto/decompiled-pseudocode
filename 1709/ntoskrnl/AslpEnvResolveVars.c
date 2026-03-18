/*
 * XREFs of AslpEnvResolveVars @ 0x140542880
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1405426EC (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1400DF0FC (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1400F9E18 (RtlStringCchCatW.c)
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        NTSTRSAFE_PCWSTR pszSrc,
        unsigned int a2,
        wchar_t *a3,
        unsigned int a4,
        __int16 a5,
        __int16 a6,
        unsigned int *a7)
{
  unsigned int v7; // esi
  int v9; // ebx
  int v10; // edi
  unsigned int v11; // ebp
  __int64 v12; // r14
  const wchar_t *v13; // r9
  unsigned int v14; // ecx
  int v15; // eax
  unsigned __int64 i; // rbx
  size_t v17; // rdi
  NTSTATUS v18; // esi
  size_t v19; // rdx
  wchar_t *v20; // rax
  wchar_t v21; // cx
  unsigned int v23; // ebx
  const char *v24; // r9
  int v25; // r8d
  unsigned int v27; // [rsp+78h] [rbp+10h]

  v27 = a2;
  v7 = a4;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = pszSrc;
  while ( 1 )
  {
    if ( v9 )
      goto LABEL_34;
    v14 = dword_140354970[6 * v12];
    if ( a2 <= v14 )
      goto LABEL_14;
    v15 = wcsnicmp(v13, *(const wchar_t **)(0x140000000LL + 24 * v12 + 3492192), v14);
    a2 = v27;
    if ( !v15 )
      break;
LABEL_13:
    v13 = pszSrc;
LABEL_14:
    if ( (unsigned __int64)++v12 >= 4 )
    {
      if ( v9 )
        goto LABEL_34;
      v11 = a2;
      if ( a2 > v7 )
      {
        v18 = -1073741789;
        *a7 = a2;
        return (unsigned int)v18;
      }
      v18 = RtlStringCchCopyW(a3, v7, v13);
      if ( v18 >= 0 )
      {
LABEL_34:
        v18 = 0;
        goto LABEL_26;
      }
      v25 = 1014;
LABEL_49:
      v24 = "RtlStringCchCopyW failed [%x]";
      goto LABEL_51;
    }
  }
  v11 = v27 + *(_DWORD *)(0x140000014LL + 24 * v12 + 3492192) - *(_DWORD *)(0x140000010LL + 24 * v12 + 3492192);
  if ( v11 > v7 )
  {
    v18 = -1073741789;
LABEL_26:
    *a7 = v11;
    return (unsigned int)v18;
  }
  if ( v12 )
  {
    if ( v10 )
    {
LABEL_12:
      v9 = 1;
      goto LABEL_13;
    }
  }
  else
  {
    for ( i = 0LL; i < 14; i += 2LL )
    {
      if ( *(_WORD *)((char *)&unk_140355910 + i * 8) == a5 && *(_WORD *)((char *)&unk_140355912 + i * 8) == a6 )
      {
        v17 = v7;
        v18 = 0;
        if ( v17 - 1 > 0x7FFFFFFE )
          v18 = -1073741811;
        if ( v18 < 0 )
        {
          if ( v17 )
            *a3 = 0;
        }
        else
        {
          v19 = v17;
          v20 = a3;
          v18 = 0;
          if ( !v17 )
            goto LABEL_35;
          while ( 2147483646 - v17 + v19 )
          {
            v21 = *(wchar_t *)((char *)v20 + (char *)L"%systemroot%" - (char *)a3);
            if ( !v21 )
              break;
            *v20++ = v21;
            if ( !--v19 )
              goto LABEL_35;
          }
          if ( !v19 )
          {
LABEL_35:
            --v20;
            v18 = -2147483643;
          }
          *v20 = 0;
        }
        if ( v18 < 0 )
        {
          v25 = 936;
          goto LABEL_49;
        }
        v18 = RtlStringCchCatW(a3, v17, (&off_140355918)[i]);
        if ( v18 < 0 )
        {
          v24 = "RtlStringCchCatW failed [%x]";
          v25 = 942;
          goto LABEL_51;
        }
        v18 = RtlStringCchCatW(a3, v17, &pszSrc[*(unsigned int *)(0x140000010LL + 24 * v12 + 3492192)]);
        if ( v18 < 0 )
        {
          v24 = "RtlStringCchCatW failed [%x]";
          v25 = 948;
          goto LABEL_51;
        }
        v7 = a4;
        v10 = 1;
      }
    }
    if ( v10 )
    {
      a2 = v27;
      goto LABEL_12;
    }
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpEnvResolveVars",
      959,
      (unsigned int)"Invalid combination of Host/Current processor architectures passed to AslpEnvResolveVars Host: %x4 Current: %x4");
  }
  v23 = v7;
  v18 = RtlStringCchCopyW(a3, v7, *(NTSTRSAFE_PCWSTR *)(0x140000008LL + 24 * v12 + 3492192));
  if ( v18 < 0 )
  {
    v25 = 976;
    goto LABEL_49;
  }
  v18 = RtlStringCchCatW(a3, v23, &pszSrc[*(unsigned int *)(0x140000010LL + 24 * v12 + 3492192)]);
  if ( v18 >= 0 )
  {
    v7 = a4;
    a2 = v27;
    goto LABEL_12;
  }
  v24 = "RtlStringCchCatW failed [%x]";
  v25 = 982;
LABEL_51:
  AslLogCallPrintf(1, (unsigned int)"AslpEnvResolveVars", v25, (_DWORD)v24);
  return (unsigned int)v18;
}
