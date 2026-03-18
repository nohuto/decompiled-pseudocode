/*
 * XREFs of punycode_encode @ 0x1406ECCE8
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x1406EC0CC (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x14004CE10 (RtlStringCchCopyNExW.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x14023F614 (FindLabelEnd.c)
 *     GetUTF32 @ 0x14023F650 (GetUTF32.c)
 *     ValidateStd3Range @ 0x14023F6A8 (ValidateStd3Range.c)
 *     adapt @ 0x14023F6E4 (adapt.c)
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
  const wchar_t *v19; // r12
  int v20; // r15d
  unsigned __int16 *i; // r8
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // ax
  __int64 v24; // r13
  wchar_t *v25; // rdx
  wchar_t *j; // rcx
  int v27; // edx
  int v28; // r12d
  int k; // r10d
  int v30; // r11d
  unsigned __int16 *v31; // r9
  int UTF32; // eax
  __int64 v33; // r9
  __int64 v34; // rcx
  unsigned __int16 *v35; // rax
  int v36; // r12d
  bool m; // cf
  int v38; // eax
  bool v39; // zf
  int v40; // eax
  int v41; // r10d
  int v42; // r8d
  int v43; // r9d
  int v44; // edx
  __int16 v45; // ax
  wchar_t v46; // ax
  wchar_t v47; // r8
  int v48; // eax
  __int64 v49; // rcx
  int v50; // [rsp+40h] [rbp-98h]
  unsigned __int64 v51; // [rsp+48h] [rbp-90h]
  wchar_t *v52; // [rsp+50h] [rbp-88h]
  wchar_t *v53; // [rsp+58h] [rbp-80h]
  int v54; // [rsp+60h] [rbp-78h]
  int v55; // [rsp+64h] [rbp-74h]
  unsigned __int16 *v56; // [rsp+68h] [rbp-70h]
  wchar_t *v57; // [rsp+70h] [rbp-68h]
  __int64 v59; // [rsp+80h] [rbp-58h]
  int v60; // [rsp+E8h] [rbp+10h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+F0h] [rbp+18h] BYREF
  int *v62; // [rsp+F8h] [rbp+20h]

  v62 = a4;
  ppszDestEnd = a3;
  v6 = a3;
  v52 = a3;
  v53 = a3;
  v7 = Str1;
  v8 = &Str1[a2];
  v57 = v8;
  v9 = a3;
  v10 = a3;
  v11 = &a3[*a4];
  v51 = (unsigned __int64)v11;
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
        goto LABEL_99;
      v19 = L"xl--";
      if ( !v13 )
        v19 = L"xn--";
      if ( RtlStringCchCopyNExW(v6, v11 - v6, v19, 4uLL, &ppszDestEnd, 0LL, 0) < 0 )
      {
LABEL_92:
        result = 3221225507LL;
        goto LABEL_100;
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
            goto LABEL_99;
          if ( v6 >= v11 )
            goto LABEL_92;
          if ( v13 || (unsigned __int16)(v22 - 65) > 0x19u )
            v23 = v22;
          else
            v23 = v22 + 32;
          *v6++ = v23;
          ppszDestEnd = v6;
          ++v20;
        }
      }
      v54 = v20;
      v24 = v18 - v7;
      v59 = v24;
      if ( v20 == v24 )
      {
        v25 = v53;
        v6 -= 4;
        for ( j = v53; j < v6; ++j )
          *j = j[4];
        ppszDestEnd = v6;
      }
      else
      {
        if ( (__int64)(((char *)v57 - (char *)v7) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 && !wcsnicmp(v7, v19, 4uLL) )
          goto LABEL_99;
        v27 = 0;
        v60 = 0;
        if ( v20 > 0 )
        {
          if ( (unsigned __int64)v6 >= v51 )
          {
LABEL_88:
            result = 3221225507LL;
            goto LABEL_100;
          }
          *v6++ = 45;
          ppszDestEnd = v6;
        }
        v28 = 0;
        v50 = 72;
        for ( k = 128; v20 < v24; k = v30 + 1 )
        {
          v30 = 0x7FFFFFF;
          v31 = v7;
          if ( v7 < v18 )
          {
            do
            {
              UTF32 = GetUTF32(v31);
              if ( UTF32 >= k && UTF32 < v30 )
                v30 = UTF32;
              v34 = 2LL;
              if ( UTF32 >= 0x10000 )
                v34 = 4LL;
              v31 = (unsigned __int16 *)(v34 + v33);
            }
            while ( v31 < v18 );
            v24 = v59;
            v27 = v60;
          }
          v35 = v7;
          v36 = (v30 - k) * (v20 - v27 + 1) + v28;
          for ( m = v7 < v18; ; m = &v56[v49] < v18 )
          {
            v56 = v35;
            if ( !m )
              break;
            v38 = GetUTF32(v35);
            v55 = v38;
            v39 = v38 == v30;
            if ( v38 < v30 )
            {
              ++v36;
              v39 = v38 == v30;
            }
            if ( v39 )
            {
              v40 = v50;
              v41 = 36;
              v42 = v36;
              while ( 1 )
              {
                if ( v41 > v40 )
                {
                  v43 = 26;
                  if ( v41 < v40 + 26 )
                    v43 = v41 - v50;
                }
                else
                {
                  v43 = 1;
                }
                if ( v42 < v43 )
                  break;
                if ( (unsigned __int64)v6 >= v51 )
                  goto LABEL_88;
                v44 = (v42 - v43) % (36 - v43);
                v42 = (v42 - v43) / (36 - v43);
                v45 = v44 + v43;
                if ( v44 + v43 <= 25 )
                  v46 = v45 + 97;
                else
                  v46 = v45 + 22;
                *v6++ = v46;
                v40 = v50;
                v41 += 36;
              }
              if ( (unsigned __int64)v6 >= v51 )
                goto LABEL_88;
              if ( v42 <= 25 )
                v47 = v42 + 97;
              else
                v47 = v42 + 22;
              *v6++ = v47;
              ppszDestEnd = v6;
              v48 = adapt(v36, v20 - v60 + 1, v20 == v54);
              v27 = v60;
              v36 = 0;
              ++v20;
              v50 = v48;
              if ( v30 >= 0x10000 )
              {
                ++v20;
                v27 = ++v60;
              }
            }
            else
            {
              v27 = v60;
            }
            v49 = 1LL;
            if ( v55 >= 0x10000 )
              v49 = 2LL;
            v35 = &v56[v49];
          }
          v28 = v36 + 1;
        }
        v25 = v53;
      }
      if ( !v13 && (__int64)(((char *)v6 - (char *)v25) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
        goto LABEL_99;
      v8 = v57;
      v11 = (wchar_t *)v51;
      if ( v18 == v57 )
        goto LABEL_84;
      if ( (unsigned __int64)v6 >= v51 )
        goto LABEL_92;
      *v6++ = *v18;
      ppszDestEnd = v6;
      if ( v13 && *v18 == 64 )
      {
        v9 = v6;
        v52 = v6;
        v13 = 0;
      }
      else
      {
LABEL_84:
        v9 = v52;
      }
      v53 = v6;
      v7 = v18 + 1;
      if ( v18 >= v57 )
      {
        a4 = v62;
        v10 = a3;
        goto LABEL_90;
      }
    }
    if ( v13 || LabelEnd != v16 )
    {
      *v62 = 0;
      return 3221227286LL;
    }
    a4 = v62;
    v10 = a3;
LABEL_97:
    if ( v6 - v9 > 255LL - (*(v6 - 1) != 46) )
      goto LABEL_99;
    goto LABEL_98;
  }
LABEL_90:
  if ( !v13 )
    goto LABEL_97;
LABEL_98:
  if ( *(v6 - 1) != 64 )
  {
    *a4 = v6 - v10;
    return 0LL;
  }
LABEL_99:
  result = 3221227286LL;
LABEL_100:
  *v62 = 0;
  return result;
}
