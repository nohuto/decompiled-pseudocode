/*
 * XREFs of punycode_encode @ 0x140725184
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x140724598 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x1400DE810 (RtlStringCchCopyNExW.c)
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x140255854 (FindLabelEnd.c)
 *     GetUTF32 @ 0x140255890 (GetUTF32.c)
 *     ValidateStd3Range @ 0x1402559A8 (ValidateStd3Range.c)
 *     adapt @ 0x1402559E4 (adapt.c)
 */

__int64 __fastcall punycode_encode(wchar_t *Str1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  wchar_t *v6; // rbx
  wchar_t *v7; // rbp
  wchar_t *v8; // r10
  wchar_t *v9; // r15
  wchar_t *v10; // r12
  wchar_t *v11; // r14
  __int64 result; // rax
  char v13; // si
  wchar_t *LabelEnd; // rax
  __int16 v15; // r9
  wchar_t *v16; // r10
  unsigned __int64 v17; // r11
  unsigned __int16 *v18; // rdi
  const wchar_t *v19; // r15
  int v20; // r12d
  unsigned __int16 *i; // r8
  unsigned __int16 v22; // cx
  __int64 v23; // r13
  wchar_t *v24; // rdx
  wchar_t *j; // rcx
  int v26; // edx
  int v27; // r15d
  int k; // r10d
  int v29; // r11d
  unsigned __int16 *v30; // r9
  int UTF32; // eax
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned __int16 *v34; // r14
  int m; // r15d
  int v36; // eax
  bool v37; // zf
  int v38; // r8d
  int n; // r10d
  int v40; // r9d
  int v41; // edx
  __int16 v42; // ax
  wchar_t v43; // ax
  wchar_t v44; // r8
  int v45; // eax
  __int64 v46; // rcx
  int v47; // [rsp+40h] [rbp-88h]
  unsigned __int64 v48; // [rsp+48h] [rbp-80h]
  wchar_t *v49; // [rsp+50h] [rbp-78h]
  wchar_t *v50; // [rsp+58h] [rbp-70h]
  int v51; // [rsp+60h] [rbp-68h]
  int v52; // [rsp+64h] [rbp-64h]
  wchar_t *v53; // [rsp+68h] [rbp-60h]
  __int64 v55; // [rsp+78h] [rbp-50h]
  int v56; // [rsp+D8h] [rbp+10h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E0h] [rbp+18h] BYREF
  int *v58; // [rsp+E8h] [rbp+20h]

  v58 = a4;
  ppszDestEnd = a3;
  v6 = a3;
  v49 = a3;
  v50 = a3;
  v7 = Str1;
  v8 = &Str1[a2];
  v53 = v8;
  v9 = a3;
  v10 = a3;
  v11 = &a3[*a4];
  v48 = (unsigned __int64)v11;
  if ( a2 <= 0 )
  {
    *a4 = 0;
    return 3221227286LL;
  }
  v13 = a5;
  if ( Str1 < v8 )
  {
    while ( 1 )
    {
      LabelEnd = FindLabelEnd(v7, (unsigned __int64)v8, v13);
      v18 = LabelEnd;
      if ( LabelEnd == v7 )
        break;
      if ( !v13 && a6 && (*v7 == v15 || (unsigned __int64)LabelEnd > v17 && *(LabelEnd - 1) == v15) )
        goto LABEL_98;
      v19 = L"xl--";
      if ( !v13 )
        v19 = L"xn--";
      if ( RtlStringCchCopyNExW(v6, v11 - v6, v19, 4uLL, &ppszDestEnd, 0LL, 0) < 0 )
      {
LABEL_91:
        result = 3221225507LL;
        goto LABEL_99;
      }
      v6 = ppszDestEnd;
      v20 = 0;
      for ( i = v7; i < v18; ++i )
      {
        v22 = *i;
        if ( *i >= 0x80u )
        {
          if ( (unsigned __int16)(v22 + 10240) <= 0x3FFu )
            ++i;
        }
        else
        {
          if ( !v13 && (a6 && !ValidateStd3Range(v22) || v22 < 0x20u || v22 == 127) || !v22 )
            goto LABEL_98;
          if ( v6 >= v11 )
            goto LABEL_91;
          if ( !v13 && (unsigned __int16)(v22 - 65) <= 0x19u )
            v22 += 32;
          *v6++ = v22;
          ppszDestEnd = v6;
          ++v20;
        }
      }
      v51 = v20;
      v23 = v18 - v7;
      v55 = v23;
      if ( v20 == v23 )
      {
        v24 = v50;
        v6 -= 4;
        for ( j = v50; j < v6; ++j )
          *j = j[4];
        ppszDestEnd = v6;
      }
      else
      {
        if ( (__int64)(((char *)v53 - (char *)v7) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 && !wcsnicmp(v7, v19, 4uLL) )
          goto LABEL_98;
        v26 = 0;
        v56 = 0;
        if ( v20 > 0 )
        {
          if ( (unsigned __int64)v6 >= v48 )
          {
LABEL_87:
            result = 3221225507LL;
            goto LABEL_99;
          }
          *v6++ = 45;
          ppszDestEnd = v6;
        }
        v27 = 0;
        v47 = 72;
        for ( k = 128; v20 < v23; k = v29 + 1 )
        {
          v29 = 0x7FFFFFF;
          v30 = v7;
          if ( v7 < v18 )
          {
            do
            {
              UTF32 = GetUTF32(v30);
              if ( UTF32 >= k && UTF32 < v29 )
                v29 = UTF32;
              v33 = 2LL;
              if ( UTF32 >= 0x10000 )
                v33 = 4LL;
              v30 = (unsigned __int16 *)(v33 + v32);
            }
            while ( v30 < v18 );
            v23 = v55;
            v26 = v56;
          }
          v34 = v7;
          for ( m = (v29 - k) * (v20 - v26 + 1) + v27; v34 < v18; v34 = (unsigned __int16 *)((char *)v34 + v46) )
          {
            v36 = GetUTF32(v34);
            v52 = v36;
            v37 = v36 == v29;
            if ( v36 < v29 )
            {
              ++m;
              v37 = v36 == v29;
            }
            if ( v37 )
            {
              v38 = m;
              for ( n = 36; ; n += 36 )
              {
                if ( n > v47 )
                  v40 = n < v47 + 26 ? n - v47 : 26;
                else
                  v40 = 1;
                if ( v38 < v40 )
                  break;
                if ( (unsigned __int64)v6 >= v48 )
                  goto LABEL_87;
                v41 = (v38 - v40) % (36 - v40);
                v38 = (v38 - v40) / (36 - v40);
                v42 = v41 + v40;
                if ( v41 + v40 <= 25 )
                  v43 = v42 + 97;
                else
                  v43 = v42 + 22;
                *v6++ = v43;
              }
              if ( (unsigned __int64)v6 >= v48 )
                goto LABEL_87;
              if ( v38 <= 25 )
                v44 = v38 + 97;
              else
                v44 = v38 + 22;
              *v6++ = v44;
              ppszDestEnd = v6;
              v45 = adapt(m, v20 - v56 + 1, v20 == v51);
              v26 = v56;
              m = 0;
              ++v20;
              v47 = v45;
              if ( v29 >= 0x10000 )
              {
                ++v20;
                v26 = ++v56;
              }
            }
            else
            {
              v26 = v56;
            }
            v46 = 2LL;
            if ( v52 >= 0x10000 )
              v46 = 4LL;
          }
          v27 = m + 1;
        }
        v24 = v50;
      }
      if ( !v13 && (__int64)(((char *)v6 - (char *)v24) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
        goto LABEL_98;
      v8 = v53;
      v11 = (wchar_t *)v48;
      if ( v18 == v53 )
        goto LABEL_83;
      if ( (unsigned __int64)v6 >= v48 )
        goto LABEL_91;
      *v6++ = *v18;
      ppszDestEnd = v6;
      if ( v13 && *v18 == 64 )
      {
        v9 = v6;
        v49 = v6;
        v13 = 0;
      }
      else
      {
LABEL_83:
        v9 = v49;
      }
      v50 = v6;
      v7 = v18 + 1;
      if ( v18 >= v53 )
      {
        a4 = v58;
        v10 = a3;
        goto LABEL_89;
      }
    }
    if ( v13 || LabelEnd != v16 )
    {
      *v58 = 0;
      return 3221227286LL;
    }
    a4 = v58;
    v10 = a3;
LABEL_96:
    if ( v6 - v9 > 255LL - (*(v6 - 1) != 46) )
      goto LABEL_98;
    goto LABEL_97;
  }
LABEL_89:
  if ( !v13 )
    goto LABEL_96;
LABEL_97:
  if ( *(v6 - 1) != 64 )
  {
    *a4 = v6 - v10;
    return 0LL;
  }
LABEL_98:
  result = 3221227286LL;
LABEL_99:
  *v58 = 0;
  return result;
}
