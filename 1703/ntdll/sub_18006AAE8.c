/*
 * XREFs of sub_18006AAE8 @ 0x18006AAE8
 * Callers:
 *     RtlIdnToUnicode @ 0x18006A930 (RtlIdnToUnicode.c)
 * Callees:
 *     sub_18000449C @ 0x18000449C (sub_18000449C.c)
 *     sub_180004534 @ 0x180004534 (sub_180004534.c)
 *     sub_18006B04C @ 0x18006B04C (sub_18006B04C.c)
 *     sub_18008AB28 @ 0x18008AB28 (sub_18008AB28.c)
 *     _wcsnicmp @ 0x1800977C0 (_wcsnicmp.c)
 */

__int64 __fastcall sub_18006AAE8(
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
  wchar_t *v10; // r9
  unsigned __int16 *v11; // rbx
  unsigned __int16 *v12; // r8
  unsigned __int16 *v13; // r14
  wchar_t *v14; // rsi
  unsigned __int16 *v15; // r12
  wchar_t *v16; // rbp
  char v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  signed __int64 v20; // r10
  wchar_t *v21; // r11
  wchar_t *v22; // rdi
  int v23; // r11d
  const wchar_t *v24; // rdx
  int v25; // eax
  wchar_t *v27; // r9
  __int64 v28; // r10
  unsigned __int16 v29; // ax
  int v30; // eax
  int v31; // r13d
  int v32; // r14d
  int v33; // r10d
  wchar_t *v34; // r12
  int v35; // r11d
  int v36; // r9d
  int v37; // r8d
  int v38; // r10d
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  __int64 v42; // r11
  __int64 v43; // r11
  __int64 v44; // rax
  __int64 v45; // r14
  unsigned __int16 *v46; // r11
  int v47; // ecx
  __int64 v48; // r11
  __int16 v49; // r10
  int v50; // [rsp+20h] [rbp-78h]
  int v51; // [rsp+24h] [rbp-74h]
  unsigned __int16 *v52; // [rsp+28h] [rbp-70h]
  unsigned __int64 v53; // [rsp+30h] [rbp-68h]
  wchar_t *v54; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v55; // [rsp+40h] [rbp-58h]
  int v57; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v58; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v59; // [rsp+B8h] [rbp+20h]

  v59 = a4;
  v58 = a3;
  v8 = a7;
  v10 = String1;
  v11 = a3;
  v12 = (unsigned __int16 *)*a4;
  *a7 = 1;
  *a4 = 0;
  if ( a2 <= 0 )
    return 3221227286LL;
  v13 = &v11[(_QWORD)v12];
  v14 = String1;
  v54 = String1 - 1;
  v15 = v11;
  v52 = v11;
  v55 = v11;
  v16 = &String1[a2];
  v53 = (unsigned __int64)v13;
  *a8 = v11 - 1;
  if ( String1 >= v16 )
    return 3221227286LL;
  v17 = a5;
  while ( 1 )
  {
    LOBYTE(v12) = v17;
    v18 = sub_18006B04C(v14, v16, v12, v10);
    v22 = (wchar_t *)v18;
    if ( (wchar_t *)v18 == v14 )
      break;
    LOBYTE(v23) = 0;
    if ( !v17
      && (a6 && (*v14 == 45 || v18 > v19 && *(_WORD *)(v18 - 2) == 45)
       || (__int64)((v18 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFFEuLL) > v20) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v16 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
      goto LABEL_13;
    v24 = L"xl--";
    if ( !v17 )
      v24 = L"xn--";
    v25 = wcsnicmp(v14, v24, 4uLL);
    v23 = 0;
    if ( v25 )
    {
      LOWORD(v20) = 126;
LABEL_13:
      if ( (__int64)(((char *)v13 - (char *)v11) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v22 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) )
        return 3221227286LL;
      v12 = v14;
      if ( v14 < v22 )
      {
        while ( (v17 || (a6 == (_BYTE)v23 || (unsigned __int8)sub_18008AB28(*v12)) && *v12 >= 0x20u && *v12 != 127)
             && (unsigned __int16)(*v12 - 1) <= (unsigned __int16)v20 )
        {
          *v11 = *v12++;
          v58 = ++v11;
          if ( v12 >= v22 )
            goto LABEL_21;
        }
        return 3221227286LL;
      }
      goto LABEL_21;
    }
    *v8 = 0;
    v14 += 4;
    v12 = v22 - 1;
    if ( v22 - 1 < v14 )
    {
LABEL_88:
      v12 = 0LL;
    }
    else
    {
      while ( *v12 != 45 )
      {
        if ( --v12 < v14 )
          goto LABEL_88;
      }
    }
    if ( v12 == v22 - 1 )
      return 3221227286LL;
    if ( v12 && v12 > v14 )
    {
      v27 = v14;
      v28 = v12 - v14;
      if ( v14 != v12 )
      {
        do
        {
          if ( v11 >= v13 )
            break;
          if ( !v17 && (a6 != (_BYTE)v23 && !(unsigned __int8)sub_18008AB28(*v27) || *v27 < 0x20u || *v27 == 127)
            || (unsigned __int16)(*v27 - 1) > 0x7Eu )
          {
            return 3221227286LL;
          }
          v29 = v17 || (unsigned __int16)(*v27 - 65) > 0x19u ? *v27 : *v27 + 32;
          *v11 = v29;
          ++v27;
          v58 = ++v11;
        }
        while ( v27 != v12 );
        if ( v27 != v12 )
          return 3221227286LL;
      }
    }
    else
    {
      LODWORD(v28) = 0;
    }
    v57 = v23;
    v30 = v28 + 1;
    v31 = 128;
    if ( (int)v28 <= 0 )
      v30 = v23;
    v32 = v23;
    v33 = 72;
    v50 = 72;
    v34 = &v14[v30];
    if ( v34 < v22 )
    {
LABEL_58:
      v35 = v32;
      v51 = v32;
      v36 = 1;
      v37 = 36;
      v38 = -v33;
      while ( v34 < v22 )
      {
        if ( (unsigned __int16)(*v34 - 48) <= 9u )
        {
          v40 = *v34 - 22;
        }
        else
        {
          v39 = 97;
          if ( (unsigned __int16)(*v34 - 97) <= 0x19u || (v39 = 65, (unsigned __int16)(*v34 - 65) <= 0x19u) )
            v40 = *v34 - v39;
          else
            v40 = -1;
        }
        ++v34;
        if ( v40 < 0 || v40 > (0x7FFFFFF - v32) / v36 )
          break;
        v32 += v36 * v40;
        if ( v37 > v50 )
        {
          v41 = 26;
          if ( v37 < v50 + 26 )
            v41 = v38 + v37;
        }
        else
        {
          v41 = 1;
        }
        if ( v40 < v41 )
        {
          v50 = sub_18000449C(v32 - v51, (unsigned int)(v11 - v52) - v57 + 1, v35 == 0);
          v43 = v42 - v57;
          v44 = v32 / (v43 + 1);
          v45 = v32 % (v43 + 1);
          if ( v44 > 0x7FFFFFF - v31 )
            return 3221227286LL;
          v31 += v44;
          if ( (unsigned int)(v31 - 128) > 0x10FF7F || (unsigned int)(v31 - 55296) <= 0x7FF )
            return 3221227286LL;
          if ( v57 > 0 )
          {
            v46 = v52;
            v47 = v45;
            if ( (int)v45 > 0 )
            {
              while ( v46 < v11 )
              {
                if ( (unsigned __int16)(*v46 + 10240) <= 0x7FFu )
                  ++v46;
                --v47;
                ++v46;
                if ( v47 <= 0 )
                  goto LABEL_77;
              }
              return 3221227286LL;
            }
          }
          else
          {
            v46 = &v52[(int)v45];
          }
LABEL_77:
          if ( v31 >= 0x10000 )
          {
            if ( (unsigned __int64)v11 >= v53 - 2 || v46 > v11 )
              return 3221227286LL;
            sub_180004534((v31 - 0x10000) / 1024 - 10240, v46, &v58);
            sub_180004534(v49 - 9216, (unsigned __int16 *)(v48 + 2), &v58);
            v33 = v50;
            ++v57;
          }
          else
          {
            if ( (unsigned __int64)v11 >= v53 || v46 > v11 )
              return 3221227286LL;
            sub_180004534(v31, v46, &v58);
          }
          v11 = v58;
          v32 = v45 + 1;
          if ( v34 < v22 )
            goto LABEL_58;
          goto LABEL_82;
        }
        if ( v36 > 0x7FFFFFF / (36 - v41) )
          return 3221227286LL;
        v36 *= 36 - v41;
        v37 += 36;
      }
      return 3221227286LL;
    }
LABEL_82:
    v8 = a7;
    v15 = v52;
    v13 = (unsigned __int16 *)v53;
LABEL_21:
    if ( !v17 && ((__int64)(((char *)v22 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v11 == v15) )
      return 3221227286LL;
    if ( v22 != v16 )
    {
      if ( v11 >= v13 )
        return 3221227286LL;
      *v11++ = *v22;
      v58 = v11;
    }
    if ( v17 )
    {
      v17 = 0;
      v54 = v22;
      v21 = v22;
      *a8 = (char *)v11 - (v16 != v22 ? 2 : 0);
      if ( v22 == v16 - 1 )
        return 3221227286LL;
    }
    else
    {
      v21 = v54;
    }
    v52 = v11;
    v14 = v22 + 1;
    v15 = v11;
    if ( v22 >= v16 )
      goto LABEL_33;
    v10 = String1;
  }
  if ( v17 || (wchar_t *)v18 != v16 )
    return 3221227286LL;
LABEL_33:
  if ( v11 != v55 && v16 - v21 <= 256LL - (*(v16 - 1) != 46) )
  {
    *v59 = v11 - v55;
    return 0LL;
  }
  return 3221227286LL;
}
