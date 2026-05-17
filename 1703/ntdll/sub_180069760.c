/*
 * XREFs of sub_180069760 @ 0x180069760
 * Callers:
 *     sub_180069CA0 @ 0x180069CA0 (sub_180069CA0.c)
 * Callees:
 *     sub_180003B54 @ 0x180003B54 (sub_180003B54.c)
 *     sub_18000449C @ 0x18000449C (sub_18000449C.c)
 *     sub_18006B04C @ 0x18006B04C (sub_18006B04C.c)
 *     sub_18008AB28 @ 0x18008AB28 (sub_18008AB28.c)
 *     _wcsnicmp @ 0x1800977C0 (_wcsnicmp.c)
 *     sub_1800F6A9C @ 0x1800F6A9C (sub_1800F6A9C.c)
 */

__int64 __fastcall sub_180069760(wchar_t *String1, int a2, unsigned __int64 a3, int *a4, char a5, char a6)
{
  wchar_t *v6; // rbx
  wchar_t *v7; // r12
  wchar_t *v8; // r10
  _WORD *v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rsi
  char v12; // bp
  unsigned __int64 v13; // rax
  __int16 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  wchar_t *v17; // rdi
  const wchar_t *v18; // r15
  int v19; // edx
  __int64 v20; // rcx
  wchar_t *v21; // rax
  int v22; // r14d
  wchar_t *i; // r9
  wchar_t v24; // ax
  __int64 v25; // r13
  char *v26; // rdx
  wchar_t *v27; // rcx
  __int64 result; // rax
  int v29; // r10d
  int v30; // r15d
  int j; // r9d
  int v32; // r11d
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r10
  __int64 v36; // rcx
  wchar_t *v37; // rax
  int v38; // r15d
  bool k; // cf
  int v40; // eax
  bool v41; // zf
  int v42; // eax
  int v43; // r10d
  int v44; // r8d
  int v45; // esi
  int v46; // r9d
  int v47; // edx
  __int16 v48; // ax
  wchar_t v49; // ax
  wchar_t v50; // r8
  int v51; // eax
  __int64 v52; // rcx
  int v53; // [rsp+30h] [rbp-88h]
  int v54; // [rsp+34h] [rbp-84h]
  unsigned __int64 v55; // [rsp+38h] [rbp-80h]
  _WORD *v56; // [rsp+40h] [rbp-78h]
  char *v57; // [rsp+48h] [rbp-70h]
  wchar_t *v58; // [rsp+50h] [rbp-68h]
  wchar_t *v59; // [rsp+58h] [rbp-60h]
  unsigned __int64 v60; // [rsp+60h] [rbp-58h]
  int v61; // [rsp+C8h] [rbp+10h]
  __int64 v62; // [rsp+D0h] [rbp+18h] BYREF
  int *v63; // [rsp+D8h] [rbp+20h]

  v63 = a4;
  v6 = (wchar_t *)a3;
  v56 = (_WORD *)a3;
  v57 = (char *)a3;
  v60 = a3;
  v7 = String1;
  v8 = &String1[a2];
  v59 = v8;
  v9 = (_WORD *)a3;
  v10 = a3;
  v11 = a3 + 2LL * *a4;
  v55 = v11;
  if ( a2 <= 0 )
  {
    *a4 = 0;
    return 3221227286LL;
  }
  v12 = a5;
  if ( String1 >= v8 )
  {
LABEL_109:
    if ( !v12 )
      goto LABEL_112;
    goto LABEL_113;
  }
  while ( 1 )
  {
    LOBYTE(a3) = v12;
    v13 = sub_18006B04C(v7, v8, a3, 45LL);
    v17 = (wchar_t *)v13;
    if ( (wchar_t *)v13 == v7 )
      break;
    if ( !v12 && a6 && (*v7 == v14 || v13 > v16 && *(_WORD *)(v13 - 2) == v14) )
      goto LABEL_39;
    v18 = L"xl--";
    if ( !v12 )
      v18 = L"xn--";
    v19 = 0;
    a3 = 3221225485LL;
    v20 = (__int64)(v11 - (_QWORD)v6) >> 1;
    if ( (unsigned __int64)(v20 - 1) > 0x7FFFFFFE )
      v19 = -1073741811;
    if ( v19 < 0 )
    {
      if ( v20 )
        *v6 = 0;
    }
    else
    {
      v21 = v6;
      v19 = 0;
      if ( !v20 )
      {
        if ( *v18 )
        {
          if ( !v6 )
          {
LABEL_107:
            result = 3221225507LL;
            goto LABEL_40;
          }
          v19 = -2147483643;
        }
LABEL_13:
        v6 = v21;
        goto LABEL_14;
      }
      v62 = 0LL;
      v19 = sub_180003B54(v6, v20, &v62, (__int64)v18, 4LL);
      a3 = 0x80000000LL;
      v21 = &v6[v62];
      if ( (int)(v19 + 0x80000000) < 0 || v19 == -2147483643 )
        goto LABEL_13;
    }
LABEL_14:
    if ( v19 < 0 )
      goto LABEL_107;
    v22 = 0;
    for ( i = v7; i < v17; ++i )
    {
      a3 = *i;
      if ( (unsigned __int16)a3 >= 0x80u )
      {
        LOWORD(a3) = a3 + 10240;
        if ( (unsigned __int16)a3 <= 0x3FFu )
          ++i;
      }
      else
      {
        if ( !v12
          && (a6 && !(unsigned __int8)sub_18008AB28((unsigned __int16)a3)
           || (unsigned __int16)a3 < 0x20u
           || (_WORD)a3 == 127)
          || !(_WORD)a3 )
        {
          goto LABEL_39;
        }
        if ( (unsigned __int64)v6 >= v11 )
          goto LABEL_107;
        if ( v12 || (unsigned __int16)(a3 - 65) > 0x19u )
          v24 = a3;
        else
          v24 = a3 + 32;
        *v6++ = v24;
        ++v22;
      }
    }
    v53 = v22;
    v25 = v17 - v7;
    if ( v22 == v25 )
    {
      v26 = v57;
      v6 -= 4;
      v27 = (wchar_t *)v57;
      if ( v57 < (char *)v6 )
      {
        do
        {
          *v27 = v27[4];
          ++v27;
        }
        while ( v27 < v6 );
      }
    }
    else
    {
      if ( (__int64)(((char *)v59 - (char *)v7) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 && !wcsnicmp(v7, v18, 4uLL) )
        goto LABEL_39;
      v29 = 0;
      v61 = 0;
      if ( v22 > 0 )
      {
        if ( (unsigned __int64)v6 >= v55 )
        {
LABEL_106:
          result = 3221225507LL;
          goto LABEL_40;
        }
        *v6++ = 45;
      }
      v30 = 0;
      LODWORD(v62) = 72;
      for ( j = 128; v22 < v25; j = v32 + 1 )
      {
        v32 = 0x7FFFFFF;
        a3 = (unsigned __int64)v7;
        if ( v7 < v17 )
        {
          do
          {
            v33 = sub_1800F6A9C(a3);
            if ( v33 >= j && v33 < v32 )
              v32 = v33;
            v36 = 2LL;
            if ( v33 >= 0x10000 )
              v36 = v35;
            a3 = v36 + v34;
          }
          while ( a3 < (unsigned __int64)v17 );
          v29 = v61;
        }
        v37 = v7;
        v38 = (v32 - j) * (v22 - v29 + 1) + v30;
        for ( k = v7 < v17; ; k = &v58[v52] < v17 )
        {
          v58 = v37;
          if ( !k )
            break;
          v40 = sub_1800F6A9C(v37);
          v54 = v40;
          v41 = v40 == v32;
          if ( v40 < v32 )
          {
            ++v38;
            v41 = v40 == v32;
          }
          if ( v41 )
          {
            v42 = v62;
            v43 = 36;
            v44 = v38;
            v45 = -(int)v62;
            while ( 1 )
            {
              if ( v43 > v42 )
              {
                v46 = 26;
                if ( v43 < v42 + 26 )
                  v46 = v45 + v43;
              }
              else
              {
                v46 = 1;
              }
              if ( v44 < v46 )
                break;
              if ( (unsigned __int64)v6 >= v55 )
                goto LABEL_106;
              v47 = (v44 - v46) % (36 - v46);
              v44 = (v44 - v46) / (36 - v46);
              v48 = v47 + v46;
              if ( v47 + v46 <= 25 )
                v49 = v48 + 97;
              else
                v49 = v48 + 22;
              *v6++ = v49;
              v42 = v62;
              v43 += 36;
            }
            if ( (unsigned __int64)v6 >= v55 )
              goto LABEL_106;
            if ( v44 <= 25 )
              v50 = v44 + 97;
            else
              v50 = v44 + 22;
            *v6++ = v50;
            v51 = sub_18000449C(v38, v22 - v61 + 1, v22 == v53);
            v29 = v61;
            v38 = 0;
            ++v22;
            LODWORD(v62) = v51;
            if ( v32 >= 0x10000 )
            {
              ++v22;
              v29 = ++v61;
            }
          }
          v52 = 1LL;
          if ( v54 >= 0x10000 )
            v52 = 2LL;
          v37 = &v58[v52];
        }
        v30 = v38 + 1;
      }
      v26 = v57;
    }
    if ( !v12 && (__int64)(((char *)v6 - v26) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
      goto LABEL_39;
    v8 = v59;
    v11 = v55;
    if ( v17 == v59 )
      goto LABEL_36;
    if ( (unsigned __int64)v6 >= v55 )
      goto LABEL_107;
    *v6++ = *v17;
    if ( v12 && *v17 == 64 )
    {
      v9 = v6;
      v56 = v6;
      v12 = 0;
    }
    else
    {
LABEL_36:
      v9 = v56;
    }
    v57 = (char *)v6;
    v7 = v17 + 1;
    if ( v17 >= v59 )
    {
      a4 = v63;
      v10 = v60;
      goto LABEL_109;
    }
  }
  if ( v12 || v13 != v15 )
  {
    *v63 = 0;
    return 3221227286LL;
  }
  a4 = v63;
  v10 = v60;
LABEL_112:
  if ( v6 - v9 <= 255LL - (*(v6 - 1) != 46) )
  {
LABEL_113:
    if ( *(v6 - 1) != 64 )
    {
      *a4 = (__int64)((__int64)v6 - v10) >> 1;
      return 0LL;
    }
  }
LABEL_39:
  result = 3221227286LL;
LABEL_40:
  *v63 = 0;
  return result;
}
