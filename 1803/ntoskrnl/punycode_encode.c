/*
 * XREFs of punycode_encode @ 0x140788A6C
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x140787E68 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x14006DA04 (RtlStringCchCopyNExW.c)
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x14028D9E4 (FindLabelEnd.c)
 *     GetUTF32 @ 0x14028DA20 (GetUTF32.c)
 *     ValidateStd3Range @ 0x14028DA78 (ValidateStd3Range.c)
 *     adapt @ 0x14028DAB4 (adapt.c)
 */

__int64 __fastcall punycode_encode(wchar_t *Str1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  wchar_t *v6; // rbx
  _DWORD *v7; // r11
  wchar_t *v8; // r12
  wchar_t *v9; // rsi
  wchar_t *v10; // r15
  wchar_t *v11; // r14
  wchar_t *v12; // r13
  __int64 result; // rax
  char v14; // bp
  wchar_t *v15; // r10
  wchar_t *LabelEnd; // rax
  wchar_t *v17; // r9
  __int16 v18; // r10
  size_t *pcchRemaining; // r11
  unsigned __int16 *v20; // rdi
  const wchar_t *v21; // r15
  NTSTATUS v22; // eax
  int v23; // r12d
  unsigned __int16 *i; // r8
  unsigned __int16 v25; // cx
  __int64 v26; // r13
  wchar_t *v27; // rdx
  wchar_t *j; // rcx
  int v29; // eax
  int v30; // edx
  int v31; // r10d
  int v32; // r15d
  int v33; // r11d
  unsigned __int16 *v34; // r9
  int UTF32; // eax
  __int64 v36; // r9
  __int64 v37; // rcx
  unsigned __int16 *v38; // r14
  int k; // r15d
  int v40; // eax
  bool v41; // zf
  int v42; // r8d
  int m; // r10d
  int v44; // r9d
  int v45; // edx
  __int16 v46; // ax
  wchar_t v47; // ax
  wchar_t v48; // r8
  int v49; // eax
  __int64 v50; // rcx
  wchar_t *v51; // rcx
  int v52; // [rsp+40h] [rbp-88h]
  unsigned __int64 v53; // [rsp+48h] [rbp-80h]
  wchar_t *v54; // [rsp+50h] [rbp-78h]
  int v55; // [rsp+58h] [rbp-70h]
  int v56; // [rsp+5Ch] [rbp-6Ch]
  wchar_t *v57; // [rsp+60h] [rbp-68h]
  wchar_t *v59; // [rsp+70h] [rbp-58h]
  __int64 v60; // [rsp+78h] [rbp-50h]
  int v62; // [rsp+D8h] [rbp+10h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E0h] [rbp+18h] BYREF
  _DWORD *v64; // [rsp+E8h] [rbp+20h]

  v64 = a4;
  ppszDestEnd = a3;
  v6 = a3;
  v7 = a4;
  v59 = a3;
  v8 = Str1;
  v9 = Str1;
  v10 = a3;
  v11 = &Str1[a2];
  v57 = v11;
  v12 = &a3[*a4];
  v53 = (unsigned __int64)v12;
  if ( a2 <= 0 )
  {
    *a4 = 0;
    return 3221227286LL;
  }
  v14 = a5;
  v15 = a3;
  if ( Str1 < v11 )
  {
    v54 = a3;
    while ( 1 )
    {
      LabelEnd = FindLabelEnd(v9, (unsigned __int64)v11, v14);
      v20 = LabelEnd;
      if ( LabelEnd == v9 )
        break;
      if ( !v14 && a6 != (_BYTE)pcchRemaining && (*v9 == v18 || LabelEnd > v8 && *(LabelEnd - 1) == v18) )
        goto LABEL_99;
      v21 = L"xl--";
      if ( !v14 )
        v21 = L"xn--";
      v22 = RtlStringCchCopyNExW(v6, v12 - v6, v21, 4uLL, &ppszDestEnd, pcchRemaining, (ULONG)pcchRemaining);
      LODWORD(pcchRemaining) = 0;
      if ( v22 < 0 )
      {
LABEL_91:
        result = 3221225507LL;
        goto LABEL_100;
      }
      v6 = ppszDestEnd;
      v23 = 0;
      for ( i = v9; i < v20; ++i )
      {
        v25 = *i;
        if ( *i >= 0x80u )
        {
          if ( (unsigned __int16)(v25 + 10240) <= 0x3FFu )
            ++i;
        }
        else
        {
          if ( !v14 && (a6 != (_BYTE)pcchRemaining && !ValidateStd3Range(v25) || v25 < 0x20u || v25 == 127) || !v25 )
            goto LABEL_99;
          if ( v6 >= v12 )
            goto LABEL_91;
          if ( !v14 && (unsigned __int16)(v25 - 65) <= 0x19u )
            v25 += 32;
          *v6++ = v25;
          ppszDestEnd = v6;
          ++v23;
        }
      }
      v55 = v23;
      v26 = v20 - v9;
      v60 = v26;
      if ( v23 == v26 )
      {
        v27 = v54;
        v6 -= 4;
        for ( j = v54; j < v6; ++j )
          *j = j[4];
        ppszDestEnd = v6;
      }
      else
      {
        if ( (__int64)(((char *)v57 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
        {
          v29 = wcsnicmp(v9, v21, 4uLL);
          LODWORD(pcchRemaining) = 0;
          if ( !v29 )
            goto LABEL_99;
        }
        v30 = (int)pcchRemaining;
        v62 = (int)pcchRemaining;
        if ( v23 > 0 )
        {
          if ( (unsigned __int64)v6 >= v53 )
            goto LABEL_91;
          *v6++ = 45;
          ppszDestEnd = v6;
        }
        v52 = 72;
        v31 = 128;
        v32 = (int)pcchRemaining;
        if ( v23 < v26 )
        {
          do
          {
            v33 = 0x7FFFFFF;
            v34 = v9;
            if ( v9 < v20 )
            {
              do
              {
                UTF32 = GetUTF32(v34);
                if ( UTF32 >= v31 && UTF32 < v33 )
                  v33 = UTF32;
                v37 = 2LL;
                if ( UTF32 >= 0x10000 )
                  v37 = 4LL;
                v34 = (unsigned __int16 *)(v37 + v36);
              }
              while ( v34 < v20 );
              v26 = v60;
              v30 = v62;
            }
            v38 = v9;
            for ( k = (v33 - v31) * (v23 - v30 + 1) + v32; v38 < v20; v38 = (unsigned __int16 *)((char *)v38 + v50) )
            {
              v40 = GetUTF32(v38);
              v56 = v40;
              v41 = v40 == v33;
              if ( v40 < v33 )
              {
                ++k;
                v41 = v40 == v33;
              }
              if ( v41 )
              {
                v42 = k;
                for ( m = 36; ; m += 36 )
                {
                  if ( m > v52 )
                    v44 = m < v52 + 26 ? m - v52 : 26;
                  else
                    v44 = 1;
                  if ( v42 < v44 )
                    break;
                  if ( (unsigned __int64)v6 >= v53 )
                    goto LABEL_87;
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
                {
LABEL_87:
                  result = 3221225507LL;
                  LODWORD(pcchRemaining) = 0;
                  goto LABEL_100;
                }
                if ( v42 <= 25 )
                  v48 = v42 + 97;
                else
                  v48 = v42 + 22;
                *v6++ = v48;
                ppszDestEnd = v6;
                v49 = adapt(k, v23 - v62 + 1, v23 == v55);
                v30 = v62;
                k = 0;
                ++v23;
                v52 = v49;
                if ( v33 >= 0x10000 )
                {
                  ++v23;
                  v30 = ++v62;
                }
              }
              else
              {
                v30 = v62;
              }
              v50 = 2LL;
              if ( v56 >= 0x10000 )
                v50 = 4LL;
            }
            v32 = k + 1;
            v31 = v33 + 1;
          }
          while ( v23 < v26 );
          LODWORD(pcchRemaining) = 0;
        }
        v27 = v54;
      }
      if ( !v14 && (__int64)(((char *)v6 - (char *)v27) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
        goto LABEL_99;
      v11 = v57;
      v12 = (wchar_t *)v53;
      if ( v20 != v57 )
      {
        if ( (unsigned __int64)v6 >= v53 )
          goto LABEL_91;
        *v6++ = *v20;
        ppszDestEnd = v6;
        if ( v14 )
        {
          if ( *v20 == 64 )
          {
            v14 = (char)pcchRemaining;
            v59 = v6;
          }
        }
      }
      v54 = v6;
      v9 = v20 + 1;
      v15 = v6;
      if ( v20 >= v57 )
      {
        v7 = v64;
        v10 = a3;
        goto LABEL_89;
      }
      v8 = Str1;
    }
    if ( v14 || LabelEnd != v11 )
    {
      *v64 = (_DWORD)pcchRemaining;
      return 3221227286LL;
    }
    v7 = v64;
    v10 = a3;
LABEL_96:
    v51 = v17;
    if ( v17 - v59 > 255LL - (*(v6 - 1) != 46) )
      goto LABEL_98;
    goto LABEL_97;
  }
LABEL_89:
  v17 = v15;
  v51 = v15;
  if ( !v14 )
    goto LABEL_96;
LABEL_97:
  if ( *(v6 - 1) != 64 )
  {
    *v7 = v51 - v10;
    return 0LL;
  }
LABEL_98:
  LODWORD(pcchRemaining) = 0;
LABEL_99:
  result = 3221227286LL;
LABEL_100:
  *v64 = (_DWORD)pcchRemaining;
  return result;
}
