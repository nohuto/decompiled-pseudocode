/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x180031F10
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     RtlGetFullPathName_UstrEx @ 0x180031520 (RtlGetFullPathName_UstrEx.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800324B0 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180032660 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180033F0C (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x18006E39C (RtlUnicodeStringCbCopyStringN.c)
 *     RtlUnicodeStringCat @ 0x18006E478 (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_Ustr(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 *a8,
        _QWORD *a9)
{
  char v11; // bl
  unsigned __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int16 *v15; // r11
  unsigned __int64 v16; // rdx
  wchar_t *StringRoutine; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  UNICODE_STRING *p_UnicodeString; // rcx
  int FullPathName_Ustr; // eax
  _WORD *v23; // rax
  unsigned __int16 v24; // r10
  unsigned __int64 v25; // rdx
  _WORD *v26; // rcx
  unsigned __int64 v27; // r9
  _WORD *v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  _WORD *v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  _WORD *v34; // rsi
  _WORD *v35; // r15
  int v36; // edx
  _WORD *j; // rdi
  __int64 v38; // rbx
  bool v39; // zf
  unsigned __int16 v40; // bx
  unsigned __int16 v41; // r12
  unsigned __int64 v42; // rcx
  int v43; // eax
  unsigned __int64 v44; // rdx
  _WORD *v45; // rcx
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  _QWORD *v49; // [rsp+68h] [rbp-98h]
  __int64 *v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v53; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v54; // [rsp+90h] [rbp-70h]
  _QWORD *v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  _BYTE v57[528]; // [rsp+B0h] [rbp-50h] BYREF

  v53 = a4;
  v54 = a2;
  v11 = a1;
  v12 = 0LL;
  v51 = a5;
  v56 = a6;
  v55 = a7;
  v50 = a8;
  v49 = a9;
  LOWORD(i) = 0;
  *(_DWORD *)&UnicodeString.Length = 34078720;
  UnicodeString.Buffer = (wchar_t *)v57;
  if ( a7 )
    *a7 = 0LL;
  if ( a9 )
    *a9 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
  {
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = 0LL;
  }
  if ( (a1 & 0xFFFFFFF8) != 0 || !a2 || !a3 || a5 && a6 && !a7 )
  {
    v19 = -1073741811;
    goto LABEL_26;
  }
  v13 = RtlDetermineDosPathNameType_Ustr(a3, a5, v57, 0LL);
  v47 = v13;
  if ( (v11 & 2) != 0 )
  {
    if ( v13 != 5 )
      goto LABEL_17;
    if ( *a3 < 4u || (v23 = (_WORD *)*((_QWORD *)a3 + 1), *v23 != 46) )
    {
LABEL_36:
      if ( (v11 & 1) != 0 )
      {
        v52 = 0LL;
        v43 = RtlDosApplyFileIsolationRedirection_Ustr(
                1,
                (_DWORD)a3,
                (_DWORD)a4,
                v51,
                a6,
                (__int64)&v52,
                0LL,
                (__int64)v50,
                (__int64)v49);
        v19 = v43;
        if ( v43 >= 0 )
        {
          if ( a7 )
            *a7 = v52;
LABEL_33:
          v19 = 0;
          goto LABEL_26;
        }
        if ( v43 != -1072365560 )
          goto LABEL_26;
        v15 = v54;
      }
      if ( a4 )
      {
        v24 = *a4;
        if ( *a3 )
        {
          v25 = *((_QWORD *)a3 + 1);
          v26 = (_WORD *)(v25 + 2 * ((unsigned __int64)*a3 >> 1));
          while ( (unsigned __int64)v26 > v25 )
          {
            if ( *--v26 == 47 || *v26 == 92 )
              break;
            if ( *v26 == 46 )
            {
              v53 = 0LL;
              v24 = 0;
              break;
            }
          }
        }
      }
      else
      {
        v24 = i;
      }
      if ( *v15 )
      {
        v27 = *((_QWORD *)v15 + 1);
        v28 = (_WORD *)(v27 + 2 * ((unsigned __int64)*v15 >> 1));
LABEL_54:
        v31 = v28;
        while ( (unsigned __int64)v28 > v27 )
        {
          if ( *--v28 == 59 )
          {
            v29 = v31 - v28;
            LOWORD(v30) = v29 - 1;
            if ( (_WORD)v29 != 1 && *(v31 - 1) != 92 && *(v31 - 1) != 47 )
              LOWORD(v30) = v31 - v28;
            v30 = (unsigned __int16)v30;
            if ( (unsigned __int16)v30 <= v12 )
              v30 = v12;
            v12 = v30;
            goto LABEL_54;
          }
        }
        v32 = v31 - v28;
        if ( (_WORD)v32 && *(v31 - 1) != 92 && *(v31 - 1) != 47 )
          LOWORD(v32) = v32 + 1;
        v32 = (unsigned __int16)v32;
        if ( (unsigned __int16)v32 <= v12 )
          v32 = v12;
        v12 = 2 * v32;
      }
      v33 = v24 + v12 + *a3 + 2LL;
      if ( v33 <= 0xFFFE )
      {
        v34 = (_WORD *)*((_QWORD *)v15 + 1);
        v35 = &v34[(unsigned __int64)*v15 >> 1];
        if ( v34 < v35 )
        {
          v36 = v24;
          for ( i = v24; ; v36 = i )
          {
            for ( j = v34; j != v35; ++j )
            {
              if ( *j == 59 )
                break;
            }
            v38 = j - v34;
            v39 = 2 * (_WORD)v38 == 0;
            v40 = 2 * v38;
            v41 = v40;
            if ( !v39 && *(j - 1) != 92 && *(j - 1) != 47 )
              v40 += 2;
            v42 = v36 + *a3 + (unsigned int)v40;
            if ( UnicodeString.MaximumLength < v42 + 2 )
            {
              if ( (_BYTE *)UnicodeString.Buffer != v57 || v42 > 0xFFFC )
                break;
              UnicodeString.MaximumLength = v33;
              UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v33);
              if ( !UnicodeString.Buffer )
                return (unsigned int)-1073741801;
            }
            UnicodeString.Length = 0;
            RtlUnicodeStringCbCopyStringN(&UnicodeString, v34, v41);
            if ( v40 && v41 != v40 )
            {
              UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 92;
              UnicodeString.Length += 2;
            }
            RtlUnicodeStringCat(&UnicodeString, a3);
            if ( v53 )
              RtlUnicodeStringCat(&UnicodeString, v53);
            if ( (unsigned __int64)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
              break;
            UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
            if ( (unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, 0LL) )
            {
              FullPathName_Ustr = RtlGetFullPathName_UstrEx((__int64)&UnicodeString, v51, v56, v55, v50, 0LL, &v47, v49);
              goto LABEL_32;
            }
            v34 = j + 1;
            if ( j == v35 )
              v34 = j;
            if ( v34 >= v35 )
              goto LABEL_25;
          }
          v19 = -1073741595;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      goto LABEL_111;
    }
    if ( v23[1] != 92 && v23[1] != 47 )
    {
      if ( v23[1] != 46 || *a3 < 6u || v23[2] != 92 && v23[2] != 47 )
        goto LABEL_36;
      v47 = 0;
      goto LABEL_17;
    }
    v13 = 0;
    v47 = 0;
  }
  if ( v13 == 5 )
    goto LABEL_36;
LABEL_17:
  LOBYTE(v14) = 1;
  if ( (unsigned __int8)RtlDoesFileExists_UstrEx(a3, v14) )
  {
    p_UnicodeString = (UNICODE_STRING *)a3;
LABEL_31:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx((__int64)p_UnicodeString, v51, a6, a7, v50, 0LL, &v47, v49);
LABEL_32:
    v19 = FullPathName_Ustr;
    if ( FullPathName_Ustr < 0 )
      goto LABEL_26;
    goto LABEL_33;
  }
  if ( a4 && *a4 )
  {
    if ( (v11 & 4) == 0 )
    {
      if ( *a3 )
      {
        v44 = *((_QWORD *)a3 + 1);
        v45 = (_WORD *)(v44 + 2 * ((unsigned __int64)*a3 >> 1));
        while ( (unsigned __int64)v45 > v44 )
        {
          if ( *--v45 == 92 || *v45 == 47 )
            break;
          if ( *v45 == 46 )
            goto LABEL_25;
        }
      }
    }
    v16 = *a4 + (unsigned int)*a3 + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > UnicodeString.MaximumLength )
      {
        UnicodeString.MaximumLength = *a4 + *a3 + 2;
        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v16);
        UnicodeString.Buffer = StringRoutine;
        if ( !StringRoutine )
          return (unsigned int)-1073741801;
      }
      else
      {
        StringRoutine = UnicodeString.Buffer;
      }
      memmove(StringRoutine, *((const void **)a3 + 1), *a3);
      memmove(&UnicodeString.Buffer[(unsigned __int64)*a3 >> 1], *((const void **)a4 + 1), *a4);
      LOBYTE(v18) = 1;
      UnicodeString.Buffer[(unsigned __int64)(*a3 + (unsigned int)*a4) >> 1] = 0;
      UnicodeString.Length = *a3 + *a4;
      if ( !(unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, v18) )
        goto LABEL_25;
      p_UnicodeString = &UnicodeString;
      goto LABEL_31;
    }
LABEL_111:
    v19 = -1073741562;
    goto LABEL_26;
  }
LABEL_25:
  v19 = -1073741809;
LABEL_26:
  if ( UnicodeString.Buffer && (_BYTE *)UnicodeString.Buffer != v57 )
    RtlFreeAnsiString(&UnicodeString);
  return v19;
}
