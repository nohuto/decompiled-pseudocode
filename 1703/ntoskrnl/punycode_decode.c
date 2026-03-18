/*
 * XREFs of punycode_decode @ 0x1406EC640
 * Callers:
 *     RtlIdnToUnicode @ 0x1406EBDB0 (RtlIdnToUnicode.c)
 * Callees:
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x14023F614 (FindLabelEnd.c)
 *     InsertChar @ 0x14023F680 (InsertChar.c)
 *     ValidateStd3Range @ 0x14023F6A8 (ValidateStd3Range.c)
 *     adapt @ 0x14023F6E4 (adapt.c)
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
  unsigned __int16 *v13; // r12
  wchar_t *v14; // rbp
  char v15; // r15
  wchar_t *LabelEnd; // rax
  unsigned __int64 v17; // r9
  signed __int64 v18; // r10
  wchar_t *v19; // r11
  unsigned __int16 *v20; // rdi
  int v21; // r11d
  const wchar_t *v22; // rdx
  int v23; // eax
  unsigned __int16 *v24; // r8
  unsigned __int16 *v25; // r9
  __int64 v26; // r10
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // ax
  int v30; // eax
  int v31; // r13d
  int v32; // r14d
  int v33; // r10d
  wchar_t *v34; // r12
  int v35; // r11d
  int v36; // r9d
  int v37; // r8d
  int v38; // r10d
  wchar_t v39; // cx
  int v40; // ecx
  int v41; // edx
  int v42; // eax
  __int64 v43; // r11
  __int64 v44; // r11
  __int64 v45; // rax
  __int64 v46; // r14
  unsigned __int16 *v47; // r11
  int v48; // ecx
  __int64 v49; // r11
  __int16 v50; // r10
  unsigned __int16 *v51; // r8
  int v52; // [rsp+20h] [rbp-78h]
  int v53; // [rsp+28h] [rbp-70h]
  unsigned __int16 *v54; // [rsp+30h] [rbp-68h]
  unsigned __int64 v55; // [rsp+38h] [rbp-60h]
  wchar_t *v56; // [rsp+40h] [rbp-58h]
  unsigned __int16 *v57; // [rsp+48h] [rbp-50h]
  int v58; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v59; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v60; // [rsp+B8h] [rbp+20h]

  v60 = a4;
  v59 = a3;
  v8 = a7;
  v9 = a3;
  v10 = *a4;
  *a7 = 1;
  *a4 = 0;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = &v9[v10];
  v12 = Str1;
  v56 = Str1 - 1;
  v13 = v9;
  v54 = v9;
  v57 = v9;
  v14 = &Str1[a2];
  v55 = (unsigned __int64)v11;
  *a8 = v9 - 1;
  if ( Str1 >= v14 )
    return 3221227286LL;
  v15 = a5;
  while ( 1 )
  {
    LabelEnd = FindLabelEnd(v12, (unsigned __int64)v14, v15);
    v20 = LabelEnd;
    if ( LabelEnd == v12 )
      break;
    LOBYTE(v21) = 0;
    if ( !v15
      && (a6 && (*v12 == 45 || (unsigned __int64)LabelEnd > v17 && *(LabelEnd - 1) == 45)
       || (__int64)(((char *)LabelEnd - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > v18) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v14 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
      goto LABEL_88;
    v22 = L"xl--";
    if ( !v15 )
      v22 = L"xn--";
    v23 = wcsnicmp(v12, v22, 4uLL);
    v21 = 0;
    if ( v23 )
    {
      LOWORD(v18) = 126;
LABEL_88:
      if ( (__int64)(((char *)v11 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) )
        return 3221227286LL;
      v51 = v12;
      if ( v12 < v20 )
      {
        while ( (v15 || (a6 == (_BYTE)v21 || ValidateStd3Range(*v51)) && *v51 >= 0x20u && *v51 != 127)
             && (unsigned __int16)(*v51 - 1) <= (unsigned __int16)v18 )
        {
          *v9 = *v51++;
          v59 = ++v9;
          if ( v51 >= v20 )
            goto LABEL_78;
        }
        return 3221227286LL;
      }
      goto LABEL_78;
    }
    *v8 = 0;
    v12 += 4;
    v24 = v20 - 1;
    if ( v20 - 1 < v12 )
    {
LABEL_18:
      v24 = 0LL;
    }
    else
    {
      while ( *v24 != 45 )
      {
        if ( --v24 < v12 )
          goto LABEL_18;
      }
    }
    if ( v24 == v20 - 1 )
      return 3221227286LL;
    if ( v24 && v24 > v12 )
    {
      v25 = v12;
      v26 = v24 - v12;
      if ( v12 != v24 )
      {
        do
        {
          if ( v9 >= v11 )
            break;
          if ( !v15 && (a6 != (_BYTE)v21 && !ValidateStd3Range(*v25) || *v25 < 0x20u || *v25 == 127) )
            return 3221227286LL;
          v27 = *v25;
          if ( (unsigned __int16)(*v25 - 1) > 0x7Eu )
            return 3221227286LL;
          v28 = v15 || (unsigned __int16)(v27 - 65) > 0x19u ? *v25 : v27 + 32;
          *v9 = v28;
          ++v25;
          v59 = ++v9;
        }
        while ( v25 != v24 );
        if ( v25 != v24 )
          return 3221227286LL;
      }
    }
    else
    {
      LODWORD(v26) = 0;
    }
    v58 = v21;
    v30 = v26 + 1;
    v31 = 128;
    if ( (int)v26 <= 0 )
      v30 = v21;
    v32 = v21;
    v33 = 72;
    v52 = 72;
    v34 = &v12[v30];
    if ( v34 < v20 )
    {
LABEL_41:
      v35 = v32;
      v53 = v32;
      v36 = 1;
      v37 = 36;
      v38 = -v33;
      while ( v34 < v20 )
      {
        v39 = *v34;
        if ( (unsigned __int16)(*v34 - 48) > 9u )
        {
          v41 = 97;
          if ( (unsigned __int16)(v39 - 97) <= 0x19u || (v41 = 65, (unsigned __int16)(v39 - 65) <= 0x19u) )
            v40 = v39 - v41;
          else
            v40 = -1;
        }
        else
        {
          v40 = v39 - 22;
        }
        ++v34;
        if ( v40 < 0 || v40 > (0x7FFFFFF - v32) / v36 )
          break;
        v32 += v36 * v40;
        if ( v37 > v52 )
        {
          v42 = 26;
          if ( v37 < v52 + 26 )
            v42 = v38 + v37;
        }
        else
        {
          v42 = 1;
        }
        if ( v40 < v42 )
        {
          v52 = adapt(v32 - v53, (unsigned int)(v9 - v54) - v58 + 1, v35 == 0);
          v44 = v43 - v58;
          v45 = v32 / (v44 + 1);
          v46 = v32 % (v44 + 1);
          if ( v45 > 0x7FFFFFF - v31 )
            return 3221227286LL;
          v31 += v45;
          if ( (unsigned int)(v31 - 128) > 0x10FF7F || (unsigned int)(v31 - 55296) <= 0x7FF )
            return 3221227286LL;
          if ( v58 <= 0 )
          {
            v47 = &v54[(int)v46];
          }
          else
          {
            v47 = v54;
            v48 = v46;
            if ( (int)v46 > 0 )
            {
              while ( v47 < v9 )
              {
                if ( (unsigned __int16)(*v47 + 10240) <= 0x7FFu )
                  ++v47;
                --v48;
                ++v47;
                if ( v48 <= 0 )
                  goto LABEL_69;
              }
              return 3221227286LL;
            }
          }
LABEL_69:
          if ( v31 >= 0x10000 )
          {
            if ( (unsigned __int64)v9 >= v55 - 2 || v47 > v9 )
              return 3221227286LL;
            InsertChar((v31 - 0x10000) / 1024 - 10240, v47, &v59);
            InsertChar(v50 - 9216, (unsigned __int16 *)(v49 + 2), &v59);
            v33 = v52;
            ++v58;
          }
          else
          {
            if ( (unsigned __int64)v9 >= v55 || v47 > v9 )
              return 3221227286LL;
            InsertChar(v31, v47, &v59);
          }
          v9 = v59;
          v32 = v46 + 1;
          if ( v34 < v20 )
            goto LABEL_41;
          goto LABEL_77;
        }
        if ( v36 > 0x7FFFFFF / (36 - v42) )
          return 3221227286LL;
        v36 *= 36 - v42;
        v37 += 36;
      }
      return 3221227286LL;
    }
LABEL_77:
    v8 = a7;
    v13 = v54;
    v11 = (unsigned __int16 *)v55;
LABEL_78:
    if ( !v15 && ((__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v13) )
      return 3221227286LL;
    if ( v20 != v14 )
    {
      if ( v9 >= v11 )
        return 3221227286LL;
      *v9++ = *v20;
      v59 = v9;
    }
    if ( v15 )
    {
      v15 = 0;
      v56 = v20;
      v19 = v20;
      *a8 = (char *)v9 - (v14 != v20 ? 2 : 0);
      if ( v20 == v14 - 1 )
        return 3221227286LL;
    }
    else
    {
      v19 = v56;
    }
    v54 = v9;
    v12 = v20 + 1;
    v13 = v9;
    if ( v20 >= v14 )
      goto LABEL_103;
  }
  if ( v15 || LabelEnd != v14 )
    return 3221227286LL;
LABEL_103:
  if ( v9 != v57 && v14 - v19 <= 256LL - (*(v14 - 1) != 46) )
  {
    *v60 = v9 - v57;
    return 0LL;
  }
  return 3221227286LL;
}
