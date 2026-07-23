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
  WCHAR *v17; // rax
  __int64 v18; // rdx
  NTSTATUS v19; // ebx
  PWCH v21; // rax
  USHORT Length; // r10
  PWCH Buffer; // rdx
  PWCH v24; // rcx
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
  NTSTATUS FullPathName_Ustr; // eax
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  _UNICODE_STRING *p_FileNamea; // rcx
  NTSTATUS v43; // eax
  PWCH v44; // rdx
  PWCH v45; // rcx
  _UNICODE_STRING FileNamea; // [rsp+50h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+60h] [rbp-A0h] BYREF
  PSIZE_T RequiredLength; // [rsp+68h] [rbp-98h]
  PSIZE_T FileNameSize; // [rsp+70h] [rbp-90h]
  PUNICODE_STRING v50; // [rsp+78h] [rbp-88h]
  int v51; // [rsp+80h] [rbp-80h]
  PUNICODE_STRING v52; // [rsp+88h] [rbp-78h]
  PUNICODE_STRING NewName; // [rsp+90h] [rbp-70h] BYREF
  PUNICODE_STRING v54; // [rsp+98h] [rbp-68h]
  PUNICODE_STRING *StringUsed; // [rsp+A0h] [rbp-60h]
  PUNICODE_STRING v56; // [rsp+A8h] [rbp-58h]
  _BYTE v57[528]; // [rsp+B0h] [rbp-50h] BYREF

  v54 = DefaultExtension;
  v52 = Path;
  v11 = Flags;
  v12 = 0LL;
  v50 = StaticString;
  v56 = DynamicString;
  StringUsed = (PUNICODE_STRING *)FullFileNameOut;
  FileNameSize = FilePartPrefixCch;
  RequiredLength = BytesRequired;
  LOWORD(v51) = 0;
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
    goto LABEL_26;
  }
  v13 = (unsigned int)sub_18003F2C4(FileName);
  InputPathType = v13;
  if ( (v11 & 2) != 0 )
  {
    if ( v13 != RtlPathTypeRelative )
      goto LABEL_17;
    if ( FileName->Length < 4u || (v21 = FileName->Buffer, *v21 != 46) )
    {
LABEL_32:
      if ( (v11 & 1) != 0 )
      {
        NewName = 0LL;
        v43 = RtlDosApplyFileIsolationRedirection_Ustr(
                1u,
                FileName,
                DefaultExtension,
                v50,
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
LABEL_72:
          v19 = 0;
          goto LABEL_26;
        }
        if ( v43 != -1072365560 )
          goto LABEL_26;
        p_Length = &v52->Length;
      }
      if ( DefaultExtension )
      {
        Length = DefaultExtension->Length;
        if ( FileName->Length )
        {
          Buffer = FileName->Buffer;
          v24 = &Buffer[(unsigned __int64)FileName->Length >> 1];
          do
          {
            if ( v24 <= Buffer )
              break;
            if ( *--v24 == 92 )
              break;
            if ( *v24 == 46 )
            {
              v54 = 0LL;
              Length = 0;
              break;
            }
          }
          while ( *v24 != 47 );
        }
      }
      else
      {
        Length = v51;
      }
      if ( *p_Length )
      {
        v25 = *((_QWORD *)p_Length + 1);
        v26 = (_WORD *)(v25 + 2 * ((unsigned __int64)*p_Length >> 1));
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
      v29 = Length;
      v30 = Length + (unsigned __int64)FileName->Length + v12 + 2;
      v52 = (PUNICODE_STRING)v30;
      if ( v30 <= 0xFFFE )
      {
        v31 = (_WORD *)*((_QWORD *)p_Length + 1);
        v32 = &v31[(unsigned __int64)*p_Length >> 1];
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
            v38 = FileName->Length;
            if ( FileNamea.MaximumLength < (unsigned __int64)v36 + v29 + v38 + 2 )
            {
              if ( (_BYTE *)FileNamea.Buffer != v57 || v38 + (unsigned __int64)v36 + v29 > 0xFFFC )
                break;
              FileNamea.MaximumLength = v30;
              FileNamea.Buffer = (PWCH)sub_180043FE0((unsigned __int16)v30);
              if ( !FileNamea.Buffer )
                return -1073741801;
            }
            FileNamea.Length = 0;
            sub_180070824(&FileNamea, v31, v37);
            if ( v36 && v37 != v36 )
            {
              FileNamea.Buffer[(unsigned __int64)FileNamea.Length >> 1] = 92;
              FileNamea.Length += 2;
            }
            sub_180070900(&FileNamea, FileName);
            if ( v54 )
              sub_180070900(&FileNamea, v54);
            if ( (unsigned __int64)FileNamea.Length + 2 > FileNamea.MaximumLength )
              break;
            FileNamea.Buffer[(unsigned __int64)FileNamea.Length >> 1] = 0;
            if ( (unsigned __int8)sub_18003D528(&FileNamea, 0LL) )
            {
              FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                    &FileNamea,
                                    v50,
                                    v56,
                                    StringUsed,
                                    FileNameSize,
                                    0LL,
                                    &InputPathType,
                                    RequiredLength);
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
      if ( v21[1] != 46 || FileName->Length < 6u || v21[2] != 92 && v21[2] != 47 )
        goto LABEL_32;
      InputPathType = RtlPathTypeUnknown;
      goto LABEL_17;
    }
    v13 = RtlPathTypeUnknown;
    InputPathType = RtlPathTypeUnknown;
  }
  if ( v13 == RtlPathTypeRelative )
    goto LABEL_32;
LABEL_17:
  LOBYTE(v14) = 1;
  if ( (unsigned __int8)sub_18003D528(FileName, v14) )
  {
    p_FileNamea = FileName;
LABEL_81:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          p_FileNamea,
                          v50,
                          DynamicString,
                          (PUNICODE_STRING *)FullFileNameOut,
                          FileNameSize,
                          0LL,
                          &InputPathType,
                          RequiredLength);
LABEL_71:
    v19 = FullPathName_Ustr;
    if ( FullPathName_Ustr < 0 )
      goto LABEL_26;
    goto LABEL_72;
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
    v16 = DefaultExtension->Length + FileName->Length + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > FileNamea.MaximumLength )
      {
        FileNamea.MaximumLength = DefaultExtension->Length + FileName->Length + 2;
        v17 = (WCHAR *)sub_180043FE0((unsigned __int16)v16);
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
      FileNamea.Buffer[(FileName->Length + (unsigned __int64)DefaultExtension->Length) >> 1] = 0;
      FileNamea.Length = FileName->Length + DefaultExtension->Length;
      if ( !(unsigned __int8)sub_18003D528(&FileNamea, v18) )
        goto LABEL_25;
      p_FileNamea = &FileNamea;
      goto LABEL_81;
    }
LABEL_109:
    v19 = -1073741562;
    goto LABEL_26;
  }
LABEL_25:
  v19 = -1073741809;
LABEL_26:
  if ( FileNamea.Buffer && (_BYTE *)FileNamea.Buffer != v57 )
    RtlFreeUnicodeString(&FileNamea);
  return v19;
}
