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
  PSIZE_T v12; // rcx
  char v13; // r12
  char v14; // r15
  NTSTATUS CharInUnicodeString; // eax
  NTSTATUS appended; // ebx
  char v17; // di
  RTL_PATH_TYPE v18; // r11d
  _UNICODE_STRING v19; // xmm0
  USHORT Length; // cx
  USHORT v21; // ax
  ULONG v22; // r12d
  PULONG v23; // r15
  unsigned __int64 MaximumLength; // rcx
  _UNICODE_STRING *Buffer; // rax
  PSIZE_T v27; // rdi
  USHORT v28; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING StringToSearch_8; // [rsp+58h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v31; // [rsp+6Ch] [rbp-9Ch] BYREF
  PUNICODE_STRING StringUsed_8[2]; // [rsp+78h] [rbp-90h] BYREF
  _UNICODE_STRING v33; // [rsp+88h] [rbp-80h] BYREF
  USHORT NonInclusivePrefixLength[2]; // [rsp+98h] [rbp-70h] BYREF
  ULONG v35; // [rsp+9Ch] [rbp-6Ch]
  PULONG v36; // [rsp+A0h] [rbp-68h]
  PSIZE_T v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h] BYREF
  _UNICODE_STRING StaticStringa; // [rsp+B8h] [rbp-50h] BYREF
  _UNICODE_STRING v40; // [rsp+C8h] [rbp-40h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v42[2]; // [rsp+E8h] [rbp-20h] BYREF
  _UNICODE_STRING v43; // [rsp+108h] [rbp+0h] BYREF
  WCHAR *v44; // [rsp+118h] [rbp+10h]
  WCHAR *v45; // [rsp+120h] [rbp+18h]
  __int64 v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  _UNICODE_STRING v48[6]; // [rsp+148h] [rbp+40h] BYREF
  _WORD v49[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v50; // [rsp+1C8h] [rbp+C0h] BYREF

  v35 = Flags;
  *(_DWORD *)&v33.Length = 0;
  v12 = FileNameSize;
  v37 = FileNameSize;
  v36 = NewFlags;
  v33.Buffer = 0LL;
  *(_DWORD *)&StaticStringa.Length = 0x800000;
  StaticStringa.Buffer = (PWCH)&v50;
  v38 = 0LL;
  v28 = 0;
  v31 = 0;
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
  v49[0] = 0;
  v46 = 32LL;
  v44 = v49;
  v45 = v49;
  v43.Buffer = v49;
  v47 = 32LL;
  *(_DWORD *)&v43.Length = 0x200000;
  if ( StaticString )
  {
    MaximumLength = StaticString->MaximumLength;
    Buffer = (_UNICODE_STRING *)StaticString->Buffer;
    if ( MaximumLength < 2 )
    {
      Buffer = &v48[3];
      MaximumLength = 2LL;
    }
    *(_QWORD *)&v48[1].Length = Buffer;
    *(_QWORD *)&v48[2].Length = MaximumLength;
    v48[1].Buffer = &Buffer->Length;
    v48[2].Buffer = (PWCH)MaximumLength;
    v48[0].Buffer = &Buffer->Length;
    if ( Buffer )
      Buffer->Length = 0;
    v48[0].MaximumLength = MaximumLength;
    v12 = v37;
    v48[0].Length = 0;
  }
  else
  {
    *(_QWORD *)&v48[2].Length = 2LL;
    *(_QWORD *)&v48[1].Length = &v48[3];
    v48[1].Buffer = &v48[3].Length;
    v48[0].Buffer = &v48[3].Length;
    v48[2].Buffer = (PWCH)2;
    v48[3].Length = 0;
    *(_DWORD *)&v48[0].Length = 0x20000;
  }
  v48[4].Buffer = (PWCH)NewName;
  LOBYTE(v48[5].Length) = 1;
  v48[3].Buffer = &StaticString->Length;
  *(_QWORD *)&v48[4].Length = DynamicString;
  if ( (Flags & 0xFFFFFFFE) != 0 || !OriginalName )
    goto LABEL_72;
  if ( !StaticString )
  {
    if ( DynamicString || !v12 )
      goto LABEL_15;
LABEL_72:
    appended = -1073741811;
    goto LABEL_47;
  }
  if ( DynamicString && !NewName )
    goto LABEL_72;
LABEL_15:
  v13 = 0;
  StringToSearch_8 = *OriginalName;
  if ( !Extension || !Extension->Length )
    goto LABEL_22;
  v14 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(
                          1u,
                          &StringToSearch_8,
                          (PUNICODE_STRING)&CharSet,
                          NonInclusivePrefixLength);
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
    goto LABEL_48;
  if ( v14 )
    goto LABEL_22;
  v42[1] = *Extension;
  v43.Length = 0;
  v42[0] = StringToSearch_8;
  appended = RtlMultiAppendUnicodeStringBuffer(&v43, 2LL, v42);
  if ( appended >= 0 )
  {
    v13 = 1;
LABEL_22:
    appended = 0;
  }
  if ( appended < 0 )
    goto LABEL_48;
  if ( v13 )
    StringToSearch_8 = v43;
  v17 = 0;
  StringUsed_8[0] = 0LL;
  if ( v33.Buffer )
  {
    appended = -1073741811;
  }
  else
  {
    v18 = (unsigned int)sub_18003E414(&StringToSearch_8);
    InputPathType = v18;
    if ( ((v18 - 1) & 0xFFFFFFFA) != 0 || v18 == RtlPathTypeRelative )
      goto LABEL_35;
    appended = RtlGetFullPathName_UstrEx(
                 &StringToSearch_8,
                 &StaticStringa,
                 &v33,
                 StringUsed_8,
                 0LL,
                 0LL,
                 &InputPathType,
                 0LL);
    if ( appended >= 0 )
    {
      OriginalName = StringUsed_8[0];
      v19 = *StringUsed_8[0];
      *(_UNICODE_STRING *)StringUsed_8 = *StringUsed_8[0];
      if ( InputPathType == RtlPathTypeLocalDevice
        && StringToSearch_8.Buffer[5] == 58
        && StringToSearch_8.Buffer[6] == 92 )
      {
        StringUsed_8[1] = (PUNICODE_STRING)((char *)StringUsed_8[1] + 8);
        StringToSearch_8.MaximumLength -= 8;
        Length = StringToSearch_8.Length - 8;
        StringToSearch_8.Buffer += 4;
        v21 = LOWORD(StringUsed_8[0]) - 8;
        StringToSearch_8.Length -= 8;
        WORD1(StringUsed_8[0]) -= 8;
        LOWORD(StringUsed_8[0]) -= 8;
        v19 = *(_UNICODE_STRING *)StringUsed_8;
      }
      else
      {
        Length = StringToSearch_8.Length;
        v21 = (USHORT)StringUsed_8[0];
      }
      if ( Length > v21 )
      {
        StringToSearch_8 = v19;
        if ( OriginalName == &v33 )
          v17 = 1;
      }
LABEL_35:
      appended = 0;
      if ( v17 )
        goto LABEL_38;
    }
  }
  if ( v33.Buffer )
  {
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v33.Buffer);
    *(_QWORD *)&v33.Length = 0LL;
    v33.Buffer = 0LL;
  }
