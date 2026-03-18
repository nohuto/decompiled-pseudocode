/*
 * XREFs of punycode_decode @ 0x140724B0C
 * Callers:
 *     RtlIdnToUnicode @ 0x140724280 (RtlIdnToUnicode.c)
 * Callees:
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x140255854 (FindLabelEnd.c)
 *     InsertChar @ 0x1402558C0 (InsertChar.c)
 *     ValidateStd3Range @ 0x1402559A8 (ValidateStd3Range.c)
 *     adapt @ 0x1402559E4 (adapt.c)
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
  _BYTE *v8; // r13
  unsigned __int16 *v9; // rbx
  __int64 v10; // r8
  unsigned __int16 *v11; // r14
  wchar_t *v12; // rsi
  unsigned __int16 *v13; // r15
  wchar_t *v14; // rbp
  char v15; // r12
  wchar_t *LabelEnd; // rax
  unsigned __int64 v17; // r9
  signed __int64 v18; // r10
  wchar_t *v19; // r11
  unsigned __int16 *v20; // rdi
  const wchar_t *v21; // rdx
  unsigned __int16 *v22; // r8
  unsigned __int16 *v23; // r9
  __int64 v24; // r10
  __int16 v25; // r11
  unsigned __int16 v26; // cx
  int v28; // eax
  int v29; // r15d
  int v30; // r14d
  int v31; // r11d
  wchar_t *v32; // r13
  int v33; // r9d
  int v34; // r10d
  int i; // r8d
  wchar_t v36; // cx
  int v37; // ecx
  int v38; // eax
  __int64 v39; // r11
  __int64 v40; // r11
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // r14d
  unsigned __int16 *v44; // r11
  unsigned __int16 *v45; // rax
  int v46; // r10d
  __int64 v47; // r11
  __int16 v48; // r10
  unsigned __int16 *v49; // r8
  __int16 v50; // r10
  unsigned __int16 v51; // r9
  int v52; // [rsp+28h] [rbp-70h]
  unsigned __int16 *v53; // [rsp+30h] [rbp-68h]
  unsigned __int64 v54; // [rsp+38h] [rbp-60h]
  wchar_t *v55; // [rsp+40h] [rbp-58h]
  unsigned __int16 *v56; // [rsp+48h] [rbp-50h]
  int v57; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v58; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v59; // [rsp+B8h] [rbp+20h]

  v59 = a4;
  v58 = a3;
  v8 = a7;
  v9 = a3;
  v10 = *a4;
  *a7 = 1;
  *a4 = 0;
  if ( a2 > 0 )
  {
    v11 = &v9[v10];
    v12 = Str1;
    v55 = Str1 - 1;
    v13 = v9;
    v53 = v9;
    v56 = v9;
    v14 = &Str1[a2];
    v54 = (unsigned __int64)v11;
    *a8 = v9 - 1;
    if ( Str1 < v14 )
    {
      v15 = a5;
      while ( 1 )
      {
        LabelEnd = FindLabelEnd(v12, (unsigned __int64)v14, v15);
        v20 = LabelEnd;
        if ( LabelEnd == v12 )
          break;
        if ( !v15
          && (a6 && (*v12 == 45 || (unsigned __int64)LabelEnd > v17 && *(LabelEnd - 1) == 45)
           || (__int64)(((char *)LabelEnd - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > v18) )
        {
          return 3221227286LL;
        }
        if ( (__int64)(((char *)v14 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
          goto LABEL_80;
        v21 = L"xl--";
        if ( !v15 )
          v21 = L"xn--";
        if ( wcsnicmp(v12, v21, 4uLL) )
        {
LABEL_80:
          if ( (__int64)(((char *)v11 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) )
            return 3221227286LL;
          v49 = v12;
          if ( v12 < v20 )
          {
            v50 = 1;
            v51 = 126;
            while ( (v15 || (!a6 || ValidateStd3Range(*v49)) && *v49 >= 0x20u && *v49 != 127)
                 && (unsigned __int16)(*v49 - v50) <= v51 )
            {
              *v9 = *v49++;
              v58 = ++v9;
              if ( v49 >= v20 )
                goto LABEL_92;
            }
            return 3221227286LL;
          }
        }
        else
        {
          *v8 = 0;
          v12 += 4;
          v22 = v20 - 1;
          if ( v20 - 1 < v12 )
          {
LABEL_18:
            v22 = 0LL;
          }
          else
          {
            while ( *v22 != 45 )
            {
              if ( --v22 < v12 )
                goto LABEL_18;
            }
          }
          if ( v22 == v20 - 1 )
            return 3221227286LL;
          if ( v22 && v22 > v12 )
          {
            v23 = v12;
            v24 = v22 - v12;
            if ( v12 != v22 )
            {
              v25 = 1;
              do
              {
                if ( v9 >= v11 )
                  break;
                if ( !v15 && (a6 && !ValidateStd3Range(*v23) || *v23 < 0x20u || *v23 == 127) )
                  return 3221227286LL;
                v26 = *v23;
                if ( (unsigned __int16)(*v23 - v25) > 0x7Eu )
                  return 3221227286LL;
                if ( !v15 && (unsigned __int16)(v26 - 65) <= 0x19u )
                  v26 += 32;
                *v9 = v26;
                ++v23;
                v58 = ++v9;
              }
              while ( v23 != v22 );
              if ( v23 != v22 )
                return 3221227286LL;
            }
          }
          else
          {
            LODWORD(v24) = 0;
          }
          v57 = 0;
          v28 = v24 + 1;
          v29 = 128;
          if ( (int)v24 <= 0 )
            v28 = 0;
          v30 = 0;
          v31 = 72;
          v32 = &v12[v28];
          if ( v32 < v20 )
          {
LABEL_41:
            v33 = 1;
            v34 = v30;
            for ( i = 36; v32 < v20; i += 36 )
            {
              v36 = *v32;
              if ( (unsigned __int16)(*v32 - 48) > 9u )
              {
                if ( (unsigned __int16)(v36 - 97) > 0x19u )
                  v37 = (unsigned __int16)(v36 - 65) > 0x19u ? -1 : v36 - 65;
                else
                  v37 = v36 - 97;
              }
              else
              {
                v37 = v36 - 22;
              }
              ++v32;
              if ( v37 < 0 || v37 > (0x7FFFFFF - v30) / v33 )
                break;
              v30 += v33 * v37;
              if ( i > v31 )
              {
                if ( i < v31 + 26 )
                  v38 = i - v31;
                else
                  v38 = 26;
              }
              else
              {
                v38 = 1;
              }
              if ( v37 < v38 )
              {
                v52 = adapt(v30 - v34, (unsigned int)(v9 - v53) - v57 + 1, v34 == 0);
                v40 = v39 - v57;
                v41 = v30 / (v40 + 1);
                v42 = v30 % (v40 + 1);
                v43 = v42;
                if ( v41 > 0x7FFFFFF - v29 )
                  return 3221227286LL;
                v29 += v41;
                if ( (unsigned int)(v29 - 128) > 0x10FF7F || (unsigned int)(v29 - 55296) <= 0x7FF )
                  return 3221227286LL;
                if ( v57 <= 0 )
                {
                  v44 = &v53[(int)v42];
                }
                else
                {
                  v44 = v53;
                  if ( (int)v42 > 0 )
                  {
                    while ( v44 < v9 )
                    {
                      LODWORD(v42) = v42 - 1;
                      v45 = v44 + 1;
                      if ( (unsigned __int16)(*v44 + 10240) > 0x7FFu )
                        v45 = v44;
                      v44 = v45 + 1;
                      if ( (int)v42 <= 0 )
                        goto LABEL_71;
                    }
                    return 3221227286LL;
                  }
                }
LABEL_71:
                if ( v29 >= 0x10000 )
                {
                  if ( (unsigned __int64)v9 >= v54 - 2 || v44 > v9 )
                    return 3221227286LL;
                  InsertChar((v29 - 0x10000) / 1024 - 10240, v44, &v58);
                  InsertChar(v48 - 9216, (unsigned __int16 *)(v47 + 2), &v58);
                  v46 = 1;
                  ++v57;
                }
                else
                {
                  if ( (unsigned __int64)v9 >= v54 || v44 > v9 )
                    return 3221227286LL;
                  InsertChar(v29, v44, &v58);
                }
                v9 = v58;
                v30 = v46 + v43;
                if ( v32 >= v20 )
                  goto LABEL_91;
                v31 = v52;
                goto LABEL_41;
              }
              if ( v33 > 0x7FFFFFF / (36 - v38) )
                return 3221227286LL;
              v33 *= 36 - v38;
            }
            return 3221227286LL;
          }
LABEL_91:
          v8 = a7;
          v13 = v53;
          v11 = (unsigned __int16 *)v54;
        }
LABEL_92:
        if ( !v15 && ((__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v13) )
          return 3221227286LL;
        if ( v20 != v14 )
        {
          if ( v9 >= v11 )
            return 3221227286LL;
          *v9++ = *v20;
          v58 = v9;
        }
        if ( v15 )
        {
          v15 = 0;
          v55 = v20;
          v19 = v20;
          *a8 = (char *)v9 - (v14 != v20 ? 2 : 0);
          if ( v20 == v14 - 1 )
            return 3221227286LL;
        }
        else
        {
          v19 = v55;
        }
        v53 = v9;
        v12 = v20 + 1;
        v13 = v9;
        if ( v20 >= v14 )
          goto LABEL_106;
      }
      if ( v15 || LabelEnd != v14 )
        return 3221227286LL;
LABEL_106:
      if ( v9 != v56 && v14 - v19 <= 256LL - (*(v14 - 1) != 46) )
      {
        *v59 = v9 - v56;
        return 0LL;
      }
    }
  }
  return 3221227286LL;
}
