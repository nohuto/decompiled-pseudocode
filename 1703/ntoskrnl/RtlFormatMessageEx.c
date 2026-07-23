/*
 * XREFs of RtlFormatMessageEx @ 0x1406E73C4
 * Callers:
 *     PiGetDeviceRegProperty @ 0x14055B3C0 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x1406938D8 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x1406E7370 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x1400819F0 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
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
  BOOLEAN v12; // r13
  unsigned int v13; // r11d
  PWSTR v14; // r8
  PWSTR v15; // rbx
  ULONG v16; // r9d
  signed int v17; // r12d
  unsigned int v18; // r14d
  PWSTR v19; // rsi
  WCHAR v20; // ax
  WCHAR v21; // cx
  PWSTR v22; // rdx
  WCHAR v23; // dx
  int v24; // esi
  int v25; // ecx
  int v26; // esi
  int v27; // ecx
  int v28; // esi
  int v29; // r14d
  int v30; // r15d
  unsigned int v31; // r13d
  __int64 v32; // rsi
  PWSTR v33; // rdi
  NTSTRSAFE_PWSTR v34; // rdx
  char v35; // r8
  WCHAR v36; // cx
  unsigned int v37; // eax
  int v38; // ecx
  NTSTATUS v39; // eax
  __int16 v40; // r8
  char *v41; // rcx
  unsigned __int16 v42; // ax
  int v43; // r14d
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
  va_list v55; // r8
  va_list v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // r11d
  __int64 v60; // rax
  PWSTR v61; // rdx
  __int16 v62; // ax
  PWSTR v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  _WORD *v66; // rsi
  _WORD *v67; // rbx
  __int64 v69; // [rsp+30h] [rbp-D0h]
  unsigned int v72; // [rsp+54h] [rbp-ACh]
  PWSTR v73; // [rsp+58h] [rbp-A8h]
  unsigned int v74; // [rsp+60h] [rbp-A0h]
  va_list *v75; // [rsp+68h] [rbp-98h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-88h] BYREF
  NTSTRSAFE_PWSTR v78; // [rsp+80h] [rbp-80h] BYREF
  PWSTR v79; // [rsp+88h] [rbp-78h]
  PWSTR v80; // [rsp+90h] [rbp-70h]
  PULONG v81; // [rsp+98h] [rbp-68h]
  _QWORD v82[200]; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest; // [rsp+6E0h] [rbp+5E0h] BYREF
  _WORD v84[30]; // [rsp+6E2h] [rbp+5E2h] BYREF
  wchar_t v85[9]; // [rsp+71Eh] [rbp+61Eh] BYREF

  v10 = Arguments;
  v12 = IgnoreInserts;
  v81 = ReturnLength;
  v13 = 0;
  v14 = Buffer;
  v15 = Buffer;
  v16 = MaximumWidth;
  v75 = Arguments;
  v79 = Buffer;
  v72 = 0;
  v17 = Length >> 1;
LABEL_2:
  v18 = 0;
  v74 = 0;
LABEL_3:
  v19 = 0LL;
  v73 = 0LL;
  while ( 1 )
  {
    v20 = *MessageFormat;
    if ( !*MessageFormat )
      break;
    if ( v20 != 37 )
    {
      ++MessageFormat;
      if ( v20 == 13 )
      {
        if ( *MessageFormat != 10 )
          goto LABEL_107;
      }
      else
      {
        if ( v20 != 10 )
        {
LABEL_109:
          if ( --v17 < 0 )
            return -2147483643;
          *v15 = v20;
          if ( v20 == 32 )
            v19 = v15;
          ++v15;
          ++v18;
          v73 = v19;
          goto LABEL_113;
        }
        if ( *MessageFormat != 13 )
        {
LABEL_107:
          if ( !v16 )
          {
            v17 -= 2;
            if ( v17 < 0 )
              return -2147483643;
            *(_DWORD *)v15 = 655373;
            v15 += 2;
            goto LABEL_2;
          }
          v19 = v15;
          v20 = 32;
          goto LABEL_109;
        }
      }
      ++MessageFormat;
      goto LABEL_107;
    }
    v21 = MessageFormat[1];
    v22 = v15;
    v80 = v15;
    if ( (unsigned __int16)(v21 - 49) > 8u )
    {
      switch ( v21 )
      {
        case 0x30u:
          goto LABEL_136;
        case 0u:
          return -1073741811;
        case 0x72u:
          if ( --v17 < 0 )
            return -2147483643;
          *v15++ = 13;
          MessageFormat += 2;
LABEL_99:
          v19 = 0LL;
          v73 = 0LL;
          v18 = 0;
          goto LABEL_113;
        case 0x6Eu:
          v17 -= 2;
          if ( v17 < 0 )
            return -2147483643;
          *(_DWORD *)v15 = 655373;
          v15 += 2;
          MessageFormat += 2;
          goto LABEL_99;
        case 0x74u:
          if ( --v17 < 0 )
            return -2147483643;
          if ( (v18 & 7) != 0 )
            v18 = (v18 + 7) & 0xFFFFFFF8;
          else
            v18 += 8;
          v73 = v15;
          *v15 = 9;
          v19 = v15;
          goto LABEL_96;
        case 0x62u:
          if ( --v17 < 0 )
            return -2147483643;
          v73 = v15;
          *v15 = 32;
          v19 = v15;
          goto LABEL_96;
      }
      if ( v12 )
      {
        v17 -= 2;
        if ( v17 < 0 )
          return -2147483643;
        *v15 = 37;
        v15[1] = MessageFormat[1];
        v15 += 2;
      }
      else
      {
        if ( --v17 < 0 )
          return -2147483643;
        *v15 = v21;
LABEL_96:
        ++v15;
      }
      MessageFormat += 2;
      goto LABEL_98;
    }
    v23 = MessageFormat[2];
    MessageFormat += 2;
    v24 = v21 - 48;
    if ( (unsigned __int16)(v23 - 48) <= 9u )
    {
      v25 = 5 * v24;
      ++MessageFormat;
      v26 = v23 - 48;
      v23 = *MessageFormat;
      v24 = v26 + 2 * v25;
      if ( (unsigned __int16)(*MessageFormat - 48) <= 9u )
      {
        v27 = 5 * v24;
        ++MessageFormat;
        v28 = v23 - 48;
        v23 = *MessageFormat;
        v24 = v28 + 2 * v27;
        if ( (unsigned __int16)(*MessageFormat - 48) <= 9u )
          return -1073741811;
      }
    }
    v29 = v24;
    v30 = v24;
    v31 = 0;
    v32 = (unsigned int)(v24 - 1);
    if ( v23 == 33 )
    {
      v33 = MessageFormat + 1;
      v34 = v84;
      ppszDestEnd = v84;
      pszDest = 37;
      v35 = 0;
      v36 = *v33;
      if ( *v33 != 33 )
      {
        while ( v36 )
        {
          if ( v34 >= v85 )
            break;
          if ( v36 == 42 )
          {
            v37 = v31++;
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
      v10 = v75;
      v13 = v72;
    }
    if ( !IgnoreInserts )
    {
      if ( !v10 || (unsigned int)v32 + v31 >= 0xC8 )
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
      if ( (unsigned int)v32 >= v13 )
      {
        do
        {
          v52 = v13;
          if ( ArgumentsAreAnArray )
          {
            v53 = (__int64)*v10++;
          }
          else
          {
            *v10 += 8;
            v53 = *((_QWORD *)*v10 - 1);
          }
          ++v13;
          v82[v52] = v53;
        }
        while ( v13 <= (unsigned int)v32 );
        v72 = v13;
        v75 = v10;
      }
      v54 = (wchar_t *)v82[v32];
      v55 = 0LL;
      v56 = 0LL;
      ppszDestEnd = v54;
      if ( v31 )
      {
        if ( ArgumentsAreAnArray )
        {
          v55 = *v10;
          v57 = v13++;
          ++v10;
          v72 = v13;
          v75 = v10;
          v82[v57] = v55;
        }
        else
        {
          *v10 += 8;
          v55 = (va_list)*((_QWORD *)*v10 - 1);
        }
        if ( v31 > 1 )
        {
          if ( ArgumentsAreAnArray )
          {
            v56 = *v10;
            v58 = v13;
            v59 = v13 + 1;
            v75 = v10 + 1;
          }
          else
          {
            *v10 += 8;
            v56 = (va_list)*((_QWORD *)*v10 - 1);
            v58 = v13;
            v59 = v13 + 1;
          }
          v72 = v59;
          v82[v58] = v56;
        }
      }
      if ( RtlStringCchPrintfExW(v15, v17, &v78, 0LL, 0, &pszDest, v54, v55, v56) < 0 )
        return -2147483643;
      goto LABEL_72;
    }
    if ( v35 == 1 )
      goto LABEL_26;
    v38 = pszDest - aS_3[0];
    if ( pszDest == aS_3[0] )
    {
      v38 = v84[0] - aS_3[1];
      if ( v84[0] == aS_3[1] )
        v38 = v84[1] - aS_3[2];
    }
    if ( !v38 )
    {
LABEL_26:
      LODWORD(v69) = v29;
      v39 = RtlStringCchPrintfExW(v15, v17, &v78, 0LL, 0, L"%%%u", v69);
    }
    else
    {
      LODWORD(v69) = v30;
      v39 = RtlStringCchPrintfExW(v15, v17, &v78, 0LL, 0, L"%%%u!%s!", v69, v84);
    }
    if ( v39 < 0 )
      return -2147483643;
LABEL_72:
    v60 = v78 - v15;
    v17 -= v60;
    if ( v17 < 0 )
      return -2147483643;
    v19 = v73;
    v18 = v74;
    v10 = v75;
    v22 = v80;
    v13 = v72;
    v14 = v79;
    v16 = MaximumWidth;
    v12 = IgnoreInserts;
    v15 += (int)v60;
LABEL_98:
    if ( !v22 )
      goto LABEL_99;
    v18 += v15 - v22;
LABEL_113:
    v74 = v18;
    if ( v16 - 1 <= 0xFFFFFFFD && v18 >= v16 )
    {
      if ( v19 )
      {
        v61 = v19;
        do
        {
          if ( *v61 != 32 && *v61 != 9 )
            break;
          ++v61;
        }
        while ( v61 != v15 );
        if ( v19 > v14 )
        {
          do
          {
            v62 = *(v19 - 1);
            v63 = v19 - 1;
            if ( v62 != 32 && v62 != 9 )
              break;
            --v19;
          }
          while ( v63 > v14 );
        }
        v64 = v61 - v19;
        if ( (_DWORD)v64 == 1 )
        {
          if ( --v17 >= 0 )
            goto LABEL_129;
          return -2147483643;
        }
        if ( (unsigned int)v64 > 2 )
          v17 = v64 + v17 - 2;
LABEL_129:
        v65 = v15 - v61;
        v18 = v65;
        v74 = v65;
        memmove(v19 + 2, v61, 2 * v65);
        v10 = v75;
        v13 = v72;
        v14 = v79;
        v16 = MaximumWidth;
        *v19 = 13;
        v66 = v19 + 1;
        *v66 = 10;
        v67 = &v66[(unsigned int)v65];
      }
      else
      {
        v17 -= 2;
        if ( v17 < 0 )
          return -2147483643;
        *v15 = 13;
        v18 = 0;
        v67 = v15 + 1;
        v74 = 0;
        *v67 = 10;
      }
      v15 = v67 + 1;
      goto LABEL_3;
    }
  }
LABEL_136:
  if ( v17 < 1 )
    return -2147483643;
  *v15 = 0;
  if ( v81 )
    *v81 = 2 * (((char *)v15 - (char *)v14 + 2) >> 1);
  return 0;
}
