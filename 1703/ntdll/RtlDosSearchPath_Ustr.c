/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x18003CF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlGetFullPathName_UstrEx @ 0x18003CCD0 (RtlGetFullPathName_UstrEx.c)
 *     sub_18003D528 @ 0x18003D528 (sub_18003D528.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003DA60 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     sub_180070824 @ 0x180070824 (sub_180070824.c)
 *     sub_180070900 @ 0x180070900 (sub_180070900.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
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
  wchar_t *Buffer; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  _WORD *v21; // rax
  unsigned __int16 v22; // r10
  unsigned __int64 v23; // rdx
  _WORD *v24; // rcx
  unsigned __int64 v25; // r9
  _WORD *v26; // rcx
  _WORD *v27; // r8
  __int64 v28; // rax
  __int64 v29; // r13
  unsigned __int64 v30; // r9
  _WORD *v31; // rsi
  _WORD *v32; // r15
  _WORD *i; // rdi
  __int64 v34; // rbx
  bool v35; // zf
  unsigned __int16 v36; // bx
  unsigned __int16 v37; // r12
  __int64 v38; // rdx
  int FullPathName_Ustr; // eax
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  UNICODE_STRING *p_UnicodeString; // rcx
  int v43; // eax
  unsigned __int64 v44; // rdx
  _WORD *v45; // rcx
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v48; // [rsp+68h] [rbp-98h]
  __int64 *v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  int v51; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v54; // [rsp+98h] [rbp-68h]
  _QWORD *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  _BYTE v57[528]; // [rsp+B0h] [rbp-50h] BYREF

  v54 = a4;
  v52 = a2;
  v11 = a1;
  v12 = 0LL;
  v50 = a5;
  v56 = a6;
  v55 = a7;
  v49 = a8;
  v48 = a9;
  LOWORD(v51) = 0;
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
  v13 = sub_18003F2C4(a3);
  v47 = v13;
  if ( (v11 & 2) != 0 )
  {
    if ( v13 != 5 )
      goto LABEL_17;
    if ( *a3 < 4u || (v21 = (_WORD *)*((_QWORD *)a3 + 1), *v21 != 46) )
    {
LABEL_32:
      if ( (v11 & 1) != 0 )
      {
        v53 = 0LL;
        v43 = RtlDosApplyFileIsolationRedirection_Ustr(
                1,
                (_DWORD)a3,
                (_DWORD)a4,
                v50,
                a6,
                (__int64)&v53,
                0LL,
                (__int64)v49,
                (__int64)v48);
        v19 = v43;
        if ( v43 >= 0 )
        {
          if ( a7 )
            *a7 = v53;
LABEL_72:
          v19 = 0;
          goto LABEL_26;
        }
        if ( v43 != -1072365560 )
          goto LABEL_26;
        v15 = v52;
      }
      if ( a4 )
      {
        v22 = *a4;
        if ( *a3 )
        {
          v23 = *((_QWORD *)a3 + 1);
          v24 = (_WORD *)(v23 + 2 * ((unsigned __int64)*a3 >> 1));
          do
          {
            if ( (unsigned __int64)v24 <= v23 )
              break;
            if ( *--v24 == 92 )
              break;
            if ( *v24 == 46 )
            {
              v54 = 0LL;
              v22 = 0;
              break;
            }
          }
          while ( *v24 != 47 );
        }
      }
      else
      {
        v22 = v51;
      }
      if ( *v15 )
      {
        v25 = *((_QWORD *)v15 + 1);
        v26 = (_WORD *)(v25 + 2 * ((unsigned __int64)*v15 >> 1));
        v27 = v26;
        while ( (unsigned __int64)v26 > v25 )
        {
          if ( *--v26 == 59 )
          {
            v40 = v27 - v26;
            LOWORD(v41) = v40 - 1;
            if ( (_WORD)v40 != 1 && *(v27 - 1) != 92 && *(v27 - 1) != 47 )
              LOWORD(v41) = v27 - v26;
            v41 = (unsigned __int16)v41;
            v27 = v26;
            if ( (unsigned __int16)v41 <= v12 )
              v41 = v12;
            v12 = v41;
          }
        }
        v28 = v27 - v26;
        if ( (_WORD)v28 && *(v27 - 1) != 92 && *(v27 - 1) != 47 )
          LOWORD(v28) = v28 + 1;
        v28 = (unsigned __int16)v28;
        if ( (unsigned __int16)v28 <= v12 )
          v28 = v12;
        v12 = 2 * v28;
      }
      v29 = v22;
      v30 = v22 + (unsigned __int64)*a3 + v12 + 2;
      v52 = (unsigned __int16 *)v30;
      if ( v30 <= 0xFFFE )
      {
        v31 = (_WORD *)*((_QWORD *)v15 + 1);
        v32 = &v31[(unsigned __int64)*v15 >> 1];
        if ( v31 < v32 )
        {
          while ( 1 )
          {
            for ( i = v31; i != v32; ++i )
            {
              if ( *i == 59 )
                break;
            }
            v34 = i - v31;
            v35 = 2 * (_WORD)v34 == 0;
            v36 = 2 * v34;
            v37 = v36;
            if ( !v35 && *(i - 1) != 92 && *(i - 1) != 47 )
              v36 += 2;
            v38 = *a3;
            if ( UnicodeString.MaximumLength < (unsigned __int64)v36 + v29 + v38 + 2 )
            {
              if ( (_BYTE *)UnicodeString.Buffer != v57 || v38 + (unsigned __int64)v36 + v29 > 0xFFFC )
                break;
              UnicodeString.MaximumLength = v30;
              UnicodeString.Buffer = (wchar_t *)sub_180043FE0((unsigned __int16)v30);
              if ( !UnicodeString.Buffer )
                return (unsigned int)-1073741801;
            }
            UnicodeString.Length = 0;
            sub_180070824(&UnicodeString, v31, v37);
            if ( v36 && v37 != v36 )
            {
              UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 92;
              UnicodeString.Length += 2;
            }
            sub_180070900(&UnicodeString, a3);
            if ( v54 )
              sub_180070900(&UnicodeString, v54);
            if ( (unsigned __int64)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
              break;
            UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
            if ( (unsigned __int8)sub_18003D528(&UnicodeString, 0LL) )
            {
              FullPathName_Ustr = RtlGetFullPathName_UstrEx((__int64)&UnicodeString, v50, v56, v55, v49, 0LL, &v47, v48);
              goto LABEL_71;
            }
            v31 = i + 1;
            if ( i == v32 )
              v31 = i;
            if ( v31 >= v32 )
              goto LABEL_25;
            LOWORD(v30) = (_WORD)v52;
          }
          v19 = -1073741595;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      goto LABEL_109;
    }
    if ( v21[1] != 92 && v21[1] != 47 )
    {
      if ( v21[1] != 46 || *a3 < 6u || v21[2] != 92 && v21[2] != 47 )
        goto LABEL_32;
      v47 = 0;
      goto LABEL_17;
    }
    v13 = 0;
    v47 = 0;
  }
  if ( v13 == 5 )
    goto LABEL_32;
LABEL_17:
  LOBYTE(v14) = 1;
  if ( (unsigned __int8)sub_18003D528(a3, v14) )
  {
    p_UnicodeString = (UNICODE_STRING *)a3;
LABEL_81:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx((__int64)p_UnicodeString, v50, a6, a7, v49, 0LL, &v47, v48);
LABEL_71:
    v19 = FullPathName_Ustr;
    if ( FullPathName_Ustr < 0 )
      goto LABEL_26;
    goto LABEL_72;
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
    v16 = *a4 + *a3 + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > UnicodeString.MaximumLength )
      {
        UnicodeString.MaximumLength = *a4 + *a3 + 2;
        Buffer = (wchar_t *)sub_180043FE0((unsigned __int16)v16);
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
      UnicodeString.Buffer[(*a3 + (unsigned __int64)*a4) >> 1] = 0;
      UnicodeString.Length = *a3 + *a4;
      if ( !(unsigned __int8)sub_18003D528(&UnicodeString, v18) )
        goto LABEL_25;
      p_UnicodeString = &UnicodeString;
      goto LABEL_81;
    }
LABEL_109:
    v19 = -1073741562;
    goto LABEL_26;
  }
LABEL_25:
  v19 = -1073741809;
LABEL_26:
  if ( UnicodeString.Buffer && (_BYTE *)UnicodeString.Buffer != v57 )
    RtlFreeUnicodeString(&UnicodeString);
  return v19;
}
