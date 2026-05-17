/*
 * XREFs of sub_180067ACC @ 0x180067ACC
 * Callers:
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 * Callees:
 *     sub_180002B6C @ 0x180002B6C (sub_180002B6C.c)
 *     sub_180003160 @ 0x180003160 (sub_180003160.c)
 *     sub_180069414 @ 0x180069414 (sub_180069414.c)
 *     _wcsnicmp @ 0x18008CC10 (_wcsnicmp.c)
 *     sub_1800F43E0 @ 0x1800F43E0 (sub_1800F43E0.c)
 *     sub_1800F4430 @ 0x1800F4430 (sub_1800F4430.c)
 */

__int64 __fastcall sub_180067ACC(wchar_t *String1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  int *v6; // r10
  wchar_t *v7; // rbx
  wchar_t *v8; // r14
  wchar_t *v9; // r12
  wchar_t *v10; // r9
  wchar_t *v11; // r11
  unsigned __int16 *v12; // rbp
  char v13; // r13
  wchar_t *v14; // rdi
  unsigned __int64 v15; // rax
  wchar_t *v16; // r9
  __int16 v17; // r10
  __int64 v18; // r11
  wchar_t *v19; // rsi
  int v20; // r11d
  const wchar_t *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  wchar_t *v24; // r14
  int v25; // ebp
  unsigned __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  wchar_t *i; // rcx
  __int64 result; // rax
  int v31; // eax
  int v32; // r10d
  int v33; // r9d
  int v34; // r15d
  __int64 v35; // r14
  int v36; // r11d
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rcx
  wchar_t *v40; // rax
  int v41; // r15d
  bool j; // cf
  int v43; // eax
  bool v44; // zf
  int v45; // r8d
  int k; // r10d
  int v47; // r9d
  int v48; // edx
  __int16 v49; // ax
  wchar_t v50; // ax
  wchar_t v51; // r8
  int v52; // eax
  __int64 v53; // rcx
  int v54; // [rsp+30h] [rbp-88h]
  int v55; // [rsp+34h] [rbp-84h]
  unsigned __int64 v56; // [rsp+38h] [rbp-80h]
  wchar_t *v57; // [rsp+40h] [rbp-78h]
  __int64 v58; // [rsp+48h] [rbp-70h]
  wchar_t *v59; // [rsp+50h] [rbp-68h]
  wchar_t *v60; // [rsp+58h] [rbp-60h]
  wchar_t *v61; // [rsp+60h] [rbp-58h]
  int v63; // [rsp+C8h] [rbp+10h]
  __int64 v64; // [rsp+D0h] [rbp+18h] BYREF
  int *v65; // [rsp+D8h] [rbp+20h]

  v65 = a4;
  v6 = a4;
  v7 = a3;
  v8 = String1;
  v9 = String1;
  v57 = a3;
  v10 = a3;
  v61 = a3;
  v11 = &String1[a2];
  v60 = v11;
  v12 = &a3[*v6];
  v56 = (unsigned __int64)v12;
  if ( a2 <= 0 )
  {
    *v6 = 0;
    return 3221227286LL;
  }
  v13 = a5;
  v14 = a3;
  if ( String1 >= v11 )
    goto LABEL_111;
  while ( 1 )
  {
    LOBYTE(a3) = v13;
    v15 = sub_180069414(v9, v11, a3, v10);
    v19 = (wchar_t *)v15;
    if ( (wchar_t *)v15 == v9 )
      break;
    v20 = 0;
    if ( !v13 && a6 && (*v9 == v17 || v15 > (unsigned __int64)v8 && *(_WORD *)(v15 - 2) == v17) )
      goto LABEL_34;
    v21 = L"xl--";
    if ( !v13 )
      v21 = L"xn--";
    v22 = 0LL;
    v23 = v12 - v7;
    if ( (unsigned __int64)(v23 - 1) > 0x7FFFFFFE )
      v22 = 3221225485LL;
    if ( (int)v22 < 0 )
    {
      if ( v23 )
        *v7 = 0;
    }
    else
    {
      v24 = v7;
      v22 = 0LL;
      if ( !v23 )
      {
        if ( *v21 )
        {
          if ( !v7 )
            goto LABEL_49;
          v22 = 2147483653LL;
        }
LABEL_13:
        v7 = v24;
        goto LABEL_14;
      }
      v64 = 0LL;
      v22 = (unsigned int)sub_180002B6C(v7, v23, &v64, (__int64)v21, 4LL);
      v20 = 0;
      v24 = &v7[v64];
      if ( (int)(v22 + 0x80000000) < 0 || (_DWORD)v22 == -2147483643 )
        goto LABEL_13;
    }
LABEL_14:
    if ( (int)v22 < 0 )
      goto LABEL_49;
    v25 = 0;
    a3 = v9;
    if ( v9 < v19 )
    {
      v26 = v56;
      do
      {
        v27 = *a3;
        if ( (unsigned __int16)v27 >= 0x80u )
        {
          if ( (unsigned __int16)(v27 + 10240) <= 0x3FFu )
            ++a3;
        }
        else
        {
          if ( !v13
            && (a6 != (_BYTE)v20 && !(unsigned __int8)sub_1800F4430(v27, v22, a3, v26)
             || (unsigned __int16)v27 < 0x20u
             || (_WORD)v27 == 127)
            || !(_WORD)v27 )
          {
            goto LABEL_34;
          }
          if ( (unsigned __int64)v7 >= v26 )
            goto LABEL_49;
          if ( !v13 )
          {
            v22 = 25LL;
            if ( (unsigned __int16)(v27 - 65) <= 0x19u )
              LOWORD(v27) = v27 + 32;
          }
          *v7++ = v27;
          ++v25;
        }
        ++a3;
      }
      while ( a3 < v19 );
    }
    v54 = v25;
    v28 = v19 - v9;
    v58 = v28;
    if ( v25 == v28 )
    {
      v7 -= 4;
      for ( i = v14; i < v7; ++i )
        *i = i[4];
    }
    else
    {
      if ( (__int64)(((char *)v60 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
      {
        v31 = wcsnicmp(v9, v21, 4uLL);
        v20 = 0;
        if ( !v31 )
          goto LABEL_34;
        v28 = v58;
      }
      v63 = v20;
      v32 = v20;
      if ( v25 > 0 )
      {
        if ( (unsigned __int64)v7 >= v56 )
        {
LABEL_49:
          result = 3221225507LL;
          goto LABEL_35;
        }
        *v7++ = 45;
      }
      LODWORD(v64) = 72;
      v33 = 128;
      v34 = v20;
      if ( v25 < v28 )
      {
        v35 = v58;
        do
        {
          v36 = 0x7FFFFFF;
          a3 = v9;
          if ( v9 < v19 )
          {
            do
            {
              v37 = sub_1800F43E0(a3);
              if ( v37 >= v33 && v37 < v36 )
                v36 = v37;
              v39 = 2LL;
              if ( v37 >= 0x10000 )
                v39 = 4LL;
              a3 = (wchar_t *)(v39 + v38);
            }
            while ( a3 < v19 );
            v35 = v58;
          }
          v40 = v9;
          v41 = (v36 - v33) * (v25 - v32 + 1) + v34;
          for ( j = v9 < v19; ; j = &v59[v53] < v19 )
          {
            v59 = v40;
            if ( !j )
              break;
            v43 = sub_1800F43E0(v40);
            v55 = v43;
            v44 = v43 == v36;
            if ( v43 < v36 )
            {
              ++v41;
              v44 = v43 == v36;
            }
            if ( v44 )
            {
              v45 = v41;
              for ( k = 36; ; k += 36 )
              {
                if ( k > (int)v64 )
                  v47 = k < (int)v64 + 26 ? k - v64 : 26;
                else
                  v47 = 1;
                if ( v45 < v47 )
                  break;
                if ( (unsigned __int64)v7 >= v56 )
                  goto LABEL_49;
                v48 = (v45 - v47) % (36 - v47);
                v45 = (v45 - v47) / (36 - v47);
                v49 = v48 + v47;
                if ( v48 + v47 <= 25 )
                  v50 = v49 + 97;
                else
                  v50 = v49 + 22;
                *v7++ = v50;
              }
              if ( (unsigned __int64)v7 >= v56 )
                goto LABEL_49;
              if ( v45 <= 25 )
                v51 = v45 + 97;
              else
                v51 = v45 + 22;
              *v7++ = v51;
              v52 = sub_180003160(v41, v25 - v63 + 1, v25 == v54);
              v32 = v63;
              v41 = 0;
              ++v25;
              LODWORD(v64) = v52;
              if ( v36 >= 0x10000 )
              {
                ++v25;
                v32 = ++v63;
              }
            }
            v53 = 1LL;
            if ( v55 >= 0x10000 )
              v53 = 2LL;
            v40 = &v59[v53];
          }
          v34 = v41 + 1;
          v33 = v36 + 1;
        }
        while ( v25 < v35 );
      }
    }
    if ( !v13 && (__int64)(((char *)v7 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
      goto LABEL_34;
    v11 = v60;
    v12 = (unsigned __int16 *)v56;
    if ( v19 == v60 )
      goto LABEL_44;
    if ( (unsigned __int64)v7 >= v56 )
      goto LABEL_49;
    *v7++ = *v19;
    if ( v13 && *v19 == 64 )
    {
      v13 = 0;
      v57 = v7;
      v10 = v7;
    }
    else
    {
LABEL_44:
      v10 = v57;
    }
    v9 = v19 + 1;
    v14 = v7;
    if ( v19 >= v60 )
      goto LABEL_110;
    v8 = String1;
    v10 = v7;
  }
  if ( v13 || (v14 = v16, v15 != v18) )
  {
    *v65 = 0;
    return 3221227286LL;
  }
  v10 = v57;
LABEL_110:
  a3 = v61;
  v6 = v65;
LABEL_111:
  if ( !v13 && v14 - v10 > 255LL - (*(v7 - 1) != 46) || *(v7 - 1) == 64 )
  {
LABEL_34:
    result = 3221227286LL;
LABEL_35:
    *v65 = 0;
  }
  else
  {
    *v6 = v14 - a3;
    return 0LL;
  }
  return result;
}
