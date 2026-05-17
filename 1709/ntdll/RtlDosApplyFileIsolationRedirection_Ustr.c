/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x180032660
 * Callers:
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpApplyFileNameRedirection @ 0x180031AA8 (LdrpApplyFileNameRedirection.c)
 *     RtlDosSearchPath_Ustr @ 0x180031F10 (RtlDosSearchPath_Ustr.c)
 *     LdrpQuerySxSMUIFile @ 0x18007D764 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     sxsisol_RespectDotLocal @ 0x180002C54 (sxsisol_RespectDotLocal.c)
 *     RtlGetFullPathName_UstrEx @ 0x180031520 (RtlGetFullPathName_UstrEx.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180033F0C (RtlDetermineDosPathNameType_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180033FC4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindCharInUnicodeString @ 0x180035010 (RtlFindCharInUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x1800748C0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x18008515C (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlAssert @ 0x1800EA280 (RtlAssert.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        unsigned int a1,
        __int128 *a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v9; // r15
  __int64 v11; // r8
  int v12; // r13d
  _QWORD *v14; // rcx
  __int64 v15; // r9
  char v16; // si
  int CharInUnicodeString; // eax
  int appended; // ebx
  bool v19; // si
  int v20; // r11d
  __int128 v21; // xmm0
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // cx
  _DWORD *v24; // rsi
  unsigned __int64 v26; // rcx
  _WORD *v27; // rax
  _QWORD *v28; // rdi
  unsigned __int16 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+68h] [rbp-A0h] BYREF
  int v32; // [rsp+6Ch] [rbp-9Ch] BYREF
  _QWORD v33[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+90h] [rbp-78h]
  _BYTE v36[4]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v37; // [rsp+9Ch] [rbp-6Ch]
  _DWORD *v38; // [rsp+A0h] [rbp-68h]
  _QWORD *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h] BYREF
  int v41; // [rsp+B8h] [rbp-50h] BYREF
  char *v42; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING v43; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v45[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v46; // [rsp+108h] [rbp+0h] BYREF
  wchar_t *v47; // [rsp+118h] [rbp+10h]
  wchar_t *v48; // [rsp+120h] [rbp+18h]
  __int64 v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  _QWORD v51[12]; // [rsp+148h] [rbp+40h] BYREF
  _WORD v52[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v53; // [rsp+1C8h] [rbp+C0h] BYREF

  v9 = 0;
  v11 = a1;
  v12 = 0;
  v37 = a1;
  v14 = a8;
  v38 = a7;
  v39 = a8;
  LODWORD(v34) = 0;
  v35 = 0LL;
  v41 = 0x800000;
  v42 = &v53;
  v40 = 0LL;
  v29 = 0;
  v32 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a9 )
    *a9 = 520LL;
  if ( a5 )
  {
    *(_DWORD *)a5 = 0;
    *(_QWORD *)(a5 + 8) = 0LL;
  }
  v52[0] = 0;
  v49 = 32LL;
  v47 = v52;
  v48 = v52;
  v50 = 32LL;
  v15 = 2LL;
  *((_QWORD *)&v46 + 1) = v52;
  LODWORD(v46) = 0x200000;
  if ( a4 )
  {
    v26 = *(unsigned __int16 *)(a4 + 2);
    v27 = *(_WORD **)(a4 + 8);
    if ( v26 < 2 )
    {
      v27 = &v51[6];
      v26 = 2LL;
    }
    v51[2] = v27;
    v51[4] = v26;
    v51[3] = v27;
    v51[5] = v26;
    v51[1] = v27;
    if ( v27 )
      *v27 = 0;
    WORD1(v51[0]) = v26;
    v14 = v39;
    LOWORD(v51[0]) = 0;
  }
  else
  {
    v51[4] = 2LL;
    v51[2] = &v51[6];
    v51[3] = &v51[6];
    v51[1] = &v51[6];
    v51[5] = 2LL;
    LOWORD(v51[6]) = 0;
    LODWORD(v51[0]) = 0x20000;
  }
  v51[9] = a6;
  v51[7] = a4;
  v51[8] = a5;
  LOBYTE(v51[10]) = 1;
  if ( (v11 & 0xFFFFFFFE) != 0 )
  {
    appended = -1073741811;
    goto LABEL_47;
  }
  if ( !a2 )
  {
    appended = -1073741811;
    goto LABEL_47;
  }
  if ( a4 )
  {
    if ( a5 && !a6 )
      goto LABEL_97;
  }
  else if ( !a5 && v14 )
  {
LABEL_97:
    appended = -1073741811;
    goto LABEL_47;
  }
  v30 = *a2;
  if ( !a3 || !*a3 )
    goto LABEL_22;
  v16 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v30, &unk_1801135D0, v36);
  appended = CharInUnicodeString;
  if ( CharInUnicodeString >= 0 )
  {
    v16 = 1;
LABEL_19:
    a2 = 0LL;
    appended = 0;
    goto LABEL_20;
  }
  if ( CharInUnicodeString == -1073741275 )
    goto LABEL_19;
  a2 = 0LL;
LABEL_20:
  if ( appended < 0 )
    goto LABEL_47;
  if ( v16 )
    goto LABEL_22;
  v45[0] = v30;
  LOWORD(v46) = 0;
  v45[1] = *(_OWORD *)a3;
  appended = RtlMultiAppendUnicodeStringBuffer(&v46, 2LL, v45);
  if ( appended >= 0 )
  {
    v9 = 1;
LABEL_22:
    appended = 0;
  }
  if ( appended < 0 )
    goto LABEL_47;
  if ( v9 )
    v30 = v46;
  v19 = 0;
  v33[1] = 0LL;
  if ( v35 )
  {
    appended = -1073741811;
  }
  else
  {
    v20 = RtlDetermineDosPathNameType_Ustr(&v30, a2, v11, v15);
    v31 = v20;
    if ( ((v20 - 1) & 0xFFFFFFFA) != 0 || v20 == 5 )
      goto LABEL_34;
    appended = RtlGetFullPathName_UstrEx((__int64)&v30, (__int64)&v41, (__int64)&v34, &v33[1], 0LL, 0LL, &v31, 0LL);
    if ( appended >= 0 )
    {
      a2 = (__int128 *)v33[1];
      v21 = *(_OWORD *)v33[1];
      *(_OWORD *)&v33[1] = *(_OWORD *)v33[1];
      if ( v31 == 6 && *(_WORD *)(*((_QWORD *)&v30 + 1) + 10LL) == 58 && *(_WORD *)(*((_QWORD *)&v30 + 1) + 12LL) == 92 )
      {
        v33[2] += 8LL;
        WORD1(v30) -= 8;
        v22 = v30 - 8;
        *((_QWORD *)&v30 + 1) += 8LL;
        v23 = LOWORD(v33[1]) - 8;
        LOWORD(v30) = v30 - 8;
        WORD1(v33[1]) -= 8;
        LOWORD(v33[1]) -= 8;
        v21 = *(_OWORD *)&v33[1];
      }
      else
      {
        v22 = v30;
        v23 = v33[1];
      }
      if ( v22 > v23 )
      {
        v30 = v21;
        v19 = a2 == (__int128 *)&v34;
      }
LABEL_34:
      appended = 0;
      if ( v19 )
        goto LABEL_37;
    }
  }
  if ( v35 )
  {
    NtdllpFreeStringRoutine(v35);
    v34 = 0LL;
    v35 = 0LL;
  }
LABEL_37:
  if ( appended < 0 )
    goto LABEL_47;
  if ( (v37 & 1) != 0 )
  {
    if ( NtCurrentPeb()->ProcessParameters )
    {
      if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
      {
        appended = sxsisol_RespectDotLocal((__int64)&v30, (unsigned __int16 *)v51, &v32);
        if ( appended < 0 )
          goto LABEL_47;
      }
    }
    v12 = v32;
  }
  if ( (v12 & 1) != 0 )
  {
    v24 = v38;
  }
  else
  {
    if ( a4 || a5 )
      LODWORD(a2) = 0;
    else
      LOBYTE(a2) = 1;
    v24 = v38;
    appended = sxsisol_SearchActCtxForDllName(
                 (unsigned int)&v30,
                 (_DWORD)a2,
                 (unsigned int)&v40,
                 (_DWORD)v38,
                 (__int64)v51);
    if ( appended < 0 )
      goto LABEL_47;
  }
  if ( !a5 && a4 && v51[1] != *(_QWORD *)(a4 + 8) )
  {
    appended = -1073741789;
    goto LABEL_47;
  }
  v28 = v39;
  if ( v39 )
  {
    appended = RtlFindCharInUnicodeString(1LL, v51, &RtlDosPathSeperatorsString, &v29);
    if ( appended < 0 )
      goto LABEL_47;
    *v28 = ((unsigned __int64)v29 >> 1) + 1;
  }
  appended = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v51);
  if ( appended >= 0 )
  {
    if ( v24 )
      *v24 = v12;
    appended = 0;
  }
  while ( 1 )
  {
LABEL_47:
    if ( appended < 0 )
    {
      if ( LOBYTE(v51[10]) )
      {
        if ( v51[2] && v51[2] != v51[3] )
        {
          v43.Buffer = (wchar_t *)v51[2];
          RtlFreeAnsiString(&v43);
        }
        if ( v51[3] )
          *(_WORD *)v51[3] = 0;
      }
      memset(v51, 0, 0x58uLL);
    }
    if ( v35 )
    {
      NtdllpFreeStringRoutine(v35);
      v34 = 0LL;
      v35 = 0LL;
    }
    if ( v47 )
    {
      if ( v47 != v48 )
      {
        UnicodeString.Buffer = v47;
        RtlFreeAnsiString(&UnicodeString);
      }
      v47 = v48;
      v49 = v50;
    }
    *((_QWORD *)&v46 + 1) = v48;
    if ( v48 )
      *v48 = 0;
    WORD1(v46) = v50;
    LOWORD(v46) = 0;
    if ( appended != -1072365567 )
      break;
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      434LL,
      "Status != STATUS_SXS_SECTION_NOT_FOUND");
    appended = -1073741595;
  }
  return (unsigned int)appended;
}
