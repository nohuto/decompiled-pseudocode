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
  unsigned __int16 *p_Length; // r11
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  WCHAR *v17; // rax
  __int64 v18; // rdx
  NTSTATUS v19; // ebx
  USHORT Length; // r10
  PWCH v22; // rdx
  PWCH v23; // rcx
  unsigned __int64 v24; // r9
  _WORD *v25; // rcx
  PWCH Buffer; // rcx
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
  NTSTATUS FullPathName_Ustr; // eax
  _UNICODE_STRING *p_FileNamea; // rcx
  NTSTATUS v43; // eax
  PWCH v44; // rdx
  PWCH v45; // rcx
  _UNICODE_STRING FileNamea; // [rsp+50h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  PSIZE_T RequiredLength; // [rsp+68h] [rbp-98h]
  PSIZE_T FileNameSize; // [rsp+70h] [rbp-90h]
  PUNICODE_STRING v51; // [rsp+78h] [rbp-88h]
  PUNICODE_STRING NewName; // [rsp+80h] [rbp-80h] BYREF
  PUNICODE_STRING v53; // [rsp+88h] [rbp-78h]
  PUNICODE_STRING v54; // [rsp+90h] [rbp-70h]
  PUNICODE_STRING *StringUsed; // [rsp+98h] [rbp-68h]
  PUNICODE_STRING v56; // [rsp+A0h] [rbp-60h]
  _BYTE v57[528]; // [rsp+B0h] [rbp-50h] BYREF

  v53 = DefaultExtension;
  v54 = Path;
  v11 = Flags;
  v12 = 0LL;
  v51 = StaticString;
  v56 = DynamicString;
  StringUsed = (PUNICODE_STRING *)FullFileNameOut;
  FileNameSize = FilePartPrefixCch;
  RequiredLength = BytesRequired;
  LOWORD(i) = 0;
  *(_DWORD *)&FileNamea.Length = 34078720;
  FileNamea.Buffer = (PWCH)v57;
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
    goto LABEL_27;
  }
  v13 = (unsigned int)sub_18003E414(FileName);
  v15 = 92LL;
  InputPathType = v13;
  if ( (v11 & 2) != 0 && v13 == RtlPathTypeRelative && FileName->Length >= 4u )
  {
    Buffer = FileName->Buffer;
    if ( *Buffer == 46 )
    {
      if ( Buffer[1] == 92 || Buffer[1] == 47 )
      {
        v13 = RtlPathTypeUnknown;
        InputPathType = RtlPathTypeUnknown;
      }
      else if ( Buffer[1] == 46 && FileName->Length >= 6u && (Buffer[2] == 92 || Buffer[2] == 47) )
      {
        InputPathType = RtlPathTypeUnknown;
        goto LABEL_18;
      }
    }
  }
  if ( v13 == RtlPathTypeRelative )
  {
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
LABEL_83:
        v19 = 0;
        goto LABEL_27;
      }
      if ( v43 != -1072365560 )
        goto LABEL_27;
      p_Length = &v54->Length;
    }
    if ( DefaultExtension )
    {
      Length = DefaultExtension->Length;
      if ( FileName->Length )
      {
        v22 = FileName->Buffer;
        v23 = &v22[(unsigned __int64)FileName->Length >> 1];
        while ( v23 > v22 )
        {
          if ( *--v23 == 47 || *v23 == 92 )
            break;
          if ( *v23 == 46 )
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
      v24 = *((_QWORD *)p_Length + 1);
      v25 = (_WORD *)(v24 + 2 * ((unsigned __int64)*p_Length >> 1));
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
    v31 = Length + v12 + FileName->Length + 2LL;
    if ( v31 <= 0xFFFE )
    {
      v32 = (_WORD *)*((_QWORD *)p_Length + 1);
      v33 = &v32[(unsigned __int64)*p_Length >> 1];
      if ( v32 < v33 )
      {
        v34 = Length;
        for ( i = Length; ; v34 = i )
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
          v40 = v34 + FileName->Length + (unsigned int)v38;
          if ( FileNamea.MaximumLength < v40 + 2 )
          {
            if ( (_BYTE *)FileNamea.Buffer != v57 || v40 > 0xFFFC )
              break;
            FileNamea.MaximumLength = v31;
            FileNamea.Buffer = (PWCH)sub_18003B5E0((unsigned __int16)v31);
            if ( !FileNamea.Buffer )
              return -1073741801;
          }
          FileNamea.Length = 0;
          sub_180040C84(&FileNamea, v32, v39);
          if ( v38 && v39 != v38 )
          {
            FileNamea.Buffer[(unsigned __int64)FileNamea.Length >> 1] = 92;
            FileNamea.Length += 2;
          }
          sub_180040BF8(&FileNamea, FileName);
          if ( v53 )
            sub_180040BF8(&FileNamea, v53);
          if ( (unsigned __int64)FileNamea.Length + 2 > FileNamea.MaximumLength )
            break;
          FileNamea.Buffer[(unsigned __int64)FileNamea.Length >> 1] = 0;
          if ( (unsigned __int8)sub_18003C82C(&FileNamea, 0LL) )
          {
            FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                  &FileNamea,
                                  v51,
                                  v56,
                                  StringUsed,
                                  FileNameSize,
                                  0LL,
                                  &InputPathType,
                                  RequiredLength);
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
  if ( (unsigned __int8)sub_18003C82C(FileName, v15) )
  {
    p_FileNamea = FileName;
LABEL_85:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          p_FileNamea,
                          v51,
                          DynamicString,
                          (PUNICODE_STRING *)FullFileNameOut,
                          FileNameSize,
                          0LL,
                          &InputPathType,
                          RequiredLength);
LABEL_82:
    v19 = FullPathName_Ustr;
    if ( FullPathName_Ustr < 0 )
      goto LABEL_27;
    goto LABEL_83;
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
            goto LABEL_26;
        }
      }
    }
    v16 = DefaultExtension->Length + (unsigned int)FileName->Length + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > FileNamea.MaximumLength )
      {
        FileNamea.MaximumLength = DefaultExtension->Length + FileName->Length + 2;
        v17 = (WCHAR *)sub_18003B5E0((unsigned __int16)v16);
        FileNamea.Buffer = v17;
        if ( !v17 )
          return -1073741801;
      }
      else
      {
        v17 = FileNamea.Buffer;
      }
      memmove(v17, FileName->Buffer, FileName->Length);
      memmove(
        &FileNamea.Buffer[(unsigned __int64)FileName->Length >> 1],
        DefaultExtension->Buffer,
        DefaultExtension->Length);
      LOBYTE(v18) = 1;
      FileNamea.Buffer[(unsigned __int64)(FileName->Length + (unsigned int)DefaultExtension->Length) >> 1] = 0;
      FileNamea.Length = FileName->Length + DefaultExtension->Length;
      if ( !(unsigned __int8)sub_18003C82C(&FileNamea, v18) )
        goto LABEL_26;
      p_FileNamea = &FileNamea;
      goto LABEL_85;
    }
LABEL_110:
    v19 = -1073741562;
    goto LABEL_27;
  }
LABEL_26:
  v19 = -1073741809;
LABEL_27:
  if ( FileNamea.Buffer && (_BYTE *)FileNamea.Buffer != v57 )
    RtlFreeUnicodeString(&FileNamea);
  return v19;
}
