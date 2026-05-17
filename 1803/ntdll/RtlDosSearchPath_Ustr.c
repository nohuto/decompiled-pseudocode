/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x18003C290
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     RtlGetFullPathName_UstrEx @ 0x18003BF10 (RtlGetFullPathName_UstrEx.c)
 *     sub_18003C82C @ 0x18003C82C (sub_18003C82C.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003E414 @ 0x18003E414 (sub_18003E414.c)
 *     sub_180040BF8 @ 0x180040BF8 (sub_180040BF8.c)
 *     sub_180040C84 @ 0x180040C84 (sub_180040C84.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
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
  unsigned __int16 *v14; // r11
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  wchar_t *Buffer; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  unsigned __int16 v21; // r10
  unsigned __int64 v22; // rdx
  _WORD *v23; // rcx
  unsigned __int64 v24; // r9
  _WORD *v25; // rcx
  _WORD *v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _WORD *v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  _WORD *v32; // rdi
  _WORD *v33; // r15
  int v34; // edx
  _WORD *j; // rsi
  __int64 v36; // rbx
  bool v37; // zf
  unsigned __int16 v38; // bx
  unsigned __int16 v39; // r12
  unsigned __int64 v40; // rcx
  int FullPathName_Ustr; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
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
    goto LABEL_27;
  }
  v13 = sub_18003E414(a3);
  v15 = 92LL;
  v47 = v13;
  if ( (v11 & 2) != 0 && v13 == 5 && *a3 >= 4u )
  {
    v26 = (_WORD *)*((_QWORD *)a3 + 1);
    if ( *v26 == 46 )
    {
      if ( v26[1] == 92 || v26[1] == 47 )
      {
        v13 = 0;
        v47 = 0;
      }
      else if ( v26[1] == 46 && *a3 >= 6u && (v26[2] == 92 || v26[2] == 47) )
      {
        v47 = 0;
        goto LABEL_18;
      }
    }
  }
  if ( v13 == 5 )
  {
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
LABEL_83:
        v19 = 0;
        goto LABEL_27;
      }
      if ( v43 != -1072365560 )
        goto LABEL_27;
      v14 = v54;
    }
    if ( a4 )
    {
      v21 = *a4;
      if ( *a3 )
      {
        v22 = *((_QWORD *)a3 + 1);
        v23 = (_WORD *)(v22 + 2 * ((unsigned __int64)*a3 >> 1));
        while ( (unsigned __int64)v23 > v22 )
        {
          if ( *--v23 == 47 || *v23 == 92 )
            break;
          if ( *v23 == 46 )
          {
            v53 = 0LL;
            v21 = 0;
            break;
          }
        }
      }
    }
    else
    {
      v21 = i;
    }
    if ( *v14 )
    {
      v24 = *((_QWORD *)v14 + 1);
      v25 = (_WORD *)(v24 + 2 * ((unsigned __int64)*v14 >> 1));
LABEL_52:
      v29 = v25;
      while ( (unsigned __int64)v25 > v24 )
      {
        if ( *--v25 == 59 )
        {
          v27 = v29 - v25;
          LOWORD(v28) = v27 - 1;
          if ( (_WORD)v27 != 1 && *(v29 - 1) != 92 && *(v29 - 1) != 47 )
            LOWORD(v28) = v29 - v25;
          v28 = (unsigned __int16)v28;
          if ( (unsigned __int16)v28 <= v12 )
            v28 = v12;
          v12 = v28;
          goto LABEL_52;
        }
      }
      v30 = v29 - v25;
      if ( (_WORD)v30 && *(v29 - 1) != 92 && *(v29 - 1) != 47 )
        LOWORD(v30) = v30 + 1;
      v30 = (unsigned __int16)v30;
      if ( (unsigned __int16)v30 <= v12 )
        v30 = v12;
      v12 = 2 * v30;
    }
    v31 = v21 + v12 + *a3 + 2LL;
    if ( v31 <= 0xFFFE )
    {
      v32 = (_WORD *)*((_QWORD *)v14 + 1);
      v33 = &v32[(unsigned __int64)*v14 >> 1];
      if ( v32 < v33 )
      {
        v34 = v21;
        for ( i = v21; ; v34 = i )
        {
          for ( j = v32; j != v33; ++j )
          {
            if ( *j == 59 )
              break;
          }
          v36 = j - v32;
          v37 = 2 * (_WORD)v36 == 0;
          v38 = 2 * v36;
          v39 = v38;
          if ( !v37 && *(j - 1) != 92 && *(j - 1) != 47 )
            v38 += 2;
          v40 = v34 + *a3 + (unsigned int)v38;
          if ( UnicodeString.MaximumLength < v40 + 2 )
          {
            if ( (_BYTE *)UnicodeString.Buffer != v57 || v40 > 0xFFFC )
              break;
            UnicodeString.MaximumLength = v31;
            UnicodeString.Buffer = (wchar_t *)sub_18003B5E0((unsigned __int16)v31);
            if ( !UnicodeString.Buffer )
              return (unsigned int)-1073741801;
          }
          UnicodeString.Length = 0;
          sub_180040C84(&UnicodeString, v32, v39);
          if ( v38 && v39 != v38 )
          {
            UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 92;
            UnicodeString.Length += 2;
          }
          sub_180040BF8(&UnicodeString, a3);
          if ( v53 )
            sub_180040BF8(&UnicodeString, v53);
          if ( (unsigned __int64)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
            break;
          UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
          if ( (unsigned __int8)sub_18003C82C(&UnicodeString, 0LL) )
          {
            FullPathName_Ustr = RtlGetFullPathName_UstrEx((__int64)&UnicodeString, v51, v56, v55, v50, 0LL, &v47, v49);
            goto LABEL_82;
          }
          v32 = j + 1;
          if ( j == v33 )
            v32 = j;
          if ( v32 >= v33 )
            goto LABEL_26;
        }
        v19 = -1073741595;
        goto LABEL_27;
      }
      goto LABEL_26;
    }
    goto LABEL_110;
  }
