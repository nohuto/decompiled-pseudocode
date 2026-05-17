/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003BAE0 @ 0x18003BAE0 (sub_18003BAE0.c)
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 *     sub_1800770AC @ 0x1800770AC (sub_1800770AC.c)
 * Callees:
 *     sub_180004180 @ 0x180004180 (sub_180004180.c)
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlGetFullPathName_UstrEx @ 0x18003BF10 (RtlGetFullPathName_UstrEx.c)
 *     sub_18003E414 @ 0x18003E414 (sub_18003E414.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     RtlFindCharInUnicodeString @ 0x18003F370 (RtlFindCharInUnicodeString.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180071C90 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sub_180080418 @ 0x180080418 (sub_180080418.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     RtlAssert @ 0x1800E6440 (RtlAssert.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        int a1,
        __int128 *a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  _QWORD *v12; // rcx
  char v13; // r12
  char v14; // r15
  int CharInUnicodeString; // eax
  int appended; // ebx
  bool v17; // di
  int v18; // r11d
  __int128 v19; // xmm0
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // ax
  int v22; // r12d
  _DWORD *v23; // r15
  unsigned __int64 v25; // rcx
  _WORD *v26; // rax
  _QWORD *v27; // rdi
  unsigned __int16 v28; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+68h] [rbp-A0h] BYREF
  int v31; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int128 v32; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h]
  _BYTE v35[4]; // [rsp+98h] [rbp-70h] BYREF
  int v36; // [rsp+9Ch] [rbp-6Ch]
  _DWORD *v37; // [rsp+A0h] [rbp-68h]
  _QWORD *v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h] BYREF
  int v40; // [rsp+B8h] [rbp-50h] BYREF
  char *v41; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING v42; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v44[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v45; // [rsp+108h] [rbp+0h] BYREF
  wchar_t *v46; // [rsp+118h] [rbp+10h]
  wchar_t *v47; // [rsp+120h] [rbp+18h]
  __int64 v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  _QWORD v50[12]; // [rsp+148h] [rbp+40h] BYREF
  _WORD v51[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v52; // [rsp+1C8h] [rbp+C0h] BYREF

  v36 = a1;
  LODWORD(v33) = 0;
  v12 = a8;
  v38 = a8;
  v37 = a7;
  v34 = 0LL;
  v40 = 0x800000;
  v41 = &v52;
  v39 = 0LL;
  v28 = 0;
  v31 = 0;
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
  v51[0] = 0;
  v48 = 32LL;
  v46 = v51;
  v47 = v51;
  *((_QWORD *)&v45 + 1) = v51;
  v49 = 32LL;
  LODWORD(v45) = 0x200000;
  if ( a4 )
  {
    v25 = *(unsigned __int16 *)(a4 + 2);
    v26 = *(_WORD **)(a4 + 8);
    if ( v25 < 2 )
    {
      v26 = &v50[6];
      v25 = 2LL;
    }
    v50[2] = v26;
    v50[4] = v25;
    v50[3] = v26;
    v50[5] = v25;
    v50[1] = v26;
    if ( v26 )
      *v26 = 0;
    WORD1(v50[0]) = v25;
    v12 = v38;
    LOWORD(v50[0]) = 0;
  }
  else
  {
    v50[4] = 2LL;
    v50[2] = &v50[6];
    v50[3] = &v50[6];
    v50[1] = &v50[6];
    v50[5] = 2LL;
    LOWORD(v50[6]) = 0;
    LODWORD(v50[0]) = 0x20000;
  }
  v50[9] = a6;
  LOBYTE(v50[10]) = 1;
  v50[7] = a4;
  v50[8] = a5;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    goto LABEL_71;
  if ( !a4 )
  {
    if ( a5 || !v12 )
      goto LABEL_15;
LABEL_71:
    appended = -1073741811;
    goto LABEL_46;
  }
  if ( a5 && !a6 )
    goto LABEL_71;
LABEL_15:
  v13 = 0;
  v29 = *a2;
  if ( !a3 || !*a3 )
    goto LABEL_22;
  v14 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v29, &unk_180110340, v35);
  appended = CharInUnicodeString;
  if ( CharInUnicodeString >= 0 )
  {
    v14 = 1;
LABEL_19:
    appended = 0;
    goto LABEL_20;
  }
  if ( CharInUnicodeString == -1073741275 )
    goto LABEL_19;
LABEL_20:
  if ( appended < 0 )
    goto LABEL_47;
  if ( v14 )
    goto LABEL_22;
  v44[1] = *(_OWORD *)a3;
  LOWORD(v45) = 0;
  v44[0] = v29;
  appended = RtlMultiAppendUnicodeStringBuffer(&v45, 2LL, v44);
  if ( appended >= 0 )
  {
    v13 = 1;
LABEL_22:
    appended = 0;
  }
  if ( appended < 0 )
    goto LABEL_47;
  if ( v13 )
    v29 = v45;
  v17 = 0;
  *(_QWORD *)&v32 = 0LL;
  if ( v34 )
  {
    appended = -1073741811;
  }
  else
  {
    v18 = sub_18003E414(&v29);
    v30 = v18;
    if ( ((v18 - 1) & 0xFFFFFFFA) != 0 || v18 == 5 )
      goto LABEL_34;
    appended = RtlGetFullPathName_UstrEx((__int64)&v29, (__int64)&v40, (__int64)&v33, &v32, 0LL, 0LL, &v30, 0LL);
    if ( appended >= 0 )
    {
      a2 = (__int128 *)v32;
      v19 = *(_OWORD *)v32;
      v32 = *(_OWORD *)v32;
      if ( v30 == 6 && *(_WORD *)(*((_QWORD *)&v29 + 1) + 10LL) == 58 && *(_WORD *)(*((_QWORD *)&v29 + 1) + 12LL) == 92 )
      {
        *((_QWORD *)&v32 + 1) += 8LL;
        WORD1(v29) -= 8;
        v20 = v29 - 8;
        *((_QWORD *)&v29 + 1) += 8LL;
        v21 = v32 - 8;
        LOWORD(v29) = v29 - 8;
        WORD1(v32) -= 8;
        LOWORD(v32) = v32 - 8;
        v19 = v32;
      }
      else
      {
        v20 = v29;
        v21 = v32;
      }
      if ( v20 > v21 )
      {
        v29 = v19;
        v17 = a2 == (__int128 *)&v33;
      }
LABEL_34:
      appended = 0;
      if ( v17 )
        goto LABEL_37;
    }
  }
  if ( v34 )
  {
    RtlDeleteBoundaryDescriptor(v34);
    v33 = 0LL;
    v34 = 0LL;
  }
LABEL_37:
  if ( appended < 0 )
    goto LABEL_47;
  if ( (v36 & 1) != 0 )
  {
    if ( NtCurrentPeb()->ProcessParameters )
    {
      if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
      {
        appended = sub_180004180((__int64)&v29, (unsigned __int16 *)v50, &v31);
        if ( appended < 0 )
          goto LABEL_46;
      }
    }
  }
  v22 = v31;
  if ( (v31 & 1) != 0 )
  {
    v23 = v37;
  }
  else
  {
    if ( a4 || (LOBYTE(a2) = 1, a5) )
      LOBYTE(a2) = 0;
    v23 = v37;
    appended = sub_18003E4CC((unsigned int)&v29, (_DWORD)a2, (unsigned int)&v39, (_DWORD)v37, (__int64)v50);
    if ( appended < 0 )
      goto LABEL_46;
  }
  if ( !a5 && a4 && v50[1] != *(_QWORD *)(a4 + 8) )
  {
    appended = -1073741789;
    goto LABEL_46;
  }
  v27 = v38;
  if ( v38 )
  {
    appended = RtlFindCharInUnicodeString(1LL, v50, &unk_180110078, &v28);
    if ( appended < 0 )
      goto LABEL_46;
    *v27 = ((unsigned __int64)v28 >> 1) + 1;
  }
  appended = sub_180080418(v50);
  if ( appended >= 0 )
  {
    if ( v23 )
      *v23 = v22;
    appended = 0;
  }
  while ( 1 )
  {
LABEL_46:
    if ( appended < 0 )
    {
LABEL_47:
      if ( LOBYTE(v50[10]) )
      {
        if ( v50[2] && v50[2] != v50[3] )
        {
          v42.Buffer = (wchar_t *)v50[2];
          RtlFreeUnicodeString(&v42);
        }
        if ( v50[3] )
          *(_WORD *)v50[3] = 0;
      }
      memset(v50, 0, 0x58uLL);
    }
    if ( v34 )
    {
      RtlDeleteBoundaryDescriptor(v34);
      v33 = 0LL;
      v34 = 0LL;
    }
    if ( v46 )
    {
      if ( v46 != v47 )
      {
        UnicodeString.Buffer = v46;
        RtlFreeUnicodeString(&UnicodeString);
      }
      v46 = v47;
      v48 = v49;
    }
    *((_QWORD *)&v45 + 1) = v47;
    if ( v47 )
      *v47 = 0;
    WORD1(v45) = v49;
    LOWORD(v45) = 0;
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
