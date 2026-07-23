/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x18003BF10
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
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
  _OBJECT_BOUNDARY_DESCRIPTOR *v14; // rsi
  USHORT MaximumLength; // bx
  PWCH Buffer; // r8
  unsigned int v17; // eax
  __int64 v18; // rbx
  NTSTATUS v19; // ebx
  unsigned __int16 v21; // bx
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rax
  WCHAR *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v29 = 0LL;
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
    v30 = MaximumLength;
LABEL_11:
    LODWORD(BytesRequired) = MaximumLength;
    v17 = sub_18003D640(FileName, MaximumLength, Buffer, &v29, NameInvalid, &FilePartPrefixCch);
    LOWORD(v18) = v17;
    if ( v17 )
    {
      if ( StaticString && v17 < (unsigned int)BytesRequired )
      {
        StaticString->Length = v17;
        if ( v13 )
        {
          if ( v29 )
            v24 = (signed __int64)(v29 - (unsigned __int64)StaticString->Buffer) >> 1;
          else
            v24 = 0LL;
          *v13 = v24;
        }
        if ( StringUsed )
          *StringUsed = StaticString;
        v19 = 0;
      }
      else if ( DynamicString )
      {
        if ( v11 && v17 < (unsigned int)BytesRequired )
        {
          DynamicString->MaximumLength = v30;
          DynamicString->Length = v17;
          v11[(unsigned __int64)v17 >> 1] = 0;
          if ( v13 )
          {
            if ( v29 )
              v26 = (v29 - (__int64)v11) >> 1;
            else
              v26 = 0LL;
            *v13 = v26;
          }
          if ( StringUsed )
            *StringUsed = DynamicString;
          DynamicString->Buffer = v11;
          v19 = 0;
          goto LABEL_22;
        }
        if ( (unsigned __int64)v17 + 2 > 0xFFFE )
        {
LABEL_56:
          v19 = -1073741562;
        }
        else
        {
          while ( 1 )
          {
            v21 = v18 + 2;
            v22 = v21;
            v14 = (_OBJECT_BOUNDARY_DESCRIPTOR *)sub_18003B5E0(v21);
            if ( !v14 )
            {
              v19 = -1073741801;
              goto LABEL_18;
            }
            v23 = sub_18003D640(FileName, (unsigned int)v21 - 2, v14, &v29, NameInvalid, &FilePartPrefixCch);
            v18 = v23;
            if ( !v23 )
              goto LABEL_47;
            if ( v23 <= (unsigned __int64)(v22 - 2) )
              break;
            RtlDeleteBoundaryDescriptor(v14);
            if ( (unsigned __int64)(v18 + 2) > 0xFFFE )
              goto LABEL_56;
          }
          if ( v13 )
          {
            if ( v29 )
              v27 = (v29 - (__int64)v14) >> 1;
            else
              v27 = 0LL;
            *v13 = v27;
          }
          *((_WORD *)&v14->Version + ((unsigned __int64)(unsigned int)v18 >> 1)) = 0;
          DynamicString->Buffer = (PWCH)v14;
          DynamicString->Length = v18;
          DynamicString->MaximumLength = v22;
          if ( StringUsed )
            *StringUsed = DynamicString;
          v19 = 0;
        }
        v14 = 0LL;
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
LABEL_47:
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
  v30 = 520LL;
  v25 = (WCHAR *)sub_18003B5E0(0x208uLL);
  v11 = v25;
  if ( v25 )
  {
    Buffer = v25;
    goto LABEL_11;
  }
  return -1073741801;
}
