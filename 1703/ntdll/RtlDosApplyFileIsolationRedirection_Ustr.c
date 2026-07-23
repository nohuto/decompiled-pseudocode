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
  char v11; // r12
  char v12; // r15
  NTSTATUS CharInUnicodeString; // eax
  NTSTATUS appended; // ebx
  int v15; // edx
  ULONG v16; // r15d
  char v17; // al
  PULONG v18; // r14
  unsigned __int64 MaximumLength; // rcx
  WCHAR *Buffer; // rax
  __int128 v22; // xmm1
  USHORT NonInclusivePrefixLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG v24; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD StringToSearch[3]; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING v26; // [rsp+58h] [rbp-B0h] BYREF
  PULONG v27; // [rsp+68h] [rbp-A0h]
  _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  _UNICODE_STRING StaticStringa; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v31[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR *v33; // [rsp+C8h] [rbp-40h]
  WCHAR *v34; // [rsp+D0h] [rbp-38h]
  __int64 v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  _UNICODE_STRING v37; // [rsp+F8h] [rbp-10h] BYREF
  WCHAR *v38; // [rsp+108h] [rbp+0h]
  WCHAR *v39; // [rsp+110h] [rbp+8h]
  __int64 v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  __int16 v42; // [rsp+128h] [rbp+20h] BYREF
  PUNICODE_STRING v43; // [rsp+130h] [rbp+28h]
  PUNICODE_STRING v44; // [rsp+138h] [rbp+30h]
  PUNICODE_STRING *v45; // [rsp+140h] [rbp+38h]
  char v46; // [rsp+148h] [rbp+40h]
  _WORD v47[16]; // [rsp+158h] [rbp+50h] BYREF
  char v48; // [rsp+178h] [rbp+70h] BYREF

  HIDWORD(StringToSearch[0]) = Flags;
  *(_QWORD *)&UnicodeString.Length = Extension;
  v27 = NewFlags;
  *(_DWORD *)&v26.Length = 0;
  v26.Buffer = 0LL;
  *(_DWORD *)&StaticStringa.Length = 0x800000;
  StaticStringa.Buffer = (PWCH)&v48;
  v29 = 0LL;
  NonInclusivePrefixLength[0] = 0;
  v24 = 0;
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
  v47[0] = 0;
  v35 = 32LL;
  v33 = v47;
  v34 = v47;
  *((_QWORD *)&v32 + 1) = v47;
  v36 = 32LL;
  LODWORD(v32) = 0x200000;
  if ( StaticString )
  {
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    if ( MaximumLength < 2 )
    {
      Buffer = (WCHAR *)&v42;
      MaximumLength = 2LL;
    }
    v38 = Buffer;
    v40 = MaximumLength;
    v39 = Buffer;
    v41 = MaximumLength;
    v37.Buffer = Buffer;
    if ( Buffer )
      *Buffer = 0;
    v37.Length = 0;
    v37.MaximumLength = MaximumLength;
  }
  else
  {
    v40 = 2LL;
    v38 = (WCHAR *)&v42;
    v39 = (WCHAR *)&v42;
    v37.Buffer = (PWCH)&v42;
    v41 = 2LL;
    v42 = 0;
    *(_DWORD *)&v37.Length = 0x20000;
  }
  v45 = NewName;
  v43 = StaticString;
  v44 = DynamicString;
  v46 = 1;
  if ( (Flags & 0xFFFFFFFE) != 0 || !OriginalName )
    goto LABEL_54;
  if ( !StaticString )
  {
    if ( DynamicString || !FileNameSize )
      goto LABEL_15;
LABEL_54:
    appended = -1073741811;
    goto LABEL_35;
  }
  if ( DynamicString && !NewName )
    goto LABEL_54;
LABEL_15:
  v11 = 0;
  *(_UNICODE_STRING *)&StringToSearch[1] = *OriginalName;
  if ( !Extension || !Extension->Length )
    goto LABEL_22;
  v12 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(
                          1u,
                          (PUNICODE_STRING)&StringToSearch[1],
                          (PUNICODE_STRING)&CharSet,
                          (PUSHORT)StringToSearch);
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
  LOWORD(v32) = 0;
  v22 = *(_OWORD *)*(_QWORD *)&UnicodeString.Length;
  v31[0] = *(_OWORD *)&StringToSearch[1];
  v31[1] = v22;
  appended = RtlMultiAppendUnicodeStringBuffer(&v32, 2LL, v31);
  if ( appended >= 0 )
  {
    v11 = 1;
LABEL_22:
    appended = 0;
  }
  if ( appended >= 0 )
  {
    if ( v11 )
      *(_OWORD *)&StringToSearch[1] = v32;
    appended = sub_18003DF20((PUNICODE_STRING)&StringToSearch[1], &StaticStringa, &v26);
    if ( appended >= 0 )
    {
      if ( (StringToSearch[0] & 0x100000000LL) == 0
        || !NtCurrentPeb()->ProcessParameters
        || (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) == 0
        || (appended = sub_1800050C8((_UNICODE_STRING *)&StringToSearch[1], &v37.Length, &v24), appended >= 0) )
      {
        v16 = v24;
        if ( (v24 & 1) != 0 )
        {
          v18 = v27;
        }
        else
        {
          if ( StaticString || (v17 = 1, DynamicString) )
            v17 = 0;
          v18 = v27;
          LOBYTE(v15) = v17;
          appended = sub_18003F37C(
                       (unsigned int)&StringToSearch[1],
                       v15,
                       (unsigned int)&v29,
                       (_DWORD)v27,
                       (__int64)&v37);
          if ( appended < 0 )
            goto LABEL_35;
        }
        if ( !DynamicString && StaticString && v37.Buffer != StaticString->Buffer )
        {
          appended = -1073741789;
          goto LABEL_35;
        }
        if ( FileNameSize )
        {
          appended = RtlFindCharInUnicodeString(1u, &v37, (PUNICODE_STRING)&stru_180110160, NonInclusivePrefixLength);
          if ( appended < 0 )
            goto LABEL_35;
          *FileNameSize = ((unsigned __int64)NonInclusivePrefixLength[0] >> 1) + 1;
        }
        appended = sub_180085870(&v37);
        if ( appended >= 0 )
        {
          if ( v18 )
            *v18 = v16;
          appended = 0;
        }
      }
    }
LABEL_35:
    if ( appended >= 0 )
      goto LABEL_37;
  }
LABEL_36:
  sub_18003FFE0(&v37);
LABEL_37:
  if ( v26.Buffer )
  {
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v26.Buffer);
    *(_QWORD *)&v26.Length = 0LL;
    v26.Buffer = 0LL;
  }
  if ( v33 )
  {
    if ( v33 != v34 )
    {
      UnicodeString.Buffer = v33;
      RtlFreeUnicodeString(&UnicodeString);
    }
    v33 = v34;
    v35 = v36;
  }
  *((_QWORD *)&v32 + 1) = v34;
  if ( v34 )
    *v34 = 0;
  WORD1(v32) = v36;
  LOWORD(v32) = 0;
  if ( appended == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B2u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return appended;
}
