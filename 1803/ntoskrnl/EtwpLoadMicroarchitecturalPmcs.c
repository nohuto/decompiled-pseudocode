/*
 * XREFs of EtwpLoadMicroarchitecturalPmcs @ 0x140654768
 * Callers:
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401A7B00 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407AB938 (EtwpLoadMicroarchitecturalProfileGroup.c)
 */

void EtwpLoadMicroarchitecturalPmcs()
{
  __int64 v0; // rax
  SIZE_T v1; // r14
  WCHAR *PoolWithTag; // rdi
  int v3; // esi
  NTSTATUS v4; // eax
  int v5; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE KeyInformation[12]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v12; // [rsp+A4h] [rbp-64h]
  _WORD v13[264]; // [rsp+A8h] [rbp-60h] BYREF

  v0 = -1LL;
  do
    ++v0;
  while ( aRegistryMachin_16[v0] );
  v1 = (unsigned int)(2 * v0 + 514);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v1, 0x50777445u);
  if ( PoolWithTag )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v3 = -1;
      do
      {
        v4 = ZwEnumerateKey(KeyHandle, ++v3, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength);
        v5 = v4;
        if ( v4 < 0 || v12 >= 0x1FE )
        {
          if ( v4 == -1073741789 || v4 == -2147483643 )
            v5 = 0;
        }
        else
        {
          v13[(unsigned __int64)v12 >> 1] = 0;
          if ( RtlStringCbPrintfW(
                 PoolWithTag,
                 v1,
                 L"%ws\\%ws",
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
                 v13) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, PoolWithTag);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              EtwpLoadMicroarchitecturalProfileGroup(Handle);
              ZwClose(Handle);
            }
          }
        }
      }
      while ( v5 >= 0 );
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag(PoolWithTag, 0x50777445u);
  }
}
