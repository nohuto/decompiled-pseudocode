/*
 * XREFs of punycode_encode @ 0x1800854C8
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x18004E6E4 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x180001E98 (RtlStringCopyWorkerW.c)
 *     adapt @ 0x180002150 (adapt.c)
 *     FindLabelEnd @ 0x18004F5F0 (FindLabelEnd.c)
 *     ValidateStd3Range @ 0x180087AD8 (ValidateStd3Range.c)
 *     _wcsnicmp @ 0x1800926C0 (_wcsnicmp.c)
 *     GetUTF32 @ 0x1800F7F70 (GetUTF32.c)
 */

__int64 __fastcall punycode_encode(wchar_t *String1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  wchar_t *v6; // rbx
  wchar_t *v7; // r15
  wchar_t *v8; // r10
  wchar_t *v9; // rsi
  wchar_t *v10; // r12
  unsigned __int64 v11; // rbp
  char v12; // r14
  wchar_t *LabelEnd; // rax
  __int16 v14; // r9
  wchar_t *v15; // r10
  unsigned __int64 v16; // r11
  wchar_t *v17; // rdi
  const wchar_t *v18; // r12
  int v19; // edx
  __int64 v20; // rcx
  wchar_t *v21; // rax
  int v22; // esi
  wchar_t *i; // r8
  __int64 v24; // rcx
  __int64 v25; // r13
  char *v26; // rdx
  wchar_t *j; // rcx
  __int64 result; // rax
  int v29; // r10d
  int v30; // r12d
  int k; // r9d
  int v32; // r11d
  wchar_t *v33; // r8
  int UTF32; // eax
  __int64 v35; // r8
  __int64 v36; // r10
  __int64 v37; // rcx
  wchar_t *v38; // rbp
  int m; // r12d
  int v40; // eax
  bool v41; // zf
  int v42; // r8d
  int n; // r10d
  int v44; // r9d
  int v45; // edx
  __int16 v46; // ax
  wchar_t v47; // ax
  wchar_t v48; // r8
  int v49; // eax
  __int64 v50; // rcx
  int v51; // [rsp+30h] [rbp-78h]
  int v52; // [rsp+34h] [rbp-74h]
  unsigned __int64 v53; // [rsp+38h] [rbp-70h]
  wchar_t *v54; // [rsp+40h] [rbp-68h]
  wchar_t *v55; // [rsp+48h] [rbp-60h]
  wchar_t *v56; // [rsp+50h] [rbp-58h]
  int v58; // [rsp+B8h] [rbp+10h]
  __int64 v59; // [rsp+C0h] [rbp+18h] BYREF
  int *v60; // [rsp+C8h] [rbp+20h]

  v60 = a4;
  v6 = a3;
  v54 = a3;
  v55 = a3;
  v7 = String1;
  v8 = &String1[a2];
  v56 = v8;
  v9 = a3;
  v10 = a3;
  v11 = (unsigned __int64)&a3[*a4];
  v53 = v11;
  if ( a2 <= 0 )
  {
    *a4 = 0;
    return 3221227286LL;
  }
  v12 = a5;
  if ( String1 >= v8 )
  {
LABEL_107:
    if ( !v12 )
      goto LABEL_110;
    goto LABEL_111;
  }
  while ( 1 )
  {
    LabelEnd = FindLabelEnd(v7, (unsigned __int64)v8, v12);
    v17 = LabelEnd;
    if ( LabelEnd == v7 )
      break;
    if ( !v12 && a6 && (*v7 == v14 || (unsigned __int64)LabelEnd > v16 && *(LabelEnd - 1) == v14) )
      goto LABEL_39;
    v18 = L"xl--";
    if ( !v12 )
      v18 = L"xn--";
    v19 = 0;
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
LABEL_105:
            result = 3221225507LL;
            goto LABEL_40;
          }
          v19 = -2147483643;
        }
LABEL_13:
        v6 = v21;
        goto LABEL_14;
      }
      v59 = 0LL;
      v19 = RtlStringCopyWorkerW(v6, v20, &v59, (__int64)v18, 4LL);
      v21 = &v6[v59];
      if ( (int)(v19 + 0x80000000) < 0 || v19 == -2147483643 )
        goto LABEL_13;
    }
