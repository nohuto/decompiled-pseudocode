/*
 * XREFs of ACPIRegReadEntireSimulatorAcpiTable @ 0x1C0081F50
 * Callers:
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C0081B14 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C00377D8 (WPP_RECORDER_SF_d.c)
 *     OSReadRegValue @ 0x1C00829B8 (OSReadRegValue.c)
 */

__int64 ACPIRegReadEntireSimulatorAcpiTable()
{
  PVOID PoolWithTag; // rbx
  int v1; // eax
  int v2; // edx
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  PoolWithTag = 0LL;
  RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", 0);
  do
  {
    v1 = OSReadRegValue(pszDest);
    if ( v1 >= 0 )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        22,
        40,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        0);
      ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225473LL;
    }
    if ( v1 != -2147483643 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return 0LL;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0LL, 0x42706341u);
  }
  while ( PoolWithTag );
  return 3221225626LL;
}
