/*
 * XREFs of CmpAddAliasEntry @ 0x140868D4C
 * Callers:
 *     CmpCreateControlSet @ 0x14083D05C (CmpCreateControlSet.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     sprintf_s @ 0x140164670 (sprintf_s.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     NtCreateKey @ 0x1404E2C5C (NtCreateKey.c)
 *     NtOpenKey @ 0x14056FB30 (NtOpenKey.c)
 *     CmpAddDockingInfo @ 0x14083D5A0 (CmpAddDockingInfo.c)
 */

__int64 __fastcall CmpAddAliasEntry(void *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  NTSTATUS v6; // ebx
  void *v7; // rsi
  HANDLE v8; // rdi
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-B8h] BYREF
  int Data; // [rsp+4Ch] [rbp-B4h] BYREF
  _STRING KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char DstBuf[128]; // [rsp+A0h] [rbp-60h] BYREF
  char v17; // [rsp+120h] [rbp+20h] BYREF

  ObjectAttributes.RootDirectory = a1;
  *(_QWORD *)&KeyHandle.Length = 0LL;
  Handle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpStrAliasString;
  ObjectAttributes.Attributes = 64;
  v5 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = NtOpenKey((PHANDLE)&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v6 == -1073741772 )
    v6 = NtCreateKey((PHANDLE)&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v6 >= 0 )
  {
    v7 = *(void **)&KeyHandle.Length;
    while ( 1 )
    {
      sprintf_s(DstBuf, 0x80uLL, "%04d", ++v5);
      RtlInitAnsiString(&KeyHandle, DstBuf);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      DestinationString.Buffer = (wchar_t *)&v17;
      RtlAnsiStringToUnicodeString(&DestinationString, &KeyHandle, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v7;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = NtOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      if ( v6 < 0 )
        break;
      NtClose(Handle);
      if ( v5 >= 0xC8 )
        goto LABEL_10;
    }
    if ( v6 == -1073741772 )
      v6 = 0;
LABEL_10:
    if ( v6 < 0 || (v6 = NtCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition), v6 < 0) )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = Handle;
      CmpAddDockingInfo(Handle, a2);
      Data = a3;
      v6 = NtSetValueKey(v8, (PUNICODE_STRING)&CmpStrProfileNumberString, 0, 4u, &Data, 4u);
    }
    if ( v7 )
      NtClose(v7);
    if ( v8 )
      NtClose(v8);
  }
  return (unsigned int)v6;
}