LABEL_38:
  if ( appended >= 0 )
  {
    if ( (v35 & 1) != 0 )
    {
      if ( NtCurrentPeb()->ProcessParameters )
      {
        if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
        {
          appended = sub_180004180(&StringToSearch_8, &v48[0].Length, &v31);
          if ( appended < 0 )
            goto LABEL_47;
        }
      }
    }
    v22 = v31;
    if ( (v31 & 1) != 0 )
    {
      v23 = v36;
    }
    else
    {
      if ( StaticString || (LOBYTE(OriginalName) = 1, DynamicString) )
        LOBYTE(OriginalName) = 0;
      v23 = v36;
      appended = sub_18003E4CC(
                   (unsigned int)&StringToSearch_8,
                   (_DWORD)OriginalName,
                   (unsigned int)&v38,
                   (_DWORD)v36,
                   (__int64)v48);
      if ( appended < 0 )
        goto LABEL_47;
    }
    if ( !DynamicString && StaticString && v48[0].Buffer != StaticString->Buffer )
    {
      appended = -1073741789;
      goto LABEL_47;
    }
    v27 = v37;
    if ( v37 )
    {
      appended = RtlFindCharInUnicodeString(1u, v48, (PUNICODE_STRING)&stru_180110078, &v28);
      if ( appended < 0 )
        goto LABEL_47;
      *v27 = ((unsigned __int64)v28 >> 1) + 1;
    }
    appended = sub_180080418(v48);
    if ( appended >= 0 )
    {
      if ( v23 )
        *v23 = v22;
      appended = 0;
    }
LABEL_47:
    if ( appended >= 0 )
      goto LABEL_55;
  }
LABEL_48:
  if ( LOBYTE(v48[5].Length) )
  {
    if ( *(_QWORD *)&v48[1].Length && *(PWCH *)&v48[1].Length != v48[1].Buffer )
    {
      v40.Buffer = *(PWCH *)&v48[1].Length;
      RtlFreeUnicodeString(&v40);
    }
    if ( v48[1].Buffer )
      *v48[1].Buffer = 0;
  }
  memset(v48, 0, 0x58uLL);
LABEL_55:
  if ( v33.Buffer )
  {
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v33.Buffer);
    *(_QWORD *)&v33.Length = 0LL;
    v33.Buffer = 0LL;
  }
  if ( v44 )
  {
    if ( v44 != v45 )
    {
      UnicodeString.Buffer = v44;
      RtlFreeUnicodeString(&UnicodeString);
    }
    v44 = v45;
    v46 = v47;
  }
  v43.Buffer = v45;
  if ( v45 )
    *v45 = 0;
  v43.MaximumLength = v47;
  v43.Length = 0;
  if ( appended == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B2u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return appended;
}
