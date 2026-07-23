/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x18003CCD0
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x18003CF70 (RtlDosSearchPath_Ustr.c)
 *     sub_18003DF20 @ 0x18003DF20 (sub_18003DF20.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UstrEx(
        PUNICODE_STRING FileName,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *StringUsed,
        SIZE_T *FilePartPrefixCch,
        PBOOLEAN NameInvalid,
        RTL_PATH_TYPE *InputPathType,
        SIZE_T *BytesRequired)
{
  WCHAR *v11; // r12
  SIZE_T *v12; // r13
  SIZE_T *v13; // r15
  _OBJECT_BOUNDARY_DESCRIPTOR *v14; // r14
  USHORT MaximumLength; // bx
  PWCH Buffer; // r8
  unsigned int v17; // eax
  unsigned __int64 v18; // rbx
  NTSTATUS v19; // ebx
  unsigned __int64 i; // rax
  USHORT v22; // bx
  USHORT v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v30 = 0LL;
  v11 = 0LL;
  if ( StringUsed )
    *StringUsed = 0LL;
  v12 = BytesRequired;
  if ( BytesRequired )
    *BytesRequired = 0LL;
  v13 = FilePartPrefixCch;
  if ( FilePartPrefixCch )
    *FilePartPrefixCch = 0LL;
  v14 = 0LL;
  SLODWORD(FilePartPrefixCch) = *InputPathType;
  if ( StaticString )
  {
    if ( DynamicString && !StringUsed )
    {
      v19 = -1073741811;
      goto LABEL_22;
    }
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    v31 = MaximumLength;
LABEL_11:
    LODWORD(BytesRequired) = MaximumLength;
    v17 = sub_18003E520(FileName, MaximumLength, Buffer, &v30, NameInvalid, &FilePartPrefixCch);
    LOWORD(v18) = v17;
    if ( v17 )
    {
      if ( StaticString && v17 < (unsigned int)BytesRequired )
      {
        StaticString->Length = v17;
        if ( v13 )
        {
          if ( v30 )
            v25 = (signed __int64)(v30 - (unsigned __int64)StaticString->Buffer) >> 1;
          else
            v25 = 0LL;
          *v13 = v25;
        }
        if ( StringUsed )
          *StringUsed = StaticString;
        v19 = 0;
      }
      else if ( DynamicString )
      {
        if ( v11 && v17 < (unsigned int)BytesRequired )
        {
          DynamicString->MaximumLength = v31;
          DynamicString->Length = v17;
          v11[(unsigned __int64)v17 >> 1] = 0;
          if ( v13 )
          {
            if ( v30 )
              v27 = (v30 - (__int64)v11) >> 1;
            else
              v27 = 0LL;
            *v13 = v27;
          }
          if ( StringUsed )
            *StringUsed = DynamicString;
          DynamicString->Buffer = v11;
          v19 = 0;
          goto LABEL_22;
        }
        for ( i = v17 + 2LL; ; i = v18 + 2 )
        {
          if ( i > 0xFFFE )
          {
            v19 = -1073741562;
            goto LABEL_18;
          }
          v22 = v18 + 2;
          v23 = v22;
          v14 = (_OBJECT_BOUNDARY_DESCRIPTOR *)sub_180043FE0(v22);
          if ( !v14 )
          {
            v19 = -1073741801;
            goto LABEL_18;
          }
          v24 = sub_18003E520(FileName, (unsigned int)v22 - 2, v14, &v30, NameInvalid, &FilePartPrefixCch);
          v18 = v24;
          if ( !v24 )
          {
            v19 = -1073741773;
            goto LABEL_18;
          }
          if ( v24 <= (unsigned __int64)v23 - 2 )
            break;
          RtlDeleteBoundaryDescriptor(v14);
          v14 = 0LL;
        }
        if ( v13 )
        {
          if ( v30 )
            v28 = (v30 - (__int64)v14) >> 1;
          else
            v28 = 0LL;
          *v13 = v28;
        }
        *((_WORD *)&v14->Version + (v18 >> 1)) = 0;
        DynamicString->Buffer = (PWCH)v14;
        DynamicString->Length = v18;
        DynamicString->MaximumLength = v23;
        if ( StringUsed )
          *StringUsed = DynamicString;
        v14 = 0LL;
        v19 = 0;
      }
      else
      {
        if ( v12 )
          *v12 = v17;
        v19 = -1073741789;
      }
    }
    else
    {
      v19 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v11);
    if ( v14 )
      RtlDeleteBoundaryDescriptor(v14);
LABEL_22:
    *InputPathType = (int)FilePartPrefixCch;
    return v19;
  }
  MaximumLength = 520;
  v31 = 520LL;
  v26 = sub_180043FE0(520LL);
  v11 = (WCHAR *)v26;
  if ( v26 )
  {
    Buffer = (PWCH)v26;
    goto LABEL_11;
  }
  return -1073741801;
}
