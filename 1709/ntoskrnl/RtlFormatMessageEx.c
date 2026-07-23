/*
 * XREFs of RtlFormatMessageEx @ 0x14071F1A4
 * Callers:
 *     PiGetDeviceRegProperty @ 0x1405573EC (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x1406BF5A8 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x14071F150 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1400DEF40 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x1400FB3CC (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

NTSTATUS __cdecl RtlFormatMessageEx(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength,
        PPARSE_MESSAGE_CONTEXT ParseContext)
{
  va_list *v10; // r10
  unsigned int v11; // r13d
  BOOLEAN v13; // r14
  unsigned int v14; // r11d
  PWSTR v15; // r8
  PWSTR v16; // rbx
  ULONG v17; // r9d
  signed int v18; // r12d
  unsigned int v19; // esi
  PWSTR v20; // rdi
  WCHAR v21; // ax
  WCHAR v22; // cx
  PWSTR v23; // rdx
  WCHAR v24; // dx
  int v25; // r14d
  int v26; // ecx
  int v27; // r14d
  int v28; // ecx
  int v29; // r14d
  int v30; // edi
  int v31; // esi
  __int64 v32; // r14
  PWSTR v33; // r15
  NTSTRSAFE_PWSTR v34; // r8
  char v35; // dl
  WCHAR v36; // cx
  unsigned int v37; // eax
  int v38; // ecx
  NTSTATUS v39; // eax
  __int16 v40; // dx
  char *v41; // rcx
  unsigned __int16 v42; // ax
  int v43; // edi
  __int64 v44; // rdx
  signed __int64 v45; // r8
  __int16 v46; // ax
  unsigned __int16 v47; // ax
  signed __int64 v48; // r8
  __int16 v49; // ax
  char *v50; // rax
  __int16 v51; // ax
  __int64 v52; // rcx
  __int64 v53; // rax
  wchar_t *v54; // r9
  va_list v55; // rcx
  va_list v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // r11d
  __int64 v60; // rax
  PWSTR v61; // rdx
  __int16 v62; // ax
  PWSTR v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  _WORD *v66; // rdi
  _WORD *v67; // rbx
  PULONG v69; // rcx
  __int64 v70; // [rsp+30h] [rbp-D0h]
  unsigned int v73; // [rsp+54h] [rbp-ACh]
  PWSTR v74; // [rsp+58h] [rbp-A8h]
  unsigned int v75; // [rsp+60h] [rbp-A0h]
  va_list *v76; // [rsp+68h] [rbp-98h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-88h] BYREF
  NTSTRSAFE_PWSTR v79; // [rsp+80h] [rbp-80h] BYREF
  PWSTR v80; // [rsp+88h] [rbp-78h]
  PWSTR v81; // [rsp+90h] [rbp-70h]
  PULONG v82; // [rsp+98h] [rbp-68h]
  _QWORD v83[200]; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest; // [rsp+6E0h] [rbp+5E0h] BYREF
  _WORD v85[30]; // [rsp+6E2h] [rbp+5E2h] BYREF
  wchar_t v86[9]; // [rsp+71Eh] [rbp+61Eh] BYREF

  v10 = Arguments;
  v11 = 0;
  v13 = IgnoreInserts;
  v14 = 0;
  v15 = Buffer;
  v82 = ReturnLength;
  v16 = Buffer;
  v17 = MaximumWidth;
  v76 = Arguments;
  v80 = Buffer;
  v73 = 0;
  v18 = Length >> 1;
LABEL_2:
  v19 = 0;
  v75 = 0;
LABEL_3:
  v20 = 0LL;
  v74 = 0LL;
  while ( 1 )
  {
    v21 = *MessageFormat;
    if ( !*MessageFormat )
      break;
    if ( v21 != 37 )
    {
      ++MessageFormat;
      if ( v21 == 13 )
      {
        if ( *MessageFormat != 10 )
          goto LABEL_107;
      }
      else
      {
        if ( v21 != 10 )
        {
LABEL_109:
          if ( --v18 < 0 )
            return -2147483643;
          *v16 = v21;
          if ( v21 == 32 )
            v20 = v16;
          ++v16;
          ++v19;
          v74 = v20;
          goto LABEL_113;
        }
        if ( *MessageFormat != 13 )
        {
LABEL_107:
          if ( !v17 )
          {
            v18 -= 2;
            if ( v18 < 0 )
              return -2147483643;
            *(_DWORD *)v16 = 655373;
            v16 += 2;
            goto LABEL_2;
          }
          v20 = v16;
          v21 = 32;
          goto LABEL_109;
        }
      }
      ++MessageFormat;
      goto LABEL_107;
    }
    v22 = MessageFormat[1];
    v23 = v16;
    v81 = v16;
    if ( (unsigned __int16)(v22 - 49) > 8u )
    {
      switch ( v22 )
      {
        case 0x30u:
          goto LABEL_136;
        case 0u:
          return -1073741811;
        case 0x72u:
          if ( --v18 < 0 )
            return -2147483643;
          *v16++ = 13;
          MessageFormat += 2;
LABEL_99:
          v74 = 0LL;
          v20 = 0LL;
          v19 = 0;
          goto LABEL_113;
        case 0x6Eu:
          v18 -= 2;
          if ( v18 < 0 )
            return -2147483643;
          *(_DWORD *)v16 = 655373;
          v16 += 2;
          MessageFormat += 2;
          goto LABEL_99;
        case 0x74u:
          if ( --v18 < 0 )
            return -2147483643;
          if ( (v19 & 7) != 0 )
            v19 = (v19 + 7) & 0xFFFFFFF8;
          else
            v19 += 8;
          v74 = v16;
          *v16 = 9;
          v20 = v16;
          goto LABEL_96;
        case 0x62u:
          if ( --v18 < 0 )
            return -2147483643;
          v74 = v16;
          *v16 = 32;
          v20 = v16;
          goto LABEL_96;
      }
      if ( v13 )
      {
        v18 -= 2;
        if ( v18 < 0 )
          return -2147483643;
        *v16 = 37;
        v16[1] = MessageFormat[1];
        v16 += 2;
      }
      else
      {
        if ( --v18 < 0 )
          return -2147483643;
        *v16 = v22;
LABEL_96:
        ++v16;
      }
      MessageFormat += 2;
      goto LABEL_98;
    }
    v24 = MessageFormat[2];
    MessageFormat += 2;
    v25 = v22 - 48;
    if ( (unsigned __int16)(v24 - 48) <= 9u )
    {
      v26 = 5 * v25;
      ++MessageFormat;
      v27 = v24 - 48;
      v24 = *MessageFormat;
      v25 = v27 + 2 * v26;
      if ( (unsigned __int16)(*MessageFormat - 48) <= 9u )
      {
        v28 = 5 * v25;
        ++MessageFormat;
        v29 = v24 - 48;
        v24 = *MessageFormat;
        v25 = v29 + 2 * v28;
        if ( (unsigned __int16)(*MessageFormat - 48) <= 9u )
          return -1073741811;
      }
    }
    v30 = v25;
    v31 = v25;
    v32 = (unsigned int)(v25 - 1);
    if ( v24 == 33 )
    {
      v33 = MessageFormat + 1;
      v34 = v85;
      ppszDestEnd = v85;
      pszDest = 37;
      v35 = 0;
      v36 = *v33;
      if ( *v33 != 33 )
      {
        while ( v36 )
        {
          if ( v34 >= v86 )
            break;
          if ( v36 == 42 )
          {
            v37 = v11++;
            if ( v37 > 1 )
              break;
          }
          ++v33;
          *v34++ = v36;
          ppszDestEnd = v34;
          v36 = *v33;
          if ( *v33 == 33 )
            goto LABEL_17;
        }
        return -1073741811;
      }
LABEL_17:
      MessageFormat = v33 + 1;
      *v34 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
      v34 = ppszDestEnd;
      v35 = 1;
      v10 = v76;
      v14 = v73;
    }
    if ( !IgnoreInserts )
    {
      if ( !v10 || (unsigned int)v32 + v11 >= 0xC8 )
        return -1073741811;
      if ( !ArgumentsAreAnsi )
        goto LABEL_56;
      v40 = *(v34 - 1);
      v41 = (char *)(v34 - 1);
      if ( v40 == 99 )
      {
        v42 = *(v34 - 2) - 104;
        if ( v42 > 0xFu || (v43 = 32785, !_bittest(&v43, v42)) )
        {
          v44 = 3LL;
          v45 = (char *)L"hc" - v41;
          while ( v44 != -2147483643 )
          {
            v46 = *(_WORD *)&v41[v45];
            if ( !v46 )
              break;
            *(_WORD *)v41 = v46;
            v41 += 2;
            if ( !--v44 )
            {
              *((_WORD *)v41 - 1) = 0;
              goto LABEL_56;
            }
          }
LABEL_48:
          v50 = v41 - 2;
          if ( v44 )
            v50 = v41;
          *(_WORD *)v50 = 0;
          goto LABEL_56;
        }
      }
      else
      {
        v43 = 32785;
      }
      if ( v40 == 115 )
      {
        v47 = *(v34 - 2) - 104;
        if ( v47 > 0xFu || !_bittest(&v43, v47) )
        {
          v44 = 3LL;
          v48 = (char *)L"hs" - v41;
          do
          {
            if ( v44 == -2147483643 )
              break;
            v49 = *(_WORD *)&v41[v48];
            if ( !v49 )
              break;
            *(_WORD *)v41 = v49;
            v41 += 2;
            --v44;
          }
          while ( v44 );
          goto LABEL_48;
        }
      }
      if ( v40 == 83 )
      {
        v51 = 115;
      }
      else
      {
        if ( v40 != 67 )
          goto LABEL_56;
        v51 = 99;
      }
      *(_WORD *)v41 = v51;
LABEL_56:
      if ( (unsigned int)v32 >= v14 )
      {
        do
        {
          v52 = v14;
          if ( ArgumentsAreAnArray )
          {
            v53 = (__int64)*v10++;
          }
          else
          {
            *v10 += 8;
            v53 = *((_QWORD *)*v10 - 1);
          }
          ++v14;
          v83[v52] = v53;
        }
        while ( v14 <= (unsigned int)v32 );
        v73 = v14;
        v76 = v10;
      }
      v54 = (wchar_t *)v83[v32];
      v55 = 0LL;
      ppszDestEnd = v54;
      v56 = 0LL;
      if ( v11 )
      {
        if ( ArgumentsAreAnArray )
        {
          v56 = *v10;
          v57 = v14++;
          ++v10;
          v73 = v14;
          v76 = v10;
          v83[v57] = v56;
        }
        else
        {
          *v10 += 8;
          v56 = (va_list)*((_QWORD *)*v10 - 1);
        }
        if ( v11 > 1 )
        {
          if ( ArgumentsAreAnArray )
          {
            v55 = *v10;
            v58 = v14;
            v59 = v14 + 1;
            v76 = v10 + 1;
          }
          else
          {
            *v10 += 8;
            v55 = (va_list)*((_QWORD *)*v10 - 1);
            v58 = v14;
            v59 = v14 + 1;
          }
          v73 = v59;
          v83[v58] = v55;
        }
      }
      v11 = 0;
      if ( RtlStringCchPrintfExW(v16, v18, &v79, 0LL, 0, &pszDest, v54, v56, v55) < 0 )
        return -2147483643;
      goto LABEL_72;
    }
    if ( v35 == 1 )
      goto LABEL_26;
    v38 = pszDest - aS_1[0];
    if ( pszDest == aS_1[0] )
    {
      v38 = v85[0] - aS_1[1];
      if ( v85[0] == aS_1[1] )
        v38 = v85[1] - aS_1[2];
    }
    if ( !v38 )
    {
LABEL_26:
      LODWORD(v70) = v30;
      v11 = 0;
      v39 = RtlStringCchPrintfExW(v16, v18, &v79, 0LL, 0, L"%%%u", v70);
    }
    else
    {
      LODWORD(v70) = v31;
      v11 = 0;
      v39 = RtlStringCchPrintfExW(v16, v18, &v79, 0LL, 0, L"%%%u!%s!", v70, v85);
    }
    if ( v39 < 0 )
      return -2147483643;
LABEL_72:
    v60 = v79 - v16;
    v18 -= v60;
    if ( v18 < 0 )
      return -2147483643;
    v20 = v74;
    v19 = v75;
    v23 = v81;
    v10 = v76;
    v14 = v73;
    v15 = v80;
    v17 = MaximumWidth;
    v13 = IgnoreInserts;
    v16 += (int)v60;
LABEL_98:
    if ( !v23 )
      goto LABEL_99;
    v19 += v16 - v23;
LABEL_113:
    v75 = v19;
    if ( v17 - 1 <= 0xFFFFFFFD && v19 >= v17 )
    {
      if ( v20 )
      {
        v61 = v20;
        do
        {
          if ( *v61 != 32 && *v61 != 9 )
            break;
          ++v61;
        }
        while ( v61 != v16 );
        if ( v20 > v15 )
        {
          do
          {
            v62 = *(v20 - 1);
            v63 = v20 - 1;
            if ( v62 != 32 && v62 != 9 )
              break;
            --v20;
          }
          while ( v63 > v15 );
        }
        v64 = v61 - v20;
        if ( (_DWORD)v64 == 1 )
        {
          if ( --v18 >= 0 )
            goto LABEL_129;
          return -2147483643;
        }
        if ( (unsigned int)v64 > 2 )
          v18 = v64 + v18 - 2;
LABEL_129:
        v65 = v16 - v61;
        v19 = v65;
        v75 = v65;
        memmove(v20 + 2, v61, 2 * v65);
        v10 = v76;
        v14 = v73;
        v15 = v80;
        v17 = MaximumWidth;
        *v20 = 13;
        v66 = v20 + 1;
        *v66 = 10;
        v67 = &v66[(unsigned int)v65];
      }
      else
      {
        v18 -= 2;
        if ( v18 < 0 )
          return -2147483643;
        *v16 = 13;
        v19 = 0;
        v67 = v16 + 1;
        v75 = 0;
        *v67 = 10;
      }
      v16 = v67 + 1;
      goto LABEL_3;
    }
  }
LABEL_136:
  if ( v18 < 1 )
    return -2147483643;
  v69 = v82;
  *v16 = 0;
  if ( v69 )
    *v69 = 2 * (((char *)v16 - (char *)v15 + 2) >> 1);
  return 0;
}