LABEL_14:
    if ( v19 < 0 )
      goto LABEL_105;
    v22 = 0;
    for ( i = v7; i < v17; ++i )
    {
      v24 = *i;
      if ( (unsigned __int16)v24 >= 0x80u )
      {
        if ( (unsigned __int16)(v24 + 10240) <= 0x3FFu )
          ++i;
      }
      else
      {
        if ( !v12
          && (a6 && !(unsigned __int8)ValidateStd3Range(v24) || (unsigned __int16)v24 < 0x20u || (_WORD)v24 == 127)
          || !(_WORD)v24 )
        {
          goto LABEL_39;
        }
        if ( (unsigned __int64)v6 >= v11 )
          goto LABEL_105;
        if ( !v12 && (unsigned __int16)(v24 - 65) <= 0x19u )
          LOWORD(v24) = v24 + 32;
        *v6++ = v24;
        ++v22;
      }
    }
    v51 = v22;
    v25 = v17 - v7;
    if ( v22 == v25 )
    {
      v26 = (char *)v55;
      v6 -= 4;
      for ( j = v55; j < v6; ++j )
        *j = j[4];
    }
    else
    {
      if ( (__int64)(((char *)v56 - (char *)v7) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 && !wcsnicmp(v7, v18, 4uLL) )
        goto LABEL_39;
      v29 = 0;
      v58 = 0;
      if ( v22 > 0 )
      {
        if ( (unsigned __int64)v6 >= v53 )
        {
LABEL_104:
          result = 3221225507LL;
          goto LABEL_40;
        }
        *v6++ = 45;
      }
      v30 = 0;
      LODWORD(v59) = 72;
      for ( k = 128; v22 < v25; k = v32 + 1 )
      {
        v32 = 0x7FFFFFF;
        v33 = v7;
        if ( v7 < v17 )
        {
          do
          {
            UTF32 = GetUTF32(v33);
            if ( UTF32 >= k && UTF32 < v32 )
              v32 = UTF32;
            v37 = 2LL;
            if ( UTF32 >= 0x10000 )
              v37 = v36;
            v33 = (wchar_t *)(v37 + v35);
          }
          while ( v33 < v17 );
          v29 = v58;
        }
        v38 = v7;
        for ( m = (v32 - k) * (v22 - v29 + 1) + v30; v38 < v17; v38 = (wchar_t *)((char *)v38 + v50) )
        {
          v40 = GetUTF32(v38);
          v52 = v40;
          v41 = v40 == v32;
          if ( v40 < v32 )
          {
            ++m;
            v41 = v40 == v32;
          }
          if ( v41 )
          {
            v42 = m;
            for ( n = 36; ; n += 36 )
            {
              if ( n > (int)v59 )
                v44 = n < (int)v59 + 26 ? n - v59 : 26;
              else
                v44 = 1;
              if ( v42 < v44 )
                break;
              if ( (unsigned __int64)v6 >= v53 )
                goto LABEL_104;
              v45 = (v42 - v44) % (36 - v44);
              v42 = (v42 - v44) / (36 - v44);
              v46 = v45 + v44;
              if ( v45 + v44 <= 25 )
                v47 = v46 + 97;
              else
                v47 = v46 + 22;
              *v6++ = v47;
            }
            if ( (unsigned __int64)v6 >= v53 )
              goto LABEL_104;
            if ( v42 <= 25 )
              v48 = v42 + 97;
            else
              v48 = v42 + 22;
            *v6++ = v48;
            v49 = adapt(m, v22 - v58 + 1, v22 == v51);
            v29 = v58;
            m = 0;
            ++v22;
            LODWORD(v59) = v49;
            if ( v32 >= 0x10000 )
            {
              ++v22;
              v29 = ++v58;
            }
          }
          v50 = 2LL;
          if ( v52 >= 0x10000 )
            v50 = 4LL;
        }
        v30 = m + 1;
      }
      v26 = (char *)v55;
    }
    if ( !v12 && (__int64)(((char *)v6 - v26) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
      goto LABEL_39;
    v8 = v56;
    v11 = v53;
    if ( v17 == v56 )
      goto LABEL_36;
    if ( (unsigned __int64)v6 >= v53 )
      goto LABEL_105;
    *v6++ = *v17;
    if ( v12 && *v17 == 64 )
    {
      v9 = v6;
      v54 = v6;
      v12 = 0;
    }
    else
    {
LABEL_36:
      v9 = v54;
    }
    v55 = v6;
    v7 = v17 + 1;
    if ( v17 >= v56 )
    {
      a4 = v60;
      v10 = a3;
      goto LABEL_107;
    }
  }
  if ( v12 || LabelEnd != v15 )
  {
    *v60 = 0;
    return 3221227286LL;
  }
  a4 = v60;
  v10 = a3;
LABEL_110:
  if ( v6 - v9 <= 255LL - (*(v6 - 1) != 46) )
  {
LABEL_111:
    if ( *(v6 - 1) != 64 )
    {
      *a4 = v6 - v10;
      return 0LL;
    }
  }
LABEL_39:
  result = 3221227286LL;
LABEL_40:
  *v60 = 0;
  return result;
}