LABEL_18:
  LOBYTE(v15) = 1;
  if ( (unsigned __int8)sub_18003C82C(a3, v15) )
  {
    p_UnicodeString = (UNICODE_STRING *)a3;
LABEL_85:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx((__int64)p_UnicodeString, v51, a6, a7, v50, 0LL, &v47, v49);
LABEL_82:
    v19 = FullPathName_Ustr;
    if ( FullPathName_Ustr < 0 )
      goto LABEL_27;
    goto LABEL_83;
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
            goto LABEL_26;
        }
      }
    }
    v16 = *a4 + (unsigned int)*a3 + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > UnicodeString.MaximumLength )
      {
        UnicodeString.MaximumLength = *a4 + *a3 + 2;
        Buffer = (wchar_t *)sub_18003B5E0((unsigned __int16)v16);
        UnicodeString.Buffer = Buffer;
        if ( !Buffer )
          return (unsigned int)-1073741801;
      }
      else
      {
        Buffer = UnicodeString.Buffer;
      }
      memmove(Buffer, *((const void **)a3 + 1), *a3);
      memmove(&UnicodeString.Buffer[(unsigned __int64)*a3 >> 1], *((const void **)a4 + 1), *a4);
      LOBYTE(v18) = 1;
      UnicodeString.Buffer[(unsigned __int64)(*a3 + (unsigned int)*a4) >> 1] = 0;
      UnicodeString.Length = *a3 + *a4;
      if ( !(unsigned __int8)sub_18003C82C(&UnicodeString, v18) )
        goto LABEL_26;
      p_UnicodeString = &UnicodeString;
      goto LABEL_85;
    }
LABEL_110:
    v19 = -1073741562;
    goto LABEL_27;
  }
LABEL_26:
  v19 = -1073741809;
LABEL_27:
  if ( UnicodeString.Buffer && (_BYTE *)UnicodeString.Buffer != v57 )
    RtlFreeUnicodeString(&UnicodeString);
  return v19;
}
