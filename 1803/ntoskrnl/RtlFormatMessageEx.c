/*
 * XREFs of RtlFormatMessageEx @ 0x140782874
 * Callers:
 *     PiGetDeviceRegProperty @ 0x1405261D8 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x140724398 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x140782820 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x14014AF24 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
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
  va_list *v10; // r11
  unsigned int v11; // r13d
  BOOLEAN v12; // r10
  ULONG v14; // r9d
  PWSTR v15; // r8
  PWSTR v16; // rbx
  signed int v17; // esi
  unsigned int v18; // r14d
  PWSTR v19; // r12
  WCHAR v20; // ax
  PWSTR v21; // rcx
  WCHAR v22; // cx
  PWSTR v23; // rdx
  WCHAR v24; // dx
  WCHAR v25; // ax
  int v26; // r14d
  int v27; // eax
  WCHAR v28; // dx
  int v29; // r15d
  __int64 v30; // r14
  PWSTR v31; // rdi
  NTSTRSAFE_PWSTR v32; // r8
  char v33; // r10
  __int16 v34; // cx
  char *v35; // rdx
  __int16 v36; // r9
  unsigned int v37; // eax
  va_list v38; // rcx
  int v39; // ecx
  NTSTATUS v40; // eax
  __int16 v41; // dx
  char *v42; // rcx
  unsigned __int16 v43; // ax
  int v44; // r9d
  __int64 v45; // rdx
  signed __int64 v46; // r8
  __int16 v47; // ax
  unsigned __int16 v48; // ax
  signed __int64 v49; // r8
  __int16 v50; // ax
  char *v51; // rax
  __int16 v52; // ax
  unsigned int v53; // r15d
  unsigned int v54; // r8d
  __int64 v55; // rax
  wchar_t *v56; // r9
  va_list v57; // r8
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // r15d
  __int64 v61; // rax
  PWSTR v62; // rdx
  __int16 v63; // ax
  PWSTR v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rbx
  _WORD *v67; // r12
  _WORD *v68; // rbx
  PULONG v70; // rdx
  __int64 v71; // [rsp+30h] [rbp-D0h]
  unsigned int v74; // [rsp+54h] [rbp-ACh]
  unsigned int v75; // [rsp+58h] [rbp-A8h]
  va_list *v76; // [rsp+60h] [rbp-A0h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+70h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v79; // [rsp+78h] [rbp-88h] BYREF
  PWSTR v80; // [rsp+80h] [rbp-80h]
  PWSTR v81; // [rsp+88h] [rbp-78h]
  PULONG v82; // [rsp+90h] [rbp-70h]
  _QWORD v83[200]; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest; // [rsp+6E0h] [rbp+5E0h] BYREF
  _WORD v85[30]; // [rsp+6E2h] [rbp+5E2h] BYREF
  char v86; // [rsp+71Eh] [rbp+61Eh] BYREF

  v10 = Arguments;
  v11 = 0;
  v12 = IgnoreInserts;
  v14 = MaximumWidth;
  v15 = Buffer;
  v82 = ReturnLength;
  v16 = Buffer;
  v76 = Arguments;
  v80 = Buffer;
  v74 = 0;
  v17 = Length >> 1;
LABEL_2:
  v18 = 0;
  v75 = 0;
LABEL_3:
  v19 = 0LL;
  while ( 1 )
  {
    v20 = *MessageFormat;
    v21 = v16;
    if ( !*MessageFormat )
      break;
    ++MessageFormat;
    if ( v20 != 37 )
    {
      if ( v20 == 13 )
      {
        if ( *MessageFormat != 10 )
          goto LABEL_114;
      }
      else
      {
        if ( v20 != 10 )
        {
LABEL_116:
          if ( --v17 < 0 )
            return -2147483643;
          *v16 = v20;
          ++v18;
          ++v16;
          if ( v20 != 32 )
            v21 = v19;
          v19 = v21;
          goto LABEL_120;
        }
        if ( *MessageFormat != 13 )
        {
LABEL_114:
          if ( !v14 )
          {
            v17 -= 2;
            if ( v17 < 0 )
              return -2147483643;
            *(_DWORD *)v16 = 655373;
            v16 += 2;
            goto LABEL_2;
          }
          v19 = v16;
          v20 = 32;
          goto LABEL_116;
        }
      }
      ++MessageFormat;
      goto LABEL_114;
    }
    v22 = *MessageFormat;
    v23 = v16;
    v81 = v16;
    if ( (unsigned __int16)(v22 - 49) > 8u )
    {
      switch ( v22 )
      {
        case 0x30u:
          goto LABEL_144;
        case 0u:
          return -1073741811;
        case 0x72u:
          if ( --v17 < 0 )
            return -2147483643;
          *v16++ = 13;
          ++MessageFormat;
LABEL_106:
          v19 = 0LL;
          v18 = 0;
          goto LABEL_120;
        case 0x6Eu:
          v17 -= 2;
          if ( v17 < 0 )
            return -2147483643;
          *(_DWORD *)v16 = 655373;
          v16 += 2;
          ++MessageFormat;
          goto LABEL_106;
        case 0x74u:
          if ( --v17 < 0 )
            return -2147483643;
          if ( (v18 & 7) != 0 )
            v18 = (v18 + 7) & 0xFFFFFFF8;
          else
            v18 += 8;
          v19 = v16;
          *v16 = 9;
          goto LABEL_103;
        case 0x62u:
          if ( --v17 < 0 )
            return -2147483643;
          v19 = v16;
          *v16 = 32;
          goto LABEL_103;
      }
      if ( v12 )
      {
        v17 -= 2;
        if ( v17 < 0 )
          return -2147483643;
        *v16 = 37;
        v16[1] = *MessageFormat;
        v16 += 2;
      }
      else
      {
        if ( --v17 < 0 )
          return -2147483643;
        *v16 = v22;
LABEL_103:
        ++v16;
      }
      ++MessageFormat;
      goto LABEL_105;
    }
    v24 = MessageFormat[1];
    ++MessageFormat;
    v25 = v24;
    v26 = v22 - 48;
    if ( v24 >= 0x30u && v24 <= 0x39u )
    {
      v27 = v24;
      v28 = MessageFormat[1];
      ++MessageFormat;
      v26 = v27 + 2 * (5 * v26 - 24);
      v25 = v28;
      if ( v28 >= 0x30u && v28 <= 0x39u )
      {
        ++MessageFormat;
        v26 = v28 + 2 * (5 * v26 - 24);
        v25 = *MessageFormat;
        if ( *MessageFormat >= 0x30u && *MessageFormat <= 0x39u )
          return -1073741811;
      }
    }
    v29 = v26;
    v30 = (unsigned int)(v26 - 1);
    if ( v25 == 33 )
    {
      v31 = MessageFormat + 1;
      v32 = v85;
      ppszDestEnd = v85;
      pszDest = 37;
      v33 = 0;
      v34 = *v31;
      if ( *v31 != 33 )
      {
        v35 = (char *)v85;
        do
        {
          v36 = v34;
          if ( !v34 )
            return -1073741811;
          if ( v35 >= &v86 )
            return -1073741811;
          if ( v34 == 42 )
          {
            v34 = 42;
            if ( v11 > 1 )
              return -1073741811;
          }
          ++v31;
          *v32 = v34;
          v37 = v11 + 1;
          v32 = (NTSTRSAFE_PWSTR)(v35 + 2);
          if ( v36 != 42 )
            v37 = v11;
          ppszDestEnd = (NTSTRSAFE_PWSTR)(v35 + 2);
          v34 = *v31;
          v35 += 2;
          v11 = v37;
        }
        while ( *v31 != 33 );
      }
      MessageFormat = v31 + 1;
      v38 = 0LL;
      *v32 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
      v32 = ppszDestEnd;
      v33 = 1;
      v10 = v76;
      v38 = 0LL;
    }
    if ( !IgnoreInserts )
    {
      if ( !v10 || (unsigned int)v30 + v11 >= 0xC8 )
        return -1073741811;
      if ( !ArgumentsAreAnsi )
        goto LABEL_63;
      v41 = *(v32 - 1);
      v42 = (char *)(v32 - 1);
      if ( v41 == 99 )
      {
        v43 = *(v32 - 2) - 104;
        if ( v43 > 0xFu || (v44 = 32785, !_bittest(&v44, v43)) )
        {
          v45 = 3LL;
          v46 = (char *)L"hc" - v42;
          do
          {
            if ( v45 == -2147483643 )
              break;
            v47 = *(_WORD *)&v42[v46];
            if ( !v47 )
              break;
            *(_WORD *)v42 = v47;
            v42 += 2;
            --v45;
          }
          while ( v45 );
          goto LABEL_54;
        }
      }
      else
      {
        v44 = 32785;
      }
      if ( v41 == 115 )
      {
        v48 = *(v32 - 2) - 104;
        if ( v48 > 0xFu || !_bittest(&v44, v48) )
        {
          v45 = 3LL;
          v49 = (char *)L"hs" - v42;
          do
          {
            if ( v45 == -2147483643 )
              break;
            v50 = *(_WORD *)&v42[v49];
            if ( !v50 )
              break;
            *(_WORD *)v42 = v50;
            v42 += 2;
            --v45;
          }
          while ( v45 );
LABEL_54:
          v51 = v42 - 2;
          if ( v45 )
            v51 = v42;
          v38 = 0LL;
          *(_WORD *)v51 = 0;
LABEL_63:
          v53 = v74;
          if ( (unsigned int)v30 >= v74 )
          {
            do
            {
              v54 = v53 + 1;
              if ( ArgumentsAreAnArray )
              {
                v55 = (__int64)*v10++;
                v83[v53] = v55;
              }
              else
              {
                *v10 += 8;
                v83[v53] = *((_QWORD *)*v10 - 1);
              }
              ++v53;
            }
            while ( v54 <= (unsigned int)v30 );
            v76 = v10;
            v38 = 0LL;
            v74 = v54;
          }
          v56 = (wchar_t *)v83[v30];
          v57 = 0LL;
          ppszDestEnd = v56;
          if ( v11 )
          {
            if ( ArgumentsAreAnArray )
            {
              v57 = *v10;
              v58 = v53++;
              ++v10;
              v74 = v53;
              v76 = v10;
              v83[v58] = v57;
            }
            else
            {
              *v10 += 8;
              v57 = (va_list)*((_QWORD *)*v10 - 1);
            }
            if ( v11 > 1 )
            {
              v59 = v53;
              v60 = v53 + 1;
              v74 = v60;
              if ( ArgumentsAreAnArray )
              {
                v38 = *v10;
                v76 = v10 + 1;
              }
              else
              {
                *v10 += 8;
                v74 = v60;
                v38 = (va_list)*((_QWORD *)*v10 - 1);
              }
              v83[v59] = v38;
            }
          }
          v11 = 0;
          if ( RtlStringCchPrintfExW(v16, v17, &v79, 0LL, 0, &pszDest, v56, v57, v38) < 0 )
            return -2147483643;
          goto LABEL_79;
        }
      }
      if ( v41 == 83 )
      {
        v52 = 115;
        goto LABEL_61;
      }
      if ( v41 == 67 )
      {
        v52 = 99;
LABEL_61:
        *(_WORD *)v42 = v52;
      }
      v38 = 0LL;
      goto LABEL_63;
    }
    if ( v33 == 1 )
      goto LABEL_32;
    v39 = pszDest - aS_1[0];
    if ( pszDest == aS_1[0] )
    {
      v39 = v85[0] - aS_1[1];
      if ( v85[0] == aS_1[1] )
        v39 = v85[1] - aS_1[2];
    }
    if ( !v39 )
    {
LABEL_32:
      LODWORD(v71) = v29;
      v11 = 0;
      v40 = RtlStringCchPrintfExW(v16, v17, &v79, 0LL, 0, L"%%%u", v71);
    }
    else
    {
      LODWORD(v71) = v29;
      v11 = 0;
      v40 = RtlStringCchPrintfExW(v16, v17, &v79, 0LL, 0, L"%%%u!%s!", v71, v85);
    }
    if ( v40 < 0 )
      return -2147483643;
LABEL_79:
    v61 = v79 - v16;
    v17 -= v61;
    if ( v17 < 0 )
      return -2147483643;
    v18 = v75;
    v10 = v76;
    v23 = v81;
    v15 = v80;
    v14 = MaximumWidth;
    v12 = IgnoreInserts;
    v16 += (int)v61;
LABEL_105:
    if ( !v23 )
      goto LABEL_106;
    v18 += v16 - v23;
LABEL_120:
    v75 = v18;
    if ( v14 && v14 != -1 && v18 >= v14 )
    {
      if ( v19 )
      {
        v62 = v19;
        do
        {
          if ( *v62 != 32 && *v62 != 9 )
            break;
          ++v62;
        }
        while ( v62 != v16 );
        if ( v19 > v15 )
        {
          do
          {
            v63 = *(v19 - 1);
            v64 = v19 - 1;
            if ( v63 != 32 && v63 != 9 )
              break;
            --v19;
          }
          while ( v64 > v15 );
        }
        v65 = v62 - v19;
        if ( (_DWORD)v65 == 1 )
        {
          if ( --v17 >= 0 )
            goto LABEL_137;
          return -2147483643;
        }
        if ( (unsigned int)v65 > 2 )
          v17 = v65 + v17 - 2;
LABEL_137:
        v66 = v16 - v62;
        v18 = v66;
        v75 = v66;
        memmove(v19 + 2, v62, 2 * v66);
        v10 = v76;
        v15 = v80;
        v14 = MaximumWidth;
        v12 = IgnoreInserts;
        *v19 = 13;
        v67 = v19 + 1;
        *v67 = 10;
        v68 = &v67[(unsigned int)v66];
      }
      else
      {
        v17 -= 2;
        if ( v17 < 0 )
          return -2147483643;
        *v16 = 13;
        v18 = 0;
        v68 = v16 + 1;
        v75 = 0;
        *v68 = 10;
      }
      v16 = v68 + 1;
      goto LABEL_3;
    }
  }
LABEL_144:
  if ( v17 < 1 )
    return -2147483643;
  v70 = v82;
  *v16 = 0;
  if ( v70 )
    *v70 = 2 * (((char *)v16 - (char *)v15 + 2) >> 1);
  return 0;
}
