/*
 * XREFs of PiDrvDbResolveKeyFilePaths @ 0x14073DA4C
 * Callers:
 *     PiDevCfgInitResolveContext @ 0x1405DADC4 (PiDevCfgInitResolveContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     IopQueryRegistryKeySystemPath @ 0x1405FB93C (IopQueryRegistryKeySystemPath.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC (PiDrvDbResolveFilePathKeyValues.c)
 */

__int64 __fastcall PiDrvDbResolveKeyFilePaths(HANDLE Handle)
{
  int v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (PiDrvDbOverlayFlags & 2) != 0 )
  {
    v2 = IopQueryRegistryKeySystemPath(Handle, &DestinationString);
    if ( v2 >= 0 )
      v2 = PiDrvDbResolveFilePathKeyValues((__int64)Handle, &DestinationString);
  }
  else
  {
    v2 = 0;
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v2;
}
