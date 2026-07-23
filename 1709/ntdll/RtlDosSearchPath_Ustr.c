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

NTSTATUS __cdecl RtlDosSearchPath_Ustr(
        ULONG Flags,
        PUNICODE_STRING Path,
        PUNICODE_STRING FileName,
        PUNICODE_STRING DefaultExtension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PCUNICODE_STRING *FullFileNameOut,
        SIZE_T *FilePartPrefixCch,
        SIZE_T *BytesRequired)
{
  char v11; // bl
  unsigned __int64 v12; // rsi
  RTL_PATH_TYPE v13; // eax
  __int64 v14; // rdx
  unsigned __int16 *p_Length; // r11
  unsigned __int64 v16; // rdx
  wchar_t *StringRoutine; // rax
  __int64 v18; // rdx
  NTSTATUS v19; // ebx
  _UNICODE_STRING *p_UnicodeString; // rcx
  NTSTATUS FullPathName_Ustr; // eax
  wchar_t *v23; // rax
  unsigned __int16 Length; // r10
  wchar_t *Buffer; // rdx
  wchar_t *v26; // rcx
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
  NTSTATUS v43; // eax
  wchar_t *v44; // rdx
  wchar_t *v45; // rcx
  _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  PSIZE_T RequiredLength; // [rsp+68h] [rbp-98h]
  PSIZE_T FileNameSize; // [rsp+70h] [rbp-90h]
  PUNICODE_STRING v51; // [rsp+78h] [rbp-88h]
  PUNICODE_STRING NewName; // [rsp+80h] [rbp-80h] BYREF
  PUNICODE_STRING v53; // [rsp+88h] [rbp-78h]
  PUNICODE_STRING v54; // [rsp+90h] [rbp-70h]
  PUNICODE_STRING *v55; // [rsp+98h] [rbp-68h]
  PUNICODE_STRING v56; // [rsp+A0h] [rbp-60h]
  _BYTE v57[528]; // [rsp+B0h] [rbp-50h] BYREF

  v53 = DefaultExtension;
  v54 = Path;
  v11 = Flags;
  v12 = 0LL;
  v51 = StaticString;
  v56 = DynamicString;
  v55 = (PUNICODE_STRING *)FullFileNameOut;
  FileNameSize = FilePartPrefixCch;
  RequiredLength = BytesRequired;
  LOWORD(i) = 0;
  *(_DWORD *)&UnicodeString.Length = 34078720;
  UnicodeString.Buffer = (wchar_t *)v57;
  if ( FullFileNameOut )
    *FullFileNameOut = 0LL;
  if ( BytesRequired )
    *BytesRequired = 0LL;
  if ( FilePartPrefixCch )
    *FilePartPrefixCch = 0LL;
  if ( DynamicString )
  {
    *(_DWORD *)&DynamicString->Length = 0;
    DynamicString->Buffer = 0LL;
  }
  if ( (Flags & 0xFFFFFFF8) != 0 || !Path || !FileName || StaticString && DynamicString && !FullFileNameOut )
  {
    v19 = -1073741811;
    goto LABEL_26;
  }
  v13 = (unsigned int)RtlDetermineDosPathNameType_Ustr(FileName, StaticString, v57, 0LL);
  InputPathType = v13;
  if ( (v11 & 2) != 0 )
  {
    if ( v13 != RtlPathTypeRelative )
      goto LABEL_17;
    if ( FileName->Length < 4u || (v23 = FileName->Buffer, *v23 != 46) )
    {
LABEL_36:
      if ( (v11 & 1) != 0 )
      {
        NewName = 0LL;
        v43 = RtlDosApplyFileIsolationRedirection_Ustr(
                1u,
                FileName,
                DefaultExtension,
                v51,
                DynamicString,
                &NewName,
                0LL,
                FileNameSize,
                RequiredLength);
        v19 = v43;
        if ( v43 >= 0 )
        {
          if ( FullFileNameOut )
            *FullFileNameOut = NewName;
LABEL_33:
          v19 = 0;
          goto LABEL_26;
        }
        if ( v43 != -1072365560 )
          goto LABEL_26;
        p_Length = &v54->Length;
      }
      if ( DefaultExtension )
      {
        Length = DefaultExtension->Length;
        if ( FileName->Length )
        {
          Buffer = FileName->Buffer;
          v26 = &Buffer[(unsigned __int64)FileName->Length >> 1];
          while ( v26 > Buffer )
          {
            if ( *--v26 == 47 || *v26 == 92 )
              break;
            if ( *v26 == 46 )
            {
              v53 = 0LL;
              Length = 0;
              break;
            }
          }
        }
      }
      else
      {
        Length = i;
      }
      if ( *p_Length )
      {
        v27 = *((_QWORD *)p_Length + 1);
        v28 = (_WORD *)(v27 + 2 * ((unsigned __int64)*p_Length >> 1));
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
      v33 = Length + v12 + FileName->Length + 2LL;
      if ( v33 <= 0xFFFE )
      {
        v34 = (_WORD *)*((_QWORD *)p_Length + 1);
        v35 = &v34[(unsigned __int64)*p_Length >> 1];
        if ( v34 < v35 )
        {
          v36 = Length;
          for ( i = Length; ; v36 = i )
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
            v42 = v36 + FileName->Length + (unsigned int)v40;
            if ( UnicodeString.MaximumLength < v42 + 2 )
            {
              if ( (_BYTE *)UnicodeString.Buffer != v57 || v42 > 0xFFFC )
                break;
              UnicodeString.MaximumLength = v33;
              UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v33);
              if ( !UnicodeString.Buffer )
                return -1073741801;
            }
            UnicodeString.Length = 0;
            RtlUnicodeStringCbCopyStringN(&UnicodeString, v34, v41);
            if ( v40 && v41 != v40 )
            {
              UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 92;
              UnicodeString.Length += 2;
            }
            RtlUnicodeStringCat(&UnicodeString, FileName);
            if ( v53 )
              RtlUnicodeStringCat(&UnicodeString, v53);
            if ( (unsigned __int64)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
              break;
            UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
            if ( (unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, 0LL) )
            {
              FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                    &UnicodeString,
                                    v51,
                                    v56,
                                    v55,
                                    FileNameSize,
                                    0LL,
                                    &InputPathType,
                                    RequiredLength);
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
      if ( v23[1] != 46 || FileName->Length < 6u || v23[2] != 92 && v23[2] != 47 )
        goto LABEL_36;
      InputPathType = RtlPathTypeUnknown;
      goto LABEL_17;
    }
    v13 = RtlPathTypeUnknown;
    InputPathType = RtlPathTypeUnknown;
  }
  if ( v13 == RtlPathTypeRelative )
    goto LABEL_36;
LABEL_17:
  LOBYTE(v14) = 1;
  if ( (unsigned __int8)RtlDoesFileExists_UstrEx(FileName, v14) )
  {
    p_UnicodeString = FileName;
LABEL_31:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          p_UnicodeString,
                          v51,
                          DynamicString,
                          (PUNICODE_STRING *)FullFileNameOut,
                          FileNameSize,
                          0LL,
                          &InputPathType,
                          RequiredLength);
LABEL_32:
    v19 = FullPathName_Ustr;
    if ( FullPathName_Ustr < 0 )
      goto LABEL_26;
    goto LABEL_33;
  }
  if ( DefaultExtension && DefaultExtension->Length )
  {
    if ( (v11 & 4) == 0 )
    {
      if ( FileName->Length )
      {
        v44 = FileName->Buffer;
        v45 = &v44[(unsigned __int64)FileName->Length >> 1];
        while ( v45 > v44 )
        {
          if ( *--v45 == 92 || *v45 == 47 )
            break;
          if ( *v45 == 46 )
            goto LABEL_25;
        }
      }
    }
    v16 = DefaultExtension->Length + (unsigned int)FileName->Length + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > UnicodeString.MaximumLength )
      {
        UnicodeString.MaximumLength = DefaultExtension->Length + FileName->Length + 2;
        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v16);
        UnicodeString.Buffer = StringRoutine;
        if ( !StringRoutine )
          return -1073741801;
      }
      else
      {
        StringRoutine = UnicodeString.Buffer;
      }
      memmove(StringRoutine, FileName->Buffer, FileName->Length);
      memmove(
        &UnicodeString.Buffer[(unsigned __int64)FileName->Length >> 1],
        DefaultExtension->Buffer,
        DefaultExtension->Length);
      LOBYTE(v18) = 1;
      UnicodeString.Buffer[(unsigned __int64)(FileName->Length + (unsigned int)DefaultExtension->Length) >> 1] = 0;
      UnicodeString.Length = FileName->Length + DefaultExtension->Length;
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
