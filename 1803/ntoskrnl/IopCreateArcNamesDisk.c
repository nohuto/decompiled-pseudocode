/*
 * XREFs of IopCreateArcNamesDisk @ 0x1408C4C90
 * Callers:
 *     IopCreateArcNames @ 0x1408B74E4 (IopCreateArcNames.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x140496520 (IoGetDeviceObjectPointer.c)
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 *     IoGetConfigurationInformation @ 0x140605F90 (IoGetConfigurationInformation.c)
 *     IopFetchConfigurationInformation @ 0x1408C4F0C (IopFetchConfigurationInformation.c)
 */

__int64 IopCreateArcNamesDisk()
{
  ULONG DiskCount; // esi
  int ConfigurationInformation; // eax
  const WCHAR *v2; // rbx
  bool v3; // r12
  ULONG i; // edi
  unsigned int v5; // r15d
  __int64 v6; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-79h] BYREF
  PCWSTR SourceString; // [rsp+30h] [rbp-71h] BYREF
  PFILE_OBJECT FileObject[2]; // [rsp+38h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  wchar_t pszDest[64]; // [rsp+58h] [rbp-49h] BYREF

  SourceString = 0LL;
  LODWORD(DeviceObject) = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  *(GUID *)FileObject = GUID_DEVINTERFACE_DISK;
  ConfigurationInformation = IopFetchConfigurationInformation((PZZWSTR *)&SourceString, (GUID *)FileObject);
  v2 = SourceString;
  v3 = ConfigurationInformation < 0;
  if ( ConfigurationInformation < 0 )
    DiskCount += 20;
  for ( i = 0; i < DiskCount; ++i )
  {
    if ( v2 && *v2 )
    {
      v5 = -1;
      RtlInitUnicodeString(&DestinationString, v2);
      v6 = -1LL;
      do
        ++v6;
      while ( v2[v6] );
      v2 += v6 + 1;
      if ( v3 && !*v2 )
        DiskCount = i + 20;
    }
    else
    {
      v5 = i;
      RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition0", i, DeviceObject);
      RtlInitUnicodeString(&DestinationString, pszDest);
    }
    if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, FileObject, &DeviceObject) >= 0 )
    {
      IopCreateArcName(DeviceObject, v5);
      ObfDereferenceObjectWithTag(FileObject[0], 0x746C6644u);
    }
  }
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  return 0LL;
}
