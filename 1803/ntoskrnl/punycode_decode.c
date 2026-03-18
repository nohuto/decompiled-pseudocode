/*
 * XREFs of punycode_decode @ 0x1407883DC
 * Callers:
 *     RtlIdnToUnicode @ 0x140787B50 (RtlIdnToUnicode.c)
 * Callees:
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x14028D9E4 (FindLabelEnd.c)
 *     InsertChar @ 0x14028DA50 (InsertChar.c)
 *     ValidateStd3Range @ 0x14028DA78 (ValidateStd3Range.c)
 *     adapt @ 0x14028DAB4 (adapt.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *Str1,
        int a2,
        unsigned __int16 *a3,
        int *a4,
        char a5,
        char a6,
        _BYTE *a7,
        _QWORD *a8)
{
  _BYTE *v8; // rax
  unsigned __int16 *v9; // rbx
  __int64 v10; // r8
  _DWORD *v11; // rdi
  unsigned __int16 *v12; // r13
  char v13; // r15
  wchar_t *v14; // r14
  __int64 v15; // rax
  unsigned __int16 *v16; // r12
  wchar_t *v17; // rdx
  unsigned __int16 *v18; // r10
  unsigned __int16 *v19; // r9
  wchar_t *v20; // rbp
  wchar_t *LabelEnd; // rax
  signed __int64 v22; // r10
  unsigned __int64 v23; // r11
  unsigned __int16 *v24; // rdi
  signed __int64 v25; // rsi
  const wchar_t *v27; // rdx
  unsigned __int16 *v28; // r8
  unsigned __int16 *v29; // r9
  __int64 v30; // r10
  __int16 v31; // r11
  unsigned __int16 v32; // cx
  int v33; // eax
  int v34; // r13d
  int v35; // esi
  int v36; // r11d
  wchar_t *v37; // r12
  int v38; // r9d
  int v39; // r10d
  int i; // r8d
  wchar_t v41; // cx
  int v42; // ecx
  int v43; // eax
  __int64 v44; // r11
  __int64 v45; // r11
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // esi
  unsigned __int16 *v49; // r11
  unsigned __int16 *v50; // rax
  int v51; // r10d
  __int64 v52; // r11
  __int16 v53; // r10
  unsigned __int16 *v54; // r8
  __int16 v55; // r10
  int v56; // [rsp+28h] [rbp-70h]
  unsigned __int16 *v57; // [rsp+30h] [rbp-68h]
  unsigned __int64 v58; // [rsp+38h] [rbp-60h]
  wchar_t *v59; // [rsp+40h] [rbp-58h]
  unsigned __int16 *v60; // [rsp+48h] [rbp-50h]
  int v61; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v62; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v63; // [rsp+B8h] [rbp+20h]

  v63 = a4;
  v62 = a3;
  v8 = a7;
  v9 = a3;
  v10 = *a4;
  v11 = a4;
  *a4 = 0;
  *v8 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v12 = &v9[v10];
  v13 = a5;
  v14 = Str1;
  v15 = a2;
  v16 = v9;
  v17 = Str1 - 1;
  v57 = v9;
  v59 = Str1 - 1;
  v18 = v9;
  v60 = v9;
  v19 = v9;
  v20 = &Str1[v15];
  v58 = (unsigned __int64)v12;
  *a8 = v9 - 1;
  if ( Str1 < v20 )
  {
    while ( 1 )
    {
      LabelEnd = FindLabelEnd(v14, (unsigned __int64)v20, v13);
      v24 = LabelEnd;
      if ( LabelEnd == v14 )
        break;
      if ( v13 )
      {
        v25 = (char *)LabelEnd - (char *)v14;
      }
      else
      {
        if ( a6 && (*v14 == 45 || (unsigned __int64)LabelEnd > v23 && *(LabelEnd - 1) == 45) )
          return 3221227286LL;
        v25 = (char *)LabelEnd - (char *)v14;
        if ( (__int64)(((char *)LabelEnd - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) > v22 )
          return 3221227286LL;
      }
      if ( (__int64)(((char *)v20 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
        goto LABEL_82;
      v27 = L"xl--";
      if ( !v13 )
        v27 = L"xn--";
      if ( wcsnicmp(v14, v27, 4uLL) )
      {
LABEL_82:
        if ( (__int64)(((char *)v12 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(v25 & 0xFFFFFFFFFFFFFFFEuLL) )
          return 3221227286LL;
        v54 = v14;
        if ( v14 < v24 )
        {
          v55 = 1;
          while ( (v13 || (!a6 || ValidateStd3Range(*v54)) && *v54 >= 0x20u && *v54 != 127)
               && (unsigned __int16)(*v54 - v55) <= 0x7Eu )
          {
            *v9 = *v54++;
            v62 = ++v9;
            if ( v54 >= v24 )
              goto LABEL_94;
          }
          return 3221227286LL;
        }
      }
      else
      {
        v14 += 4;
        *a7 = 0;
        v28 = v24 - 1;
        if ( v24 - 1 < v14 )
        {
LABEL_19:
          v28 = 0LL;
        }
        else
        {
          while ( *v28 != 45 )
          {
            if ( --v28 < v14 )
              goto LABEL_19;
          }
        }
        if ( v28 == v24 - 1 )
          return 3221227286LL;
        if ( v28 && v28 > v14 )
        {
          v29 = v14;
          v30 = v28 - v14;
          if ( v14 != v28 )
          {
            v31 = 1;
            do
            {
              if ( v9 >= v12 )
                break;
              if ( !v13 && (a6 && !ValidateStd3Range(*v29) || *v29 < 0x20u || *v29 == 127) )
                return 3221227286LL;
              v32 = *v29;
              if ( (unsigned __int16)(*v29 - v31) > 0x7Eu )
                return 3221227286LL;
              if ( !v13 && (unsigned __int16)(v32 - 65) <= 0x19u )
                v32 += 32;
              *v9 = v32;
              ++v29;
              v62 = ++v9;
            }
            while ( v29 != v28 );
            if ( v29 != v28 )
              return 3221227286LL;
          }
        }
        else
        {
          LODWORD(v30) = 0;
        }
        v61 = 0;
        v33 = v30 + 1;
        v34 = 128;
        if ( (int)v30 <= 0 )
          v33 = 0;
        v35 = 0;
        v36 = 72;
        v37 = &v14[v33];
        if ( v37 < v24 )
        {
LABEL_42:
          v38 = 1;
          v39 = v35;
          for ( i = 36; v37 < v24; i += 36 )
          {
            v41 = *v37;
            if ( (unsigned __int16)(*v37 - 48) > 9u )
            {
              if ( (unsigned __int16)(v41 - 97) > 0x19u )
                v42 = (unsigned __int16)(v41 - 65) > 0x19u ? -1 : v41 - 65;
              else
                v42 = v41 - 97;
            }
            else
            {
              v42 = v41 - 22;
            }
            ++v37;
            if ( v42 < 0 || v42 > (0x7FFFFFF - v35) / v38 )
              break;
            v35 += v38 * v42;
            if ( i > v36 )
            {
              if ( i < v36 + 26 )
                v43 = i - v36;
              else
                v43 = 26;
            }
            else
            {
              v43 = 1;
            }
            if ( v42 < v43 )
            {
              v56 = adapt(v35 - v39, (unsigned int)(v9 - v57) - v61 + 1, v39 == 0);
              v45 = v44 - v61;
              v46 = v35 / (v45 + 1);
              v47 = v35 % (v45 + 1);
              v48 = v47;
              if ( v46 > 0x7FFFFFF - v34 )
                return 3221227286LL;
              v34 += v46;
              if ( v34 < 128 || v34 > 55295 && (unsigned int)(v34 - 57344) > 0x101FFF )
                return 3221227286LL;
              if ( v61 <= 0 )
              {
                v49 = &v57[(int)v47];
              }
              else
              {
                v49 = v57;
                if ( (int)v47 > 0 )
                {
                  while ( v49 < v9 )
                  {
                    LODWORD(v47) = v47 - 1;
                    v50 = v49 + 1;
                    if ( (unsigned __int16)(*v49 + 10240) > 0x7FFu )
                      v50 = v49;
                    v49 = v50 + 1;
                    if ( (int)v47 <= 0 )
                      goto LABEL_73;
                  }
                  return 3221227286LL;
                }
              }
LABEL_73:
              if ( v34 >= 0x10000 )
              {
                if ( (unsigned __int64)v9 >= v58 - 2 || v49 > v9 )
                  return 3221227286LL;
                InsertChar((v34 - 0x10000) / 1024 - 10240, v49, &v62);
                InsertChar(v53 - 9216, (unsigned __int16 *)(v52 + 2), &v62);
                v51 = 1;
                ++v61;
              }
              else
              {
                if ( (unsigned __int64)v9 >= v58 || v49 > v9 )
                  return 3221227286LL;
                InsertChar(v34, v49, &v62);
              }
              v9 = v62;
              v35 = v51 + v48;
              if ( v37 >= v24 )
                goto LABEL_93;
              v36 = v56;
              goto LABEL_42;
            }
            if ( v38 > 0x7FFFFFF / (36 - v43) )
              return 3221227286LL;
            v38 *= 36 - v43;
          }
          return 3221227286LL;
        }
LABEL_93:
        v12 = (unsigned __int16 *)v58;
        v16 = v57;
      }
LABEL_94:
      if ( !v13 && ((__int64)(((char *)v24 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v16) )
        return 3221227286LL;
      if ( v24 != v20 )
      {
        if ( v9 >= v12 )
          return 3221227286LL;
        *v9++ = *v24;
        v62 = v9;
      }
      if ( v13 )
      {
        v17 = v24;
        v59 = v24;
        v13 = 0;
        *a8 = (char *)v9 - (v20 != v24 ? 2 : 0);
        if ( v24 == v20 - 1 )
          return 3221227286LL;
      }
      else
      {
        v17 = v59;
      }
      v57 = v9;
      v14 = v24 + 1;
      v16 = v9;
      v19 = v9;
      if ( v24 >= v20 )
        goto LABEL_109;
    }
    if ( !v13 && LabelEnd == v20 )
    {
      v17 = v59;
LABEL_109:
      v11 = v63;
      v18 = v60;
      goto LABEL_110;
    }
    return 3221227286LL;
  }
LABEL_110:
  if ( v19 == v18 || !v13 && v20 - v17 > 256LL - (*(v20 - 1) != 46) )
    return 3221227286LL;
  *v11 = v19 - v18;
  return 0LL;
}
