/*
 * XREFs of PiCreateRedirectedStateRoot @ 0x140648D7C
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x140648B50 (IoOpenDriverRegistryKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401477A8 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x1405F5268 (IopAllocateUnicodeString.c)
 *     RtlGetPersistedStateLocation @ 0x140648E80 (RtlGetPersistedStateLocation.c)
 *     PiCreateRegistryPath @ 0x140724DC8 (PiCreateRegistryPath.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140729BE0 (PiAuGetServiceStateSecurityObject.c)
 */

__int64 __fastcall PiCreateRedirectedStateRoot(UNICODE_STRING *CreateOptions, ULONG a2, _QWORD *a3)
{
  void *v4; // rsi
  void *v5; // rdi
  WCHAR *v7; // r14
  NTSTATUS PersistedStateLocation; // eax
  signed int UnicodeString; // ebx
  ULONG BufferLengthIn; // r12d
  WCHAR *TargetPath; // rax
  NTSTATUS v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  NTSTATUS v17; // eax
  int v18; // eax
  HANDLE v19; // rax
  void *v20; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+67h] BYREF
  ULONG Disposition; // [rsp+E8h] [rbp+6Fh] BYREF
  void *v26; // [rsp+F8h] [rbp+7Fh]

  Disposition = a2;
  v4 = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !CreateOptions || !CreateOptions->Buffer || CreateOptions->Length < 2u || !a3 )
  {
    UnicodeString = -1073741811;
    goto LABEL_7;
  }
  Disposition = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"DriverStatePath",
                             0LL,
                             0LL,
                             LocationTypeRegistry,
                             0LL,
                             0,
                             &Disposition);
  UnicodeString = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
  {
    UnicodeString = -1073741823;
    goto LABEL_7;
  }
  if ( PersistedStateLocation != -2147483643 )
    goto LABEL_7;
  BufferLengthIn = Disposition;
  TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, Disposition, 0x6F697050u);
  v7 = TargetPath;
  if ( !TargetPath )
  {
    UnicodeString = -1073741670;
    goto LABEL_7;
  }
  v13 = RtlGetPersistedStateLocation(
          L"DriverStatePath",
          0LL,
          0LL,
          LocationTypeRegistry,
          TargetPath,
          BufferLengthIn,
          0LL);
  UnicodeString = v13;
  if ( v13 == -1073741772 )
    goto LABEL_26;
  if ( v13 >= 0 )
  {
    v14 = -1;
    v15 = CreateOptions->Length + 2;
    v16 = v15 + BufferLengthIn;
    if ( v15 + BufferLengthIn >= v15 )
      v14 = v15 + BufferLengthIn;
    UnicodeString = v16 < v15 ? 0xC0000095 : 0;
    if ( v16 >= v15 )
    {
      if ( v14 > 0xFFFE )
      {
        UnicodeString = -2147483643;
        goto LABEL_7;
      }
      UnicodeString = IopAllocateUnicodeString((__int64)&DestinationString, v14);
      if ( UnicodeString >= 0 )
      {
        UnicodeString = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 0x800u, L"%ws\\%wZ", v7, CreateOptions);
        if ( UnicodeString >= 0 )
        {
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v17 = ZwOpenKey(&Handle, 4u, &ObjectAttributes);
          UnicodeString = v17;
          if ( v17 != -1073741772 )
            goto LABEL_35;
          UnicodeString = PiAuGetServiceStateSecurityObject(&v20);
          if ( UnicodeString < 0 || (UnicodeString = RtlInitUnicodeStringEx(&SourceString, v7), UnicodeString < 0) )
          {
            v4 = v20;
            goto LABEL_7;
          }
          v4 = v20;
          v18 = PiCreateRegistryPath(&SourceString);
          v5 = v26;
          UnicodeString = v18;
          if ( v18 != -1073741772 )
          {
            if ( v18 < 0 )
              goto LABEL_7;
            ObjectAttributes.SecurityQualityOfService = 0LL;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v26;
            ObjectAttributes.Attributes = 576;
            ObjectAttributes.ObjectName = CreateOptions;
            ObjectAttributes.SecurityDescriptor = v4;
            v17 = ZwCreateKey(&Handle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
            UnicodeString = v17;
            if ( v17 != -1073741772 )
            {
LABEL_35:
              if ( v17 >= 0 )
              {
                v19 = Handle;
                Handle = 0LL;
                *a3 = v19;
              }
              goto LABEL_7;
            }
          }
LABEL_26:
          UnicodeString = -1073741595;
        }
      }
    }
  }
LABEL_7:
  RtlFreeAnsiString(&DestinationString);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ZwClose(v5);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)UnicodeString;
}
