/*
 * XREFs of AslpEnvResolveVars @ 0x1405BBB80
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1405BB9F0 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCatW @ 0x14006DAE4 (RtlStringCchCatW.c)
 *     RtlStringCchCopyW @ 0x1400815D0 (RtlStringCchCopyW.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
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
  __int64 v12; // r12
  const wchar_t *v13; // r9
  unsigned int v14; // ecx
  unsigned __int64 i; // rbx
  size_t v16; // rdi
  NTSTATUS v17; // esi
  size_t v18; // rdx
  wchar_t *v19; // rax
  wchar_t v20; // cx
  unsigned int v22; // ebx
  const char *v23; // r9
  int v24; // r8d

  v7 = a4;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = pszSrc;
  while ( 1 )
  {
    if ( v9 )
      goto LABEL_33;
    v14 = dword_14033D280[6 * v12];
    if ( a2 <= v14 )
      goto LABEL_13;
    if ( !wcsnicmp(v13, *(const wchar_t **)(0x140000000LL + 24 * v12 + 3396208), v14) )
      break;
LABEL_12:
    v13 = pszSrc;
LABEL_13:
    if ( (unsigned __int64)++v12 >= 4 )
    {
      if ( v9 )
        goto LABEL_33;
      v11 = a2;
      if ( a2 > v7 )
      {
        v17 = -1073741789;
        *a7 = a2;
        return (unsigned int)v17;
      }
      v17 = RtlStringCchCopyW(a3, v7, v13);
      if ( v17 >= 0 )
      {
LABEL_33:
        v17 = 0;
        goto LABEL_25;
      }
      v24 = 1011;
LABEL_48:
      v23 = "RtlStringCchCopyW failed [%x]";
      goto LABEL_50;
    }
  }
  v11 = a2 + *(_DWORD *)(0x140000014LL + 24 * v12 + 3396208) - *(_DWORD *)(0x140000010LL + 24 * v12 + 3396208);
  if ( v11 > v7 )
  {
    v17 = -1073741789;
LABEL_25:
    *a7 = v11;
    return (unsigned int)v17;
  }
  if ( v12 )
  {
    if ( v10 )
    {
LABEL_11:
      v9 = 1;
      goto LABEL_12;
    }
  }
  else
  {
    for ( i = 0LL; i < 14; i += 2LL )
    {
      if ( *(_WORD *)((char *)&unk_14033DBE0 + i * 8) == a5 && *(_WORD *)((char *)&unk_14033DBE2 + i * 8) == a6 )
      {
        v16 = v7;
        v17 = 0;
        if ( v16 - 1 > 0x7FFFFFFE )
          v17 = -1073741811;
        if ( v17 < 0 )
        {
          if ( v16 )
            *a3 = 0;
        }
        else
        {
          v18 = v16;
          v19 = a3;
          v17 = 0;
          if ( !v16 )
            goto LABEL_34;
          while ( 2147483646 - v16 + v18 )
          {
            v20 = *(wchar_t *)((char *)v19 + (char *)L"%systemroot%" - (char *)a3);
            if ( !v20 )
              break;
            *v19++ = v20;
            if ( !--v18 )
              goto LABEL_34;
          }
          if ( !v18 )
          {
LABEL_34:
            --v19;
            v17 = -2147483643;
          }
          *v19 = 0;
        }
        if ( v17 < 0 )
        {
          v24 = 933;
          goto LABEL_48;
        }
        v17 = RtlStringCchCatW(a3, v16, (&off_14033DBE8)[i]);
        if ( v17 < 0 )
        {
          v23 = "RtlStringCchCatW failed [%x]";
          v24 = 939;
          goto LABEL_50;
        }
        v17 = RtlStringCchCatW(a3, v16, &pszSrc[*(unsigned int *)(0x140000010LL + 24 * v12 + 3396208)]);
        if ( v17 < 0 )
        {
          v23 = "RtlStringCchCatW failed [%x]";
          v24 = 945;
          goto LABEL_50;
        }
        v7 = a4;
        v10 = 1;
      }
    }
    if ( v10 )
      goto LABEL_11;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpEnvResolveVars",
      956,
      (unsigned int)"Invalid combination of Host/Current processor architectures passed to AslpEnvResolveVars Host: %x4 Current: %x4");
  }
  v22 = v7;
  v17 = RtlStringCchCopyW(a3, v7, *(NTSTRSAFE_PCWSTR *)(0x140000008LL + 24 * v12 + 3396208));
  if ( v17 < 0 )
  {
    v24 = 973;
    goto LABEL_48;
  }
  v17 = RtlStringCchCatW(a3, v22, &pszSrc[*(unsigned int *)(0x140000010LL + 24 * v12 + 3396208)]);
  if ( v17 >= 0 )
  {
    v7 = a4;
    goto LABEL_11;
  }
  v23 = "RtlStringCchCatW failed [%x]";
  v24 = 979;
LABEL_50:
  AslLogCallPrintf(1, (unsigned int)"AslpEnvResolveVars", v24, (_DWORD)v23);
  return (unsigned int)v17;
}
