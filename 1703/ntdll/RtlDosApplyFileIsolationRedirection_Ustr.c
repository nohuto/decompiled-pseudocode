/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003DA60
 * Callers:
 *     sub_18003C89C @ 0x18003C89C (sub_18003C89C.c)
 *     RtlDosSearchPath_Ustr @ 0x18003CF70 (RtlDosSearchPath_Ustr.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_18007B4A8 @ 0x18007B4A8 (sub_18007B4A8.c)
 * Callees:
 *     sub_1800050C8 @ 0x1800050C8 (sub_1800050C8.c)
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003DF20 @ 0x18003DF20 (sub_18003DF20.c)
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 *     sub_18003FFE0 @ 0x18003FFE0 (sub_18003FFE0.c)
 *     RtlFindCharInUnicodeString @ 0x1800401C0 (RtlFindCharInUnicodeString.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180077C90 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sub_180085870 @ 0x180085870 (sub_180085870.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     RtlAssert @ 0x1800EAE80 (RtlAssert.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        int a1,
        _OWORD *a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v11; // r12
  char v12; // r15
  int CharInUnicodeString; // eax
  int appended; // ebx
  int v15; // edx
  int v16; // r15d
  char v17; // al
  _DWORD *v18; // r14
  unsigned __int64 v20; // rcx
  __int16 *v21; // rax
  __int128 v22; // xmm1
  _WORD v23[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD v25[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h]
  _DWORD *v28; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  int v31; // [rsp+88h] [rbp-80h] BYREF
  char *v32; // [rsp+90h] [rbp-78h]
  _OWORD v33[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-50h] BYREF
  wchar_t *v35; // [rsp+C8h] [rbp-40h]
  wchar_t *v36; // [rsp+D0h] [rbp-38h]
  __int64 v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  int v39; // [rsp+F8h] [rbp-10h] BYREF
  __int16 *v40; // [rsp+100h] [rbp-8h]
  __int16 *v41; // [rsp+108h] [rbp+0h]
  __int16 *v42; // [rsp+110h] [rbp+8h]
  __int64 v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  __int16 v45; // [rsp+128h] [rbp+20h] BYREF
  __int64 v46; // [rsp+130h] [rbp+28h]
  __int64 v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  char v49; // [rsp+148h] [rbp+40h]
  _WORD v50[16]; // [rsp+158h] [rbp+50h] BYREF
  char v51; // [rsp+178h] [rbp+70h] BYREF

  HIDWORD(v25[0]) = a1;
  *(_QWORD *)&UnicodeString.Length = a3;
  v28 = a7;
  LODWORD(v26) = 0;
  v27 = 0LL;
  v31 = 0x800000;
  v32 = &v51;
  v30 = 0LL;
  v23[0] = 0;
  v24 = 0;
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
  v50[0] = 0;
  v37 = 32LL;
  v35 = v50;
  v36 = v50;
  *((_QWORD *)&v34 + 1) = v50;
  v38 = 32LL;
  LODWORD(v34) = 0x200000;
  if ( a4 )
  {
    v20 = *(unsigned __int16 *)(a4 + 2);
    v21 = *(__int16 **)(a4 + 8);
    if ( v20 < 2 )
    {
      v21 = &v45;
      v20 = 2LL;
    }
    v41 = v21;
    v43 = v20;
    v42 = v21;
    v44 = v20;
    v40 = v21;
    if ( v21 )
      *v21 = 0;
    LOWORD(v39) = 0;
    HIWORD(v39) = v20;
  }
  else
  {
    v43 = 2LL;
    v41 = &v45;
    v42 = &v45;
    v40 = &v45;
    v44 = 2LL;
    v45 = 0;
    v39 = 0x20000;
  }
  v48 = a6;
  v46 = a4;
  v47 = a5;
  v49 = 1;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    goto LABEL_54;
  if ( !a4 )
  {
    if ( a5 || !a8 )
      goto LABEL_15;
LABEL_54:
    appended = -1073741811;
    goto LABEL_35;
  }
  if ( a5 && !a6 )
    goto LABEL_54;
LABEL_15:
  v11 = 0;
  *(_OWORD *)&v25[1] = *a2;
  if ( !a3 || !*a3 )
    goto LABEL_22;
  v12 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v25[1], &unk_1801103A0, v25);
  appended = CharInUnicodeString;
  if ( CharInUnicodeString >= 0 )
  {
    v12 = 1;
LABEL_19:
    appended = 0;
    goto LABEL_20;
  }
  if ( CharInUnicodeString == -1073741275 )
    goto LABEL_19;
LABEL_20:
  if ( appended < 0 )
    goto LABEL_36;
  if ( v12 )
    goto LABEL_22;
  LOWORD(v34) = 0;
  v22 = *(_OWORD *)*(_QWORD *)&UnicodeString.Length;
  v33[0] = *(_OWORD *)&v25[1];
  v33[1] = v22;
  appended = RtlMultiAppendUnicodeStringBuffer(&v34, 2LL, v33);
  if ( appended >= 0 )
  {
    v11 = 1;
LABEL_22:
    appended = 0;
  }
  if ( appended < 0 )
    goto LABEL_36;
  if ( v11 )
    *(_OWORD *)&v25[1] = v34;
  appended = sub_18003DF20(&v25[1], &v31, &v26);
  if ( appended < 0 )
    goto LABEL_35;
  if ( (v25[0] & 0x100000000LL) != 0 )
  {
    if ( NtCurrentPeb()->ProcessParameters )
    {
      if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
      {
        appended = sub_1800050C8((__int64)&v25[1], (unsigned __int16 *)&v39, &v24);
        if ( appended < 0 )
          goto LABEL_35;
      }
    }
  }
  v16 = v24;
  if ( (v24 & 1) != 0 )
  {
    v18 = v28;
  }
  else
  {
    if ( a4 || (v17 = 1, a5) )
      v17 = 0;
    v18 = v28;
    LOBYTE(v15) = v17;
    appended = sub_18003F37C((unsigned int)&v25[1], v15, (unsigned int)&v30, (_DWORD)v28, (__int64)&v39);
    if ( appended < 0 )
      goto LABEL_35;
  }
  if ( !a5 && a4 && v40 != *(__int16 **)(a4 + 8) )
  {
    appended = -1073741789;
    goto LABEL_35;
  }
  if ( a8 )
  {
    appended = RtlFindCharInUnicodeString(1LL, &v39, &unk_180110160, v23);
    if ( appended < 0 )
      goto LABEL_35;
    *a8 = ((unsigned __int64)v23[0] >> 1) + 1;
  }
  appended = sub_180085870(&v39);
  if ( appended >= 0 )
  {
    if ( v18 )
      *v18 = v16;
    appended = 0;
  }
  while ( 1 )
  {
LABEL_35:
    if ( appended < 0 )
LABEL_36:
      sub_18003FFE0(&v39);
    if ( v27 )
    {
      RtlDeleteBoundaryDescriptor();
      v26 = 0LL;
      v27 = 0LL;
    }
    if ( v35 )
    {
      if ( v35 != v36 )
      {
        UnicodeString.Buffer = v35;
        RtlFreeUnicodeString(&UnicodeString);
      }
      v35 = v36;
      v37 = v38;
    }
    *((_QWORD *)&v34 + 1) = v36;
    if ( v36 )
      *v36 = 0;
    WORD1(v34) = v38;
    LOWORD(v34) = 0;
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
