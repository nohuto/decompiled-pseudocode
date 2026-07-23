/*
 * XREFs of ExpGetSystemWriteConstraintInformation @ 0x1407544A4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1401331BC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExpGetUwfRegDwordValue @ 0x140283730 (ExpGetUwfRegDwordValue.c)
 *     ExpGetUwfRegStringValue @ 0x1402837A8 (ExpGetUwfRegStringValue.c)
 *     ExpOpenUwfRelativeRegKey @ 0x140283854 (ExpOpenUwfRelativeRegKey.c)
 *     RtlGetNtSystemRoot @ 0x140542E50 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall ExpGetSystemWriteConstraintInformation(int *a1)
{
  int *v1; // r15
  unsigned int v2; // esi
  int v3; // edi
  char v4; // r12
  char v5; // r14
  NTSTATUS UwfRegDwordValue; // eax
  NTSTATUS v7; // ebx
  bool v8; // r13
  unsigned int v9; // r15d
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  HANDLE v12; // rcx
  int UwfRegStringValue; // eax
  int v14; // ecx
  unsigned int v16; // [rsp+20h] [rbp-178h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-170h] BYREF
  int *v18; // [rsp+30h] [rbp-168h]
  HANDLE v19; // [rsp+38h] [rbp-160h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-158h] BYREF
  HANDLE v21; // [rsp+48h] [rbp-150h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-148h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-140h] BYREF
  BOOL v24; // [rsp+68h] [rbp-130h]
  UNICODE_STRING v25; // [rsp+70h] [rbp-128h] BYREF
  PWSTR NtSystemRoot; // [rsp+80h] [rbp-118h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v28[80]; // [rsp+C0h] [rbp-D8h] BYREF
  _BYTE v29[80]; // [rsp+110h] [rbp-88h] BYREF

  v1 = a1;
  v18 = a1;
  ObjectAttributes.Length = 48;
  v2 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_14078D3B8;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  KeyHandle = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  memset(v28, 0, sizeof(v28));
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  memset(v29, 0, sizeof(v29));
  *(_QWORD *)&v25.MaximumLength = 0LL;
  v3 = 0;
  v16 = 0;
  v20 = 0;
  v4 = 0;
  v5 = 0;
  *(_DWORD *)&DestinationString.Length = 5242880;
  DestinationString.Buffer = (wchar_t *)v28;
  *(_DWORD *)&v25.Length = 5242880;
  v25.Buffer = (wchar_t *)v29;
  UwfRegDwordValue = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v7 = UwfRegDwordValue;
  if ( UwfRegDwordValue < 0 )
    goto LABEL_2;
  UwfRegDwordValue = ExpGetUwfRegDwordValue(KeyHandle, (UNICODE_STRING *)&qword_14078D3E8, &v16);
  v7 = UwfRegDwordValue;
  if ( UwfRegDwordValue < 0 )
    goto LABEL_2;
  v7 = RtlUnicodeStringPrintf(&DestinationString, L"Copy%d", v16);
  if ( v7 < 0 )
    goto LABEL_37;
  UwfRegDwordValue = ExpOpenUwfRelativeRegKey(&v19, KeyHandle, &DestinationString);
  v7 = UwfRegDwordValue;
  if ( UwfRegDwordValue < 0 )
    goto LABEL_2;
  UwfRegDwordValue = ExpGetUwfRegDwordValue(v19, (UNICODE_STRING *)&qword_14078D3D8, &v16);
  v7 = UwfRegDwordValue;
  if ( UwfRegDwordValue < 0 )
    goto LABEL_2;
  v24 = v16 != 0;
  UwfRegDwordValue = ExpGetUwfRegDwordValue(v19, (UNICODE_STRING *)L"(*", &v16);
  v7 = UwfRegDwordValue;
  if ( UwfRegDwordValue < 0
    || (v8 = v16 != 0,
        UwfRegDwordValue = ExpOpenUwfRelativeRegKey(&v21, v19, (UNICODE_STRING *)&qword_14078D418),
        v7 = UwfRegDwordValue,
        UwfRegDwordValue < 0)
    || (UwfRegDwordValue = ExpGetUwfRegDwordValue(v21, (UNICODE_STRING *)&qword_14078D408, &v20),
        v7 = UwfRegDwordValue,
        UwfRegDwordValue < 0) )
  {
LABEL_2:
    if ( UwfRegDwordValue == -1073741772 )
      v7 = 0;
  }
  else
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    v9 = v20;
    if ( v20 )
    {
      do
      {
        v7 = RtlUnicodeStringPrintf(&DestinationString, L"%d", v2);
        if ( v7 < 0 )
        {
LABEL_36:
          v1 = v18;
          goto LABEL_37;
        }
        UwfRegDwordValue = ExpOpenUwfRelativeRegKey(&Handle, v21, &DestinationString);
        v7 = UwfRegDwordValue;
        if ( UwfRegDwordValue < 0 )
        {
          v1 = v18;
          goto LABEL_2;
        }
        v10 = ExpGetUwfRegDwordValue(Handle, (UNICODE_STRING *)&qword_14078D428, &v16);
        v7 = v10;
        if ( v10 >= 0 )
        {
          v12 = Handle;
          if ( !v16 )
            goto LABEL_24;
          UwfRegStringValue = ExpGetUwfRegStringValue(Handle, v11, &v25);
          v7 = UwfRegStringValue;
          if ( UwfRegStringValue >= 0 )
          {
            v4 = 1;
            if ( *v25.Buffer == *NtSystemRoot )
              v5 = 1;
            v12 = Handle;
            if ( !Handle )
              goto LABEL_25;
            goto LABEL_24;
          }
          if ( UwfRegStringValue != -1073741772 )
            goto LABEL_36;
          v4 = 1;
        }
        else if ( v10 != -1073741772 )
        {
          goto LABEL_36;
        }
        v12 = Handle;
LABEL_24:
        ZwClose(v12);
        Handle = 0LL;
LABEL_25:
        ++v2;
      }
      while ( v2 < v9 );
    }
    v14 = (v4 != 0) | 2;
    if ( !v5 )
      v14 = v4 != 0;
    v3 = v14;
    if ( v24 && (v5 || v4) )
      v3 = v14 | 4;
    v1 = v18;
    if ( v8 )
      v3 |= 8u;
  }
LABEL_37:
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( v21 )
  {
    ZwClose(v21);
    v21 = 0LL;
  }
  if ( v19 )
  {
    ZwClose(v19);
    v19 = 0LL;
  }
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v7 >= 0 )
  {
    *v1 = v3;
    v1[1] = 0;
  }
  return (unsigned int)v7;
}
