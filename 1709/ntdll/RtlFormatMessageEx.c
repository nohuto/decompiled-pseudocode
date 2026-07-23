/*
 * XREFs of RtlFormatMessageEx @ 0x18006BD70
 * Callers:
 *     RtlFormatMessage @ 0x1800F5640 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x18006BCD4 (RtlStringCbCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x18006C3D8 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
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
  PPARSE_MESSAGE_CONTEXT v10; // r10
  BOOLEAN v11; // r12
  va_list *v12; // r11
  __int64 v13; // r8
  signed int v14; // r14d
  PWSTR v15; // r9
  ULONG cwSavColumn; // r15d
  PWSTR v17; // rdi
  WCHAR *v18; // rsi
  PWSTR v19; // rbx
  WCHAR v20; // ax
  PULONG v21; // rdx
  WCHAR v23; // cx
  PWSTR v24; // rdx
  __int64 v25; // rdx
  int v26; // r15d
  int v27; // r12d
  int v28; // r13d
  __int64 v29; // r15
  unsigned int v30; // r10d
  char *v31; // rdx
  char v32; // r8
  unsigned int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // rax
  char *v36; // rcx
  va_list v37; // r9
  va_list v38; // r8
  int v39; // eax
  __int64 v40; // rax
  _WORD *v41; // rbx
  __int16 v42; // cx
  PWSTR v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  SIZE_T iwDstSpace; // rax
  int v48; // ecx
  int v49; // r15d
  unsigned int v50; // eax
  __int16 v51; // r8
  char *v52; // rcx
  int v53; // r9d
  unsigned __int16 v54; // ax
  __int64 v55; // rdx
  signed __int64 v56; // r8
  __int16 v57; // ax
  int v58; // ecx
  int v59; // r15d
  int v60; // ecx
  unsigned __int16 v61; // ax
  __int64 v62; // rdx
  signed __int64 v63; // r8
  __int16 v64; // ax
  char *v65; // rax
  __int16 v66; // ax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // r12d
  WCHAR *v70; // rdx
  __int16 v71; // ax
  WCHAR *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdi
  _WORD *v75; // rsi
  _WORD *v76; // rdi
  __int64 v77; // [rsp+30h] [rbp-D0h]
  WCHAR *v80; // [rsp+58h] [rbp-A8h]
  unsigned int v81; // [rsp+68h] [rbp-98h]
  ULONG v82; // [rsp+70h] [rbp-90h]
  va_list *v83; // [rsp+78h] [rbp-88h]
  char *v85; // [rsp+88h] [rbp-78h] BYREF
  __int64 v86; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v87; // [rsp+98h] [rbp-68h]
  PWSTR v88; // [rsp+A0h] [rbp-60h]
  PWSTR v89; // [rsp+A8h] [rbp-58h]
  PWSTR v90; // [rsp+B0h] [rbp-50h]
  PULONG v91; // [rsp+B8h] [rbp-48h]
  _QWORD v92[200]; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v93; // [rsp+700h] [rbp+600h] BYREF
  _WORD v94[30]; // [rsp+702h] [rbp+602h] BYREF
  char v95; // [rsp+73Eh] [rbp+63Eh] BYREF

  v10 = ParseContext;
  v11 = IgnoreInserts;
  v12 = Arguments;
  v13 = MaximumWidth;
  v14 = Length >> 1;
  v15 = Buffer;
  v91 = ReturnLength;
  v90 = MessageFormat;
  v83 = Arguments;
  v88 = Buffer;
  v81 = 0;
  if ( ParseContext && (ParseContext->fFlags & 1) != 0 )
  {
    cwSavColumn = ParseContext->cwSavColumn;
    ParseContext->fFlags &= ~1u;
    v82 = cwSavColumn;
    v19 = &MessageFormat[ParseContext->iwSrc];
    MessageFormat = v19;
    v80 = v19;
    v17 = &Buffer[ParseContext->iwDst];
    iwDstSpace = ParseContext->iwDstSpace;
    if ( iwDstSpace == -1LL )
      v18 = 0LL;
    else
      v18 = &Buffer[iwDstSpace];
    v14 -= LODWORD(ParseContext->iwDst);
    if ( !ArgumentsAreAnArray && Arguments )
      *Arguments = ParseContext->lpvArgStart;
    if ( (ParseContext->fFlags & 2) != 0 )
    {
      ParseContext->fFlags &= ~2u;
      goto LABEL_148;
    }
  }
  else
  {
    cwSavColumn = 0;
    v17 = Buffer;
    v18 = 0LL;
    v82 = 0;
    v19 = MessageFormat;
    v80 = MessageFormat;
    if ( !ArgumentsAreAnArray && Arguments && ParseContext )
      ParseContext->lpvArgStart = *Arguments;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v20 = *v19;
      if ( !*v19 )
        goto LABEL_16;
      if ( v20 == 37 )
        break;
      ++v19;
      if ( v20 == 13 )
      {
        if ( *v19 != 10 )
          goto LABEL_22;
LABEL_21:
        ++v19;
        goto LABEL_22;
      }
      if ( v20 != 10 )
        goto LABEL_9;
      if ( *v19 == 13 )
        goto LABEL_21;
LABEL_22:
      if ( (_DWORD)v13 )
      {
        v18 = v17;
        v20 = 32;
LABEL_9:
        if ( --v14 < 0 )
          goto LABEL_65;
        *v17 = v20;
        if ( v20 == 32 )
          v18 = v17;
        ++v17;
        ++cwSavColumn;
        goto LABEL_13;
      }
      v14 -= 2;
      if ( v14 < 0 )
        goto LABEL_65;
      cwSavColumn = 0;
      *(_DWORD *)v17 = 655373;
      v82 = 0;
      v17 += 2;
      v80 = v19;
      v18 = 0LL;
      MessageFormat = v19;
    }
    v23 = v19[1];
    v24 = v17;
    v89 = v17;
    if ( (unsigned __int16)(v23 - 49) > 8u )
      break;
    v25 = v19[2];
    v19 += 2;
    v26 = v23 - 48;
    if ( (unsigned __int16)(v25 - 48) <= 9u )
    {
      v48 = 5 * v26;
      ++v19;
      v49 = (unsigned __int16)v25 - 48;
      v25 = *v19;
      v26 = v49 + 2 * v48;
      if ( (unsigned __int16)(v25 - 48) <= 9u )
      {
        v58 = 5 * v26;
        ++v19;
        v59 = (unsigned __int16)v25 - 48;
        v25 = *v19;
        v26 = v59 + 2 * v58;
        if ( (unsigned __int16)(v25 - 48) <= 9u )
          return -1073741811;
      }
    }
    v27 = v26;
    v28 = v26;
    v87 = 0;
    v29 = (unsigned int)(v26 - 1);
    v30 = 0;
    if ( (_WORD)v25 == 33 )
    {
      v41 = v19 + 1;
      v31 = (char *)v94;
      v85 = (char *)v94;
      v93 = 37;
      v32 = 0;
      v42 = *v41;
      if ( *v41 != 33 )
      {
        while ( v42 )
        {
          if ( v31 >= &v95 )
            break;
          if ( v42 == 42 )
          {
            v50 = v30++;
            if ( v50 > 1 )
              break;
          }
          ++v41;
          *(_WORD *)v31 = v42;
          v31 += 2;
          v85 = v31;
          v42 = *v41;
          if ( *v41 == 33 )
            goto LABEL_51;
        }
        return -1073741811;
      }
LABEL_51:
      v19 = v41 + 1;
      *(_WORD *)v31 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&v93, v25, v13, &v85);
      v31 = v85;
      v32 = 1;
      v30 = v87;
      v12 = v83;
    }
    if ( IgnoreInserts )
    {
      if ( v32 == 1 )
        goto LABEL_54;
      v60 = v93 - aS_0[0];
      if ( v93 == aS_0[0] )
      {
        v60 = v94[0] - aS_0[1];
        if ( v94[0] == aS_0[1] )
          v60 = v94[1] - aS_0[2];
      }
      if ( !v60 )
      {
LABEL_54:
        LODWORD(v77) = v27;
        v39 = RtlStringCchPrintfExW((_DWORD)v17, v14, (unsigned int)&v86, 0, 0, (__int64)L"%%%u", v77);
      }
      else
      {
        LODWORD(v77) = v28;
        v39 = RtlStringCchPrintfExW(
                (_DWORD)v17,
                v14,
                (unsigned int)&v86,
                0,
                0,
                (__int64)"%\x00%\x00%\x00u\x00!\x00%\x00s\x00!",
                v77,
                v94);
      }
      goto LABEL_39;
    }
    if ( !v12 || v30 + (unsigned int)v29 >= 0xC8 )
      return -1073741811;
    if ( ArgumentsAreAnsi )
    {
      v51 = *((_WORD *)v31 - 1);
      v52 = v31 - 2;
      if ( v51 == 99 )
      {
        v61 = *((_WORD *)v31 - 2) - 104;
        if ( v61 > 0xFu || (v53 = 32785, !_bittest(&v53, v61)) )
        {
          v62 = 3LL;
          v63 = (char *)L"hc" - v52;
          do
          {
            if ( v62 == -2147483643 )
              break;
            v64 = *(_WORD *)&v52[v63];
            if ( !v64 )
              break;
            *(_WORD *)v52 = v64;
            v52 += 2;
            --v62;
          }
          while ( v62 );
          v65 = v52 - 2;
          if ( v62 )
            v65 = v52;
          *(_WORD *)v65 = 0;
          goto LABEL_32;
        }
      }
      else
      {
        v53 = 32785;
      }
      if ( v51 == 115 )
      {
        v54 = *((_WORD *)v31 - 2) - 104;
        if ( v54 > 0xFu || !_bittest(&v53, v54) )
        {
          v55 = 3LL;
          v56 = (char *)L"hs" - v52;
          while ( v55 != -2147483643 )
          {
            v57 = *(_WORD *)&v52[v56];
            if ( !v57 )
              break;
            *(_WORD *)v52 = v57;
            v52 += 2;
            if ( !--v55 )
            {
              v52 -= 2;
              break;
            }
          }
          *(_WORD *)v52 = 0;
          goto LABEL_32;
        }
      }
      if ( v51 == 83 )
      {
        v66 = 115;
LABEL_129:
        *(_WORD *)v52 = v66;
        goto LABEL_32;
      }
      if ( v51 == 67 )
      {
        v66 = 99;
        goto LABEL_129;
      }
    }
LABEL_32:
    v33 = v81;
    if ( (unsigned int)v29 >= v81 )
    {
      do
      {
        v34 = v33;
        if ( ArgumentsAreAnArray )
        {
          v35 = (__int64)*v12++;
        }
        else
        {
          *v12 += 8;
          v35 = *((_QWORD *)*v12 - 1);
        }
        ++v33;
        v92[v34] = v35;
      }
      while ( v33 <= (unsigned int)v29 );
      v81 = v33;
      v83 = v12;
    }
    v36 = (char *)v92[v29];
    v37 = 0LL;
    v85 = v36;
    v38 = 0LL;
    if ( v30 )
    {
      if ( ArgumentsAreAnArray )
      {
        v37 = *v12;
        v67 = v33++;
        ++v12;
        v81 = v33;
        v83 = v12;
        v92[v67] = v37;
      }
      else
      {
        *v12 += 8;
        v37 = (va_list)*((_QWORD *)*v12 - 1);
      }
      if ( v30 > 1 )
      {
        if ( ArgumentsAreAnArray )
        {
          v38 = *v12;
          v68 = v33;
          v69 = v33 + 1;
          v83 = v12 + 1;
        }
        else
        {
          *v12 += 8;
          v38 = (va_list)*((_QWORD *)*v12 - 1);
          v68 = v33;
          v69 = v33 + 1;
        }
        v81 = v69;
        v92[v68] = v38;
      }
    }
    v39 = RtlStringCchPrintfExW((_DWORD)v17, v14, (unsigned int)&v86, 0, 0, (__int64)&v93, v36, v37, v38);
LABEL_39:
    cwSavColumn = v82;
    if ( v39 < 0 || (v40 = (v86 - (__int64)v17) >> 1, v14 -= v40, v14 < 0) )
    {
LABEL_64:
      MessageFormat = v80;
      goto LABEL_65;
    }
    v24 = v89;
    v13 = MaximumWidth;
    v15 = v88;
    v12 = v83;
    v11 = IgnoreInserts;
    v17 += (int)v40;
LABEL_42:
    if ( v24 )
    {
      cwSavColumn += v17 - v24;
      goto LABEL_13;
    }
LABEL_63:
    v18 = 0LL;
    cwSavColumn = 0;
LABEL_13:
    v82 = cwSavColumn;
    v80 = v19;
    MessageFormat = v19;
    if ( (unsigned int)(v13 - 1) <= 0xFFFFFFFD && cwSavColumn >= (unsigned int)v13 )
    {
      v10 = ParseContext;
LABEL_148:
      if ( v18 )
      {
        v70 = v18;
        do
        {
          if ( *v70 != 32 && *v70 != 9 )
            break;
          ++v70;
        }
        while ( v70 != v17 );
        if ( v18 > v15 )
        {
          do
          {
            v71 = *(v18 - 1);
            v72 = v18 - 1;
            if ( v71 != 32 && v71 != 9 )
              break;
            --v18;
          }
          while ( v72 > v15 );
          MessageFormat = v80;
        }
        v73 = v70 - v18;
        if ( (_DWORD)v73 == 1 )
        {
          if ( --v14 < 0 )
            goto LABEL_160;
        }
        else if ( (unsigned int)v73 > 2 )
        {
          v14 = v73 + v14 - 2;
        }
        v74 = v17 - v70;
        cwSavColumn = v74;
        v82 = v74;
        memmove(v18 + 2, v70, 2 * v74);
        MessageFormat = v80;
        v13 = MaximumWidth;
        v15 = v88;
        v12 = v83;
        *v18 = 13;
        v75 = v18 + 1;
        *v75 = 10;
        v76 = &v75[(unsigned int)v74];
      }
      else
      {
        v14 -= 2;
        if ( v14 < 0 )
        {
LABEL_160:
          if ( v10 )
          {
            v10->fFlags |= 2u;
            goto LABEL_66;
          }
          return -2147483643;
        }
        cwSavColumn = 0;
        *v17 = 13;
        v76 = v17 + 1;
        v82 = 0;
        *v76 = 10;
      }
      v18 = 0LL;
      v17 = v76 + 1;
    }
  }
  if ( v23 != 48 )
  {
    switch ( v23 )
    {
      case 0u:
        return -1073741811;
      case 0x72u:
        if ( --v14 < 0 )
          goto LABEL_64;
        *v17++ = 13;
        v19 += 2;
        goto LABEL_63;
      case 0x6Eu:
        v14 -= 2;
        if ( v14 < 0 )
          goto LABEL_64;
        *(_DWORD *)v17 = 655373;
        v17 += 2;
        v19 += 2;
        goto LABEL_63;
      case 0x74u:
        if ( --v14 < 0 )
          goto LABEL_64;
        if ( (cwSavColumn & 7) != 0 )
          cwSavColumn = (cwSavColumn + 7) & 0xFFFFFFF8;
        else
          cwSavColumn += 8;
        v18 = v17;
        *v17 = 9;
        break;
      case 0x62u:
        if ( --v14 < 0 )
          goto LABEL_64;
        v18 = v17;
        *v17 = 32;
        break;
      default:
        if ( !v11 )
        {
          if ( --v14 < 0 )
            goto LABEL_64;
          *v17 = v23;
          break;
        }
        v14 -= 2;
        if ( v14 < 0 )
          goto LABEL_64;
        *v17 = 37;
        v17[1] = v19[1];
        v17 += 2;
LABEL_96:
        v19 += 2;
        goto LABEL_42;
    }
    ++v17;
    goto LABEL_96;
  }
  MessageFormat = v80;
LABEL_16:
  if ( v14 < 1 )
  {
LABEL_65:
    v10 = ParseContext;
LABEL_66:
    if ( v10 )
    {
      v43 = v88;
      v44 = MessageFormat - v90;
      v45 = v17 - v88;
      v10->cwSavColumn = cwSavColumn;
      v10->iwSrc = v44;
      v10->iwDst = v45;
      if ( v18 )
        v46 = v18 - v43;
      else
        v46 = -1LL;
      v10->fFlags |= 1u;
      v10->iwDstSpace = v46;
    }
    return -2147483643;
  }
  v21 = v91;
  *v17 = 0;
  if ( v21 )
    *v21 = 2 * (((char *)v17 - (char *)v15 + 2) >> 1);
  return 0;
}
