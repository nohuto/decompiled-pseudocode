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

NTSTATUS __cdecl RtlDosApplyFileIsolationRedirection_Ustr(
        ULONG Flags,
        PUNICODE_STRING OriginalName,
        PUNICODE_STRING Extension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *NewName,
        PULONG NewFlags,
        PSIZE_T FileNameSize,
        PSIZE_T RequiredLength)
{
  char v9; // r15
  __int64 v11; // r8
  ULONG v12; // r13d
  PSIZE_T v14; // rcx
  __int64 v15; // r9
  char v16; // si
  NTSTATUS CharInUnicodeString; // eax
  NTSTATUS appended; // ebx
  bool v19; // si
  RTL_PATH_TYPE v20; // r11d
  _UNICODE_STRING v21; // xmm0
  unsigned __int16 Length; // ax
  unsigned __int16 v23; // cx
  PULONG v24; // rsi
  unsigned __int64 MaximumLength; // rcx
  _UNICODE_STRING *Buffer; // rax
  PSIZE_T v28; // rdi
  USHORT v29; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING StringToSearch_8; // [rsp+58h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v32; // [rsp+6Ch] [rbp-9Ch] BYREF
  _QWORD StringUsed[3]; // [rsp+70h] [rbp-98h] BYREF
  _UNICODE_STRING v34; // [rsp+88h] [rbp-80h] BYREF
  USHORT NonInclusivePrefixLength[2]; // [rsp+98h] [rbp-70h] BYREF
  ULONG v36; // [rsp+9Ch] [rbp-6Ch]
  PULONG v37; // [rsp+A0h] [rbp-68h]
  PSIZE_T v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h] BYREF
  _UNICODE_STRING StaticStringa; // [rsp+B8h] [rbp-50h] BYREF
  _UNICODE_STRING v41; // [rsp+C8h] [rbp-40h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v43[2]; // [rsp+E8h] [rbp-20h] BYREF
  _UNICODE_STRING v44; // [rsp+108h] [rbp+0h] BYREF
  wchar_t *v45; // [rsp+118h] [rbp+10h]
  wchar_t *v46; // [rsp+120h] [rbp+18h]
  __int64 v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  _UNICODE_STRING v49[6]; // [rsp+148h] [rbp+40h] BYREF
  _WORD v50[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v51; // [rsp+1C8h] [rbp+C0h] BYREF

  v9 = 0;
  v11 = Flags;
  v12 = 0;
  v36 = Flags;
  v14 = FileNameSize;
  v37 = NewFlags;
  v38 = FileNameSize;
  *(_DWORD *)&v34.Length = 0;
  v34.Buffer = 0LL;
  *(_DWORD *)&StaticStringa.Length = 0x800000;
  StaticStringa.Buffer = (wchar_t *)&v51;
  v39 = 0LL;
  v29 = 0;
  v32 = 0;
  if ( NewFlags )
    *NewFlags = 0;
  if ( FileNameSize )
    *FileNameSize = 0LL;
  if ( RequiredLength )
    *RequiredLength = 520LL;
  if ( DynamicString )
  {
    *(_DWORD *)&DynamicString->Length = 0;
    DynamicString->Buffer = 0LL;
  }
  v50[0] = 0;
  v47 = 32LL;
  v45 = v50;
  v46 = v50;
  v48 = 32LL;
  v15 = 2LL;
  v44.Buffer = v50;
  *(_DWORD *)&v44.Length = 0x200000;
  if ( StaticString )
  {
    MaximumLength = StaticString->MaximumLength;
    Buffer = (_UNICODE_STRING *)StaticString->Buffer;
    if ( MaximumLength < 2 )
    {
      Buffer = &v49[3];
      MaximumLength = 2LL;
    }
    *(_QWORD *)&v49[1].Length = Buffer;
    *(_QWORD *)&v49[2].Length = MaximumLength;
    v49[1].Buffer = &Buffer->Length;
    v49[2].Buffer = (wchar_t *)MaximumLength;
    v49[0].Buffer = &Buffer->Length;
    if ( Buffer )
      Buffer->Length = 0;
    v49[0].MaximumLength = MaximumLength;
    v14 = v38;
    v49[0].Length = 0;
  }
  else
  {
    *(_QWORD *)&v49[2].Length = 2LL;
    *(_QWORD *)&v49[1].Length = &v49[3];
    v49[1].Buffer = &v49[3].Length;
    v49[0].Buffer = &v49[3].Length;
    v49[2].Buffer = (wchar_t *)2;
    v49[3].Length = 0;
    *(_DWORD *)&v49[0].Length = 0x20000;
  }
  v49[4].Buffer = (wchar_t *)NewName;
  v49[3].Buffer = &StaticString->Length;
  *(_QWORD *)&v49[4].Length = DynamicString;
  LOBYTE(v49[5].Length) = 1;
  if ( (v11 & 0xFFFFFFFE) != 0 )
  {
    appended = -1073741811;
    goto LABEL_47;
  }
  if ( !OriginalName )
  {
    appended = -1073741811;
    goto LABEL_47;
  }
  if ( StaticString )
  {
    if ( DynamicString && !NewName )
      goto LABEL_97;
  }
  else if ( !DynamicString && v14 )
  {
LABEL_97:
    appended = -1073741811;
    goto LABEL_47;
  }
  StringToSearch_8 = *OriginalName;
  if ( !Extension || !Extension->Length )
    goto LABEL_22;
  v16 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(
                          1u,
                          &StringToSearch_8,
                          (PUNICODE_STRING)&CharSet,
                          NonInclusivePrefixLength);
  appended = CharInUnicodeString;
  if ( CharInUnicodeString >= 0 )
  {
    v16 = 1;
LABEL_19:
    OriginalName = 0LL;
    appended = 0;
    goto LABEL_20;
  }
  if ( CharInUnicodeString == -1073741275 )
    goto LABEL_19;
  OriginalName = 0LL;
LABEL_20:
  if ( appended < 0 )
    goto LABEL_47;
  if ( v16 )
    goto LABEL_22;
  v43[0] = StringToSearch_8;
  v44.Length = 0;
  v43[1] = *Extension;
  appended = RtlMultiAppendUnicodeStringBuffer(&v44, 2LL, v43);
  if ( appended >= 0 )
  {
    v9 = 1;
LABEL_22:
    appended = 0;
  }
  if ( appended < 0 )
    goto LABEL_47;
  if ( v9 )
    StringToSearch_8 = v44;
  v19 = 0;
  StringUsed[1] = 0LL;
  if ( v34.Buffer )
  {
    appended = -1073741811;
  }
  else
  {
    v20 = (unsigned int)RtlDetermineDosPathNameType_Ustr(&StringToSearch_8, OriginalName, v11, v15);
    InputPathType = v20;
    if ( ((v20 - 1) & 0xFFFFFFFA) != 0 || v20 == RtlPathTypeRelative )
      goto LABEL_34;
    appended = RtlGetFullPathName_UstrEx(
                 &StringToSearch_8,
                 &StaticStringa,
                 &v34,
                 (PUNICODE_STRING *)&StringUsed[1],
                 0LL,
                 0LL,
                 &InputPathType,
                 0LL);
    if ( appended >= 0 )
    {
      OriginalName = (PUNICODE_STRING)StringUsed[1];
      v21 = *(_UNICODE_STRING *)StringUsed[1];
      *(_OWORD *)&StringUsed[1] = *(_OWORD *)StringUsed[1];
      if ( InputPathType == RtlPathTypeLocalDevice
        && StringToSearch_8.Buffer[5] == 58
        && StringToSearch_8.Buffer[6] == 92 )
      {
        StringUsed[2] += 8LL;
        StringToSearch_8.MaximumLength -= 8;
        Length = StringToSearch_8.Length - 8;
        StringToSearch_8.Buffer += 4;
        v23 = LOWORD(StringUsed[1]) - 8;
        StringToSearch_8.Length -= 8;
        WORD1(StringUsed[1]) -= 8;
        LOWORD(StringUsed[1]) -= 8;
        v21 = *(_UNICODE_STRING *)&StringUsed[1];
      }
      else
      {
        Length = StringToSearch_8.Length;
        v23 = StringUsed[1];
      }
      if ( Length > v23 )
      {
        StringToSearch_8 = v21;
        v19 = OriginalName == &v34;
      }
LABEL_34:
      appended = 0;
      if ( v19 )
        goto LABEL_37;
    }
  }
  if ( v34.Buffer )
  {
    NtdllpFreeStringRoutine(v34.Buffer);
    *(_QWORD *)&v34.Length = 0LL;
    v34.Buffer = 0LL;
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
        appended = sxsisol_RespectDotLocal(&StringToSearch_8, &v49[0].Length, &v32);
        if ( appended < 0 )
          goto LABEL_47;
      }
    }
    v12 = v32;
  }
  if ( (v12 & 1) != 0 )
  {
    v24 = v37;
  }
  else
  {
    if ( StaticString || DynamicString )
      LODWORD(OriginalName) = 0;
    else
      LOBYTE(OriginalName) = 1;
    v24 = v37;
    appended = sxsisol_SearchActCtxForDllName(
                 (unsigned int)&StringToSearch_8,
                 (_DWORD)OriginalName,
                 (unsigned int)&v39,
                 (_DWORD)v37,
                 (__int64)v49);
    if ( appended < 0 )
      goto LABEL_47;
  }
  if ( !DynamicString && StaticString && v49[0].Buffer != StaticString->Buffer )
  {
    appended = -1073741789;
    goto LABEL_47;
  }
  v28 = v38;
  if ( v38 )
  {
    appended = RtlFindCharInUnicodeString(1u, v49, &RtlDosPathSeperatorsString, &v29);
    if ( appended < 0 )
      goto LABEL_47;
    *v28 = ((unsigned __int64)v29 >> 1) + 1;
  }
  appended = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v49);
  if ( appended >= 0 )
  {
    if ( v24 )
      *v24 = v12;
    appended = 0;
  }
LABEL_47:
  if ( appended < 0 )
  {
    if ( LOBYTE(v49[5].Length) )
    {
      if ( *(_QWORD *)&v49[1].Length && *(wchar_t **)&v49[1].Length != v49[1].Buffer )
      {
        v41.Buffer = *(wchar_t **)&v49[1].Length;
        RtlFreeAnsiString(&v41);
      }
      if ( v49[1].Buffer )
        *v49[1].Buffer = 0;
    }
    memset(v49, 0, 0x58uLL);
  }
  if ( v34.Buffer )
  {
    NtdllpFreeStringRoutine(v34.Buffer);
    *(_QWORD *)&v34.Length = 0LL;
    v34.Buffer = 0LL;
  }
  if ( v45 )
  {
    if ( v45 != v46 )
    {
      UnicodeString.Buffer = v45;
      RtlFreeAnsiString(&UnicodeString);
    }
    v45 = v46;
    v47 = v48;
  }
  v44.Buffer = v46;
  if ( v46 )
    *v46 = 0;
  v44.MaximumLength = v48;
  v44.Length = 0;
  if ( appended == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B2u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return appended;
}
