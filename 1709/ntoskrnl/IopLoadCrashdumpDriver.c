/*
 * XREFs of IopLoadCrashdumpDriver @ 0x14014F920
 * Callers:
 *     IopInitializeCrashDump @ 0x1405D4750 (IopInitializeCrashDump.c)
 *     IoGetDumpStack @ 0x1406B6E44 (IoGetDumpStack.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     HvlGetEncryptedDataDomains @ 0x14014FA48 (HvlGetEncryptedDataDomains.c)
 *     IopGetPhysicalMemoryBlock @ 0x14014FA60 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING *v2; // [rsp+40h] [rbp-40h]
  PVOID BaseAddress; // [rsp+90h] [rbp+10h] BYREF
  __int64 v4; // [rsp+98h] [rbp+18h] BYREF

  if ( CrashdmpImageEntry )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  result = MmLoadSystemImageEx((unsigned int)&DestinationString, 0, 0, 34, (__int64)&v4, (__int64)&BaseAddress);
  if ( (int)result >= 0 )
  {
    if ( RtlImageNtHeader(BaseAddress) )
    {
      v2 = &IoArcBootDeviceName;
      IopGetPhysicalMemoryBlock();
    }
    return 3221225473LL;
  }
  return result;
}
