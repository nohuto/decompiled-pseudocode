/*
 * XREFs of punycode_decode @ 0x18004F0C0
 * Callers:
 *     RtlIdnToUnicode @ 0x18004EF00 (RtlIdnToUnicode.c)
 * Callees:
 *     adapt @ 0x180002150 (adapt.c)
 *     InsertChar @ 0x1800021AC (InsertChar.c)
 *     FindLabelEnd @ 0x18004F5F0 (FindLabelEnd.c)
 *     ValidateStd3Range @ 0x180087AD8 (ValidateStd3Range.c)
 *     _wcsnicmp @ 0x1800926C0 (_wcsnicmp.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *String1,
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
  unsigned __int16 *v10; // r8
  unsigned __int16 *v11; // r14
  wchar_t *v12; // rsi
  unsigned __int16 *v13; // r15
  wchar_t *v14; // rbp
  char v15; // r12
  unsigned __int64 LabelEnd; // rax
  unsigned __int64 v17; // r9
  signed __int64 v18; // r10
  wchar_t *v19; // r11
  wchar_t *v20; // rdi
  const wchar_t *v21; // rdx
  __int16 v22; // r10
  unsigned __int16 v23; // r9
  wchar_t *v25; // r9
  __int64 v26; // r10
  __int16 v27; // r11
  unsigned __int16 v28; // cx
  int v29; // eax
  int v30; // r15d
  int v31; // r14d
  int v32; // r11d
  wchar_t *v33; // r13
  int v34; // r9d
  int v35; // r10d
  int i; // r8d
  int v37; // ecx
  int v38; // eax
  __int64 v39; // r11
  __int64 v40; // r11
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // r14d
  unsigned __int16 *v44; // r11
  int v45; // r10d
  unsigned __int16 *v46; // rax
  __int64 v47; // r11
  __int16 v48; // r10
  int v49; // [rsp+20h] [rbp-78h]
  unsigned __int16 *v50; // [rsp+28h] [rbp-70h]
  unsigned __int64 v51; // [rsp+30h] [rbp-68h]
  wchar_t *v52; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v55; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v56; // [rsp+B8h] [rbp+20h]

  v56 = a4;
  v55 = a3;
  v8 = a7;
  v9 = a3;
  v10 = (unsigned __int16 *)*a4;
  *a7 = 1;
  *a4 = 0;
  if ( a2 > 0 )
  {
    v11 = &v9[(_QWORD)v10];
    v12 = String1;
    v52 = String1 - 1;
    v13 = v9;
    v50 = v9;
    v53 = v9;
    v14 = &String1[a2];
    v51 = (unsigned __int64)v11;
    *a8 = v9 - 1;
    if ( String1 < v14 )
    {
      v15 = a5;
      while ( 1 )
      {
        LOBYTE(v10) = v15;
        LabelEnd = FindLabelEnd(v12, v14, v10);
        v20 = (wchar_t *)LabelEnd;
        if ( (wchar_t *)LabelEnd == v12 )
          break;
        if ( !v15
          && (a6 && (*v12 == 45 || LabelEnd > v17 && *(_WORD *)(LabelEnd - 2) == 45)
           || (__int64)((LabelEnd - (_QWORD)v12) & 0xFFFFFFFFFFFFFFFEuLL) > v18) )
        {
          return 3221227286LL;
        }
        if ( (__int64)(((char *)v14 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
          goto LABEL_12;
        v21 = L"xl--";
        if ( !v15 )
          v21 = L"xn--";
        if ( wcsnicmp(v12, v21, 4uLL) )
        {
LABEL_12:
          if ( (__int64)(((char *)v11 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) )
            return 3221227286LL;
          v10 = v12;
          if ( v12 < v20 )
          {
            v22 = 1;
            v23 = 126;
            while ( (v15 || (!a6 || (unsigned __int8)ValidateStd3Range(*v10)) && *v10 >= 0x20u && *v10 != 127)
                 && (unsigned __int16)(*v10 - v22) <= v23 )
            {
              *v9 = *v10++;
              v55 = ++v9;
              if ( v10 >= v20 )
                goto LABEL_21;
            }
            return 3221227286LL;
          }
        }
        else
        {
          *v8 = 0;
          v12 += 4;
          v10 = v20 - 1;
          if ( v20 - 1 < v12 )
          {
LABEL_90:
            v10 = 0LL;
          }
          else
          {
            while ( *v10 != 45 )
            {
              if ( --v10 < v12 )
                goto LABEL_90;
            }
          }
          if ( v10 == v20 - 1 )
            return 3221227286LL;
          if ( v10 && v10 > v12 )
          {
            v25 = v12;
            v26 = v10 - v12;
            if ( v12 != v10 )
            {
              v27 = 1;
              do
              {
                if ( v9 >= v11 )
                  break;
                if ( !v15 && (a6 && !(unsigned __int8)ValidateStd3Range(*v25) || *v25 < 0x20u || *v25 == 127) )
                  return 3221227286LL;
                v28 = *v25;
                if ( (unsigned __int16)(*v25 - v27) > 0x7Eu )
                  return 3221227286LL;
                if ( !v15 && (unsigned __int16)(v28 - 65) <= 0x19u )
                  v28 += 32;
                *v9 = v28;
                ++v25;
                v55 = ++v9;
              }
              while ( v25 != v10 );
              if ( v25 != v10 )
                return 3221227286LL;
            }
          }
          else
          {
            LODWORD(v26) = 0;
          }
          v54 = 0;
          v29 = v26 + 1;
          v30 = 128;
          if ( (int)v26 <= 0 )
            v29 = 0;
          v31 = 0;
          v32 = 72;
          v33 = &v12[v29];
          if ( v33 < v20 )
          {
LABEL_59:
            v34 = 1;
            v35 = v31;
            for ( i = 36; v33 < v20; i += 36 )
            {
              if ( (unsigned __int16)(*v33 - 48) <= 9u )
              {
                v37 = *v33 - 22;
              }
              else if ( (unsigned __int16)(*v33 - 97) > 0x19u )
              {
                v37 = (unsigned __int16)(*v33 - 65) > 0x19u ? -1 : *v33 - 65;
              }
              else
              {
                v37 = *v33 - 97;
              }
              ++v33;
              if ( v37 < 0 || v37 > (0x7FFFFFF - v31) / v34 )
                break;
              v31 += v34 * v37;
              if ( i <= v32 )
              {
                v38 = 1;
              }
              else if ( i < v32 + 26 )
              {
                v38 = i - v32;
              }
              else
              {
                v38 = 26;
              }
              if ( v37 < v38 )
              {
                v49 = adapt(v31 - v35, (unsigned int)(v9 - v50) - v54 + 1, v35 == 0);
                v40 = v39 - v54;
                v41 = v31 / (v40 + 1);
                v42 = v31 % (v40 + 1);
                v43 = v42;
                if ( v41 > 0x7FFFFFF - v30 )
                  return 3221227286LL;
                v30 += v41;
                if ( (unsigned int)(v30 - 128) > 0x10FF7F || (unsigned int)(v30 - 55296) <= 0x7FF )
                  return 3221227286LL;
                if ( v54 > 0 )
                {
                  v44 = v50;
                  if ( (int)v42 > 0 )
                  {
                    while ( v44 < v9 )
                    {
                      LODWORD(v42) = v42 - 1;
                      v46 = v44 + 1;
                      if ( (unsigned __int16)(*v44 + 10240) > 0x7FFu )
                        v46 = v44;
                      v44 = v46 + 1;
                      if ( (int)v42 <= 0 )
                        goto LABEL_78;
                    }
                    return 3221227286LL;
                  }
                }
                else
                {
                  v44 = &v50[(int)v42];
                }
LABEL_78:
                if ( v30 >= 0x10000 )
                {
                  if ( (unsigned __int64)v9 >= v51 - 2 || v44 > v9 )
                    return 3221227286LL;
                  InsertChar((v30 - 0x10000) / 1024 - 10240, v44, &v55);
                  InsertChar(v48 - 9216, (unsigned __int16 *)(v47 + 2), &v55);
                  v45 = 1;
                  ++v54;
                }
                else
                {
                  if ( (unsigned __int64)v9 >= v51 || v44 > v9 )
                    return 3221227286LL;
                  InsertChar(v30, v44, &v55);
                }
                v9 = v55;
                v31 = v45 + v43;
                if ( v33 >= v20 )
                  goto LABEL_84;
                v32 = v49;
                goto LABEL_59;
              }
              if ( v34 > 0x7FFFFFF / (36 - v38) )
                return 3221227286LL;
              v34 *= 36 - v38;
            }
            return 3221227286LL;
          }
LABEL_84:
          v8 = a7;
          v13 = v50;
          v11 = (unsigned __int16 *)v51;
        }
LABEL_21:
        if ( !v15 && ((__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v13) )
          return 3221227286LL;
        if ( v20 != v14 )
        {
          if ( v9 >= v11 )
            return 3221227286LL;
          *v9++ = *v20;
          v55 = v9;
        }
        if ( v15 )
        {
          v15 = 0;
          v52 = v20;
          v19 = v20;
          *a8 = (char *)v9 - (v14 != v20 ? 2 : 0);
          if ( v20 == v14 - 1 )
            return 3221227286LL;
        }
        else
        {
          v19 = v52;
        }
        v50 = v9;
        v12 = v20 + 1;
        v13 = v9;
        if ( v20 >= v14 )
          goto LABEL_33;
      }
      if ( v15 || (wchar_t *)LabelEnd != v14 )
        return 3221227286LL;
LABEL_33:
      if ( v9 != v53 && v14 - v19 <= 256LL - (*(v14 - 1) != 46) )
      {
        *v56 = v9 - v53;
        return 0LL;
      }
    }
  }
  return 3221227286LL;
}
