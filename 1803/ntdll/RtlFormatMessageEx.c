/*
 * XREFs of RtlFormatMessageEx @ 0x180008A90
 * Callers:
 *     RtlFormatMessage @ 0x1800F1B70 (RtlFormatMessage.c)
 * Callees:
 *     sub_180008A14 @ 0x180008A14 (sub_180008A14.c)
 *     sub_1800090E0 @ 0x1800090E0 (sub_1800090E0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
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
  PWSTR v10; // r12
  PWSTR v11; // r11
  ULONG v12; // r9d
  PPARSE_MESSAGE_CONTEXT v13; // r10
  signed int v14; // esi
  PWSTR v15; // rdi
  WCHAR *v16; // r15
  __int64 v17; // r14
  PWSTR v18; // rbx
  PWSTR v19; // r8
  __int16 v20; // ax
  WCHAR *v21; // rcx
  PULONG v22; // r10
  NTSTATUS result; // eax
  WCHAR v24; // cx
  PWSTR v25; // rdx
  WCHAR v26; // ax
  int v27; // r12d
  WCHAR v28; // cx
  int v29; // r12d
  int v30; // r13d
  __int64 v31; // r12
  unsigned int v32; // r10d
  int v33; // r8d
  WCHAR *v34; // r11
  char v35; // dl
  va_list *v36; // r13
  unsigned int v37; // r11d
  unsigned int v38; // r8d
  __int64 v39; // rax
  WCHAR *v40; // r12
  va_list v41; // r8
  va_list v42; // rcx
  int v43; // eax
  __int64 v44; // rax
  _WORD *v45; // rbx
  __int16 v46; // cx
  char *v47; // r8
  __int16 v48; // r9
  unsigned int v49; // eax
  WCHAR v50; // ax
  __int64 v51; // r15
  SIZE_T iwSrc; // rax
  ULONG fFlags; // ecx
  SIZE_T iwDst; // rdx
  SIZE_T iwDstSpace; // rax
  int v56; // ecx
  __int16 v57; // dx
  __int16 *v58; // rcx
  unsigned __int16 v59; // ax
  int v60; // r8d
  __int64 v61; // rdx
  char *v62; // r8
  __int16 v63; // ax
  unsigned __int16 v64; // ax
  char *v65; // r8
  __int16 v66; // ax
  __int16 *v67; // rax
  __int16 v68; // ax
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned int v71; // r11d
  WCHAR *v72; // rdx
  __int16 v73; // ax
  WCHAR *v74; // rcx
  __int64 v75; // rax
  _WORD *v76; // r15
  _WORD *v77; // rdi
  __int64 v78; // [rsp+30h] [rbp-D0h]
  unsigned int v82; // [rsp+68h] [rbp-98h]
  PWSTR v83; // [rsp+70h] [rbp-90h]
  PWSTR v84; // [rsp+78h] [rbp-88h]
  va_list *v86; // [rsp+90h] [rbp-70h]
  __int64 v87; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v88; // [rsp+A0h] [rbp-60h]
  __int64 v89; // [rsp+A8h] [rbp-58h] BYREF
  PWSTR v90; // [rsp+B0h] [rbp-50h]
  PULONG v91; // [rsp+B8h] [rbp-48h]
  _QWORD v92[200]; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v93; // [rsp+700h] [rbp+600h] BYREF
  _WORD v94[30]; // [rsp+702h] [rbp+602h] BYREF
  char v95; // [rsp+73Eh] [rbp+63Eh] BYREF

  v10 = MessageFormat;
  v11 = Buffer;
  v12 = MaximumWidth;
  v91 = ReturnLength;
  v13 = ParseContext;
  v14 = Length >> 1;
  v86 = Arguments;
  v82 = 0;
  if ( ParseContext && (ParseContext->fFlags & 1) != 0 )
  {
    iwSrc = ParseContext->iwSrc;
    fFlags = ParseContext->fFlags & 0xFFFFFFFE;
    iwDst = ParseContext->iwDst;
    LODWORD(v17) = ParseContext->cwSavColumn;
    ParseContext->fFlags = fFlags;
    v18 = &v10[iwSrc];
    iwDstSpace = ParseContext->iwDstSpace;
    v84 = v18;
    v19 = v18;
    v15 = &Buffer[iwDst];
    if ( iwDstSpace == -1LL )
      v16 = 0LL;
    else
      v16 = &Buffer[iwDstSpace];
    v14 -= iwDst;
    if ( !ArgumentsAreAnArray && Arguments )
    {
      *Arguments = ParseContext->lpvArgStart;
      fFlags = ParseContext->fFlags;
    }
    if ( (fFlags & 2) != 0 )
    {
      ParseContext->fFlags = fFlags & 0xFFFFFFFD;
      v83 = Buffer;
      goto LABEL_158;
    }
    goto LABEL_5;
  }
  v15 = Buffer;
  v16 = 0LL;
  LODWORD(v17) = 0;
  v18 = MessageFormat;
  v19 = MessageFormat;
  v84 = MessageFormat;
  if ( ArgumentsAreAnArray || !Arguments || !ParseContext )
  {
LABEL_5:
    v83 = Buffer;
    goto LABEL_6;
  }
  ParseContext->lpvArgStart = *Arguments;
  v83 = Buffer;
LABEL_6:
  while ( 1 )
  {
    v20 = *v18;
    v21 = v15;
    if ( !*v18 )
      break;
    ++v18;
    switch ( v20 )
    {
      case 37:
        v24 = *v18;
        v25 = v15;
        v90 = v15;
        if ( (unsigned __int16)(v24 - 49) > 8u )
        {
          switch ( v24 )
          {
            case 0x30u:
              goto LABEL_17;
            case 0u:
              return -1073741811;
            case 0x72u:
              if ( --v14 < 0 )
                goto LABEL_77;
              *v15++ = 13;
              ++v18;
              goto LABEL_75;
            case 0x6Eu:
              v14 -= 2;
              if ( v14 < 0 )
                goto LABEL_77;
              *(_DWORD *)v15 = 655373;
              v15 += 2;
              ++v18;
              goto LABEL_75;
            case 0x74u:
              if ( --v14 < 0 )
                goto LABEL_77;
              if ( (v17 & 7) != 0 )
                LODWORD(v17) = (v17 + 7) & 0xFFFFFFF8;
              else
                LODWORD(v17) = v17 + 8;
              v16 = v15;
              *v15 = 9;
              break;
            case 0x62u:
              if ( --v14 < 0 )
                goto LABEL_77;
              v16 = v15;
              *v15 = 32;
              break;
            default:
              if ( !IgnoreInserts )
              {
                if ( --v14 < 0 )
                  goto LABEL_77;
                *v15 = v24;
                break;
              }
              v14 -= 2;
              if ( v14 < 0 )
                goto LABEL_77;
              *v15 = 37;
              v15[1] = *v18;
              v15 += 2;
LABEL_106:
              ++v18;
              goto LABEL_46;
          }
          ++v15;
          goto LABEL_106;
        }
        v26 = v18[1];
        ++v18;
        v27 = v24;
        v28 = v26;
        v29 = v27 - 48;
        if ( v26 >= 0x30u )
        {
          v28 = v26;
          if ( v26 <= 0x39u )
          {
            ++v18;
            v29 = v26 + 2 * (5 * v29 - 24);
            v50 = *v18;
            v28 = *v18;
            if ( *v18 >= 0x30u && v50 <= 0x39u )
            {
              ++v18;
              v29 = v50 + 2 * (5 * v29 - 24);
              v28 = *v18;
              if ( *v18 >= 0x30u && *v18 <= 0x39u )
                return -1073741811;
            }
          }
        }
        v30 = v29;
        v31 = (unsigned int)(v29 - 1);
        v88 = 0;
        v32 = 0;
        if ( v28 == 33 )
        {
          v45 = v18 + 1;
          v34 = v94;
          v83 = v94;
          v93 = 37;
          v35 = 0;
          v46 = *v45;
          if ( *v45 != 33 )
          {
            v47 = (char *)v94;
            do
            {
              v48 = v46;
              if ( !v46 )
                return -1073741811;
              if ( v47 >= &v95 )
                return -1073741811;
              if ( v46 == 42 )
              {
                v46 = 42;
                if ( v32 > 1 )
                  return -1073741811;
              }
              ++v45;
              *v34 = v46;
              v49 = v32 + 1;
              v34 = (WCHAR *)(v47 + 2);
              if ( v48 != 42 )
                v49 = v32;
              v83 = (PWSTR)(v47 + 2);
              v46 = *v45;
              v47 += 2;
              v32 = v49;
            }
            while ( *v45 != 33 );
          }
          v18 = v45 + 1;
          *v34 = 0;
        }
        else
        {
          v89 = 0LL;
          v33 = sub_180008A14(&v93, (__int64)v15, &v89, (__int64)L"%s");
          if ( (int)(v33 + 0x80000000) < 0 || v33 == -2147483643 )
          {
            v34 = &v94[v89 - 1];
            v83 = v34;
          }
          else
          {
            v34 = v83;
          }
          v32 = v88;
          v35 = 1;
        }
        if ( IgnoreInserts )
        {
          if ( v35 == 1 )
            goto LABEL_68;
          v56 = v93 - aS[0];
          if ( v93 == aS[0] )
          {
            v56 = v94[0] - aS[1];
            if ( v94[0] == aS[1] )
              v56 = v94[1] - aS[2];
          }
          if ( !v56 )
          {
LABEL_68:
            LODWORD(v78) = v30;
            v43 = sub_1800090E0((_DWORD)v15, v14, (unsigned int)&v87, 0, 0, (__int64)L"%%%u", v78);
          }
          else
          {
            LODWORD(v78) = v30;
            v43 = sub_1800090E0(
                    (_DWORD)v15,
                    v14,
                    (unsigned int)&v87,
                    0,
                    0,
                    (__int64)"%\x00%\x00%\x00u\x00!\x00%\x00s\x00!",
                    v78,
                    v94);
          }
          goto LABEL_43;
        }
        v36 = v86;
        if ( !v86 || v32 + (unsigned int)v31 >= 0xC8 )
          return -1073741811;
        if ( ArgumentsAreAnsi )
        {
          v57 = *(v34 - 1);
          v58 = (__int16 *)(v34 - 1);
          if ( v57 == 99 )
          {
            v59 = *(v34 - 2) - 104;
            if ( v59 > 0xFu || (v60 = 32785, !_bittest(&v60, v59)) )
            {
              v61 = 3LL;
              v62 = (char *)((char *)L"hc" - (char *)v58);
              while ( v61 != -2147483643 )
              {
                v63 = *(_WORD *)&v62[(_QWORD)v58];
                if ( !v63 )
                  break;
                *v58++ = v63;
                if ( !--v61 )
                {
                  *(v58 - 1) = 0;
                  goto LABEL_36;
                }
              }
              goto LABEL_132;
            }
          }
          else
          {
            v60 = 32785;
          }
          if ( v57 == 115 )
          {
            v64 = *(v34 - 2) - 104;
            if ( v64 > 0xFu || !_bittest(&v60, v64) )
            {
              v61 = 3LL;
              v65 = (char *)((char *)L"hs" - (char *)v58);
              do
              {
                if ( v61 == -2147483643 )
                  break;
                v66 = *(_WORD *)&v65[(_QWORD)v58];
                if ( !v66 )
                  break;
                *v58++ = v66;
                --v61;
              }
              while ( v61 );
LABEL_132:
              v67 = v58 - 1;
              if ( v61 )
                v67 = v58;
              *v67 = 0;
              goto LABEL_36;
            }
          }
          if ( v57 == 83 )
          {
            v68 = 115;
LABEL_139:
            *v58 = v68;
            goto LABEL_36;
          }
          if ( v57 == 67 )
          {
            v68 = 99;
            goto LABEL_139;
          }
        }
LABEL_36:
        v37 = v82;
        if ( (unsigned int)v31 >= v82 )
        {
          do
          {
            v38 = v37 + 1;
            if ( ArgumentsAreAnArray )
            {
              v39 = (__int64)*v36++;
              v92[v37] = v39;
            }
            else
            {
              *v36 += 8;
              v92[v37] = *((_QWORD *)*v36 - 1);
            }
            ++v37;
          }
          while ( v38 <= (unsigned int)v31 );
          v86 = v36;
          v82 = v38;
        }
        v40 = (WCHAR *)v92[v31];
        v83 = v40;
        v41 = 0LL;
        v42 = 0LL;
        if ( v32 )
        {
          if ( ArgumentsAreAnArray )
          {
            v41 = *v36;
            v69 = v37++;
            ++v36;
            v82 = v37;
            v86 = v36;
            v92[v69] = v41;
          }
          else
          {
            *v36 += 8;
            v41 = (va_list)*((_QWORD *)*v36 - 1);
          }
          if ( v32 > 1 )
          {
            v70 = v37;
            v71 = v37 + 1;
            v82 = v71;
            if ( ArgumentsAreAnArray )
            {
              v42 = *v36;
              v86 = v36 + 1;
            }
            else
            {
              *v36 += 8;
              v82 = v71;
              v42 = (va_list)*((_QWORD *)*v36 - 1);
            }
            v92[v70] = v42;
          }
        }
        v43 = sub_1800090E0((_DWORD)v15, v14, (unsigned int)&v87, 0, 0, (__int64)&v93, v40, v41, v42);
LABEL_43:
        if ( v43 < 0 || (v44 = (v87 - (__int64)v15) >> 1, v14 -= v44, v14 < 0) )
        {
          v19 = v84;
LABEL_77:
          v10 = MessageFormat;
          v13 = ParseContext;
LABEL_78:
          if ( v13 )
          {
            v13->cwSavColumn = v17;
            v13->iwSrc = v19 - v10;
            v13->iwDst = v15 - Buffer;
            if ( v16 )
              v51 = v16 - Buffer;
            else
              v51 = -1LL;
            v13->fFlags |= 1u;
            v13->iwDstSpace = v51;
          }
          return -2147483643;
        }
        v25 = v90;
        v12 = MaximumWidth;
        v11 = Buffer;
        v15 += (int)v44;
LABEL_46:
        if ( v25 )
        {
          LODWORD(v17) = v15 - v25 + v17;
          goto LABEL_14;
        }
LABEL_75:
        v16 = 0LL;
        LODWORD(v17) = 0;
LABEL_14:
        v84 = v18;
        v19 = v18;
        if ( v12 && v12 != -1 && (unsigned int)v17 >= v12 )
        {
          v13 = ParseContext;
          v10 = MessageFormat;
LABEL_158:
          if ( v16 )
          {
            v72 = v16;
            do
            {
              if ( *v72 != 32 && *v72 != 9 )
                break;
              ++v72;
            }
            while ( v72 != v15 );
            if ( v16 > v11 )
            {
              do
              {
                v73 = *(v16 - 1);
                v74 = v16 - 1;
                if ( v73 != 32 && v73 != 9 )
                  break;
                --v16;
              }
              while ( v74 > v11 );
            }
            v75 = v72 - v16;
            if ( (_DWORD)v75 == 1 )
            {
              if ( --v14 < 0 )
                goto LABEL_169;
            }
            else if ( (unsigned int)v75 > 2 )
            {
              v14 = v75 + v14 - 2;
            }
            v17 = v15 - v72;
            memmove(v16 + 2, v72, 2 * v17);
            v19 = v84;
            v12 = MaximumWidth;
            v11 = Buffer;
            *v16 = 13;
            v76 = v16 + 1;
            *v76 = 10;
            v77 = &v76[(unsigned int)v17];
          }
          else
          {
            v14 -= 2;
            if ( v14 < 0 )
            {
LABEL_169:
              if ( v13 )
              {
                v13->fFlags |= 2u;
                goto LABEL_78;
              }
              return -2147483643;
            }
            *v15 = 13;
            v77 = v15 + 1;
            LODWORD(v17) = 0;
            *v77 = 10;
          }
          v16 = 0LL;
          v15 = v77 + 1;
        }
        break;
      case 13:
        if ( *v18 != 10 )
          goto LABEL_23;
LABEL_22:
        ++v18;
        goto LABEL_23;
      case 10:
        if ( *v18 == 13 )
          goto LABEL_22;
LABEL_23:
        if ( v12 )
        {
          v16 = v15;
          v20 = 32;
LABEL_10:
          if ( --v14 < 0 )
            goto LABEL_77;
          *v15 = v20;
          LODWORD(v17) = v17 + 1;
          ++v15;
          if ( v20 != 32 )
            v21 = v16;
          v16 = v21;
          goto LABEL_14;
        }
        v14 -= 2;
        if ( v14 < 0 )
          goto LABEL_77;
        *(_DWORD *)v15 = 655373;
        v15 += 2;
        v84 = v18;
        v16 = 0LL;
        LODWORD(v17) = 0;
        v19 = v18;
        break;
      default:
        goto LABEL_10;
    }
  }
LABEL_17:
  if ( v14 < 1 )
    goto LABEL_77;
  v22 = v91;
  result = 0;
  *v15 = 0;
  if ( v22 )
    *v22 = 2 * (((char *)v15 - (char *)v11 + 2) >> 1);
  return result;
}
