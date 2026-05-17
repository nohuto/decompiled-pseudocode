/*
 * XREFs of RtlDoesFileExists_UEx @ 0x18001BE04
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800184E0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18001BBFC (RtlpGetMUIRedirectedFilePath.c)
 *     RtlDoesFileExists_U @ 0x180088CA0 (RtlDoesFileExists_U.c)
 *     RtlDosSearchPath_U @ 0x18008B480 (RtlDosSearchPath_U.c)
 *     RtlpCheckDeviceName @ 0x18008F218 (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlDoesFileExists_UstrEx @ 0x1800324B0 (RtlDoesFileExists_UstrEx.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 */

char __fastcall RtlDoesFileExists_UEx(__int64 a1, char a2)
{
  __int64 v3; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx(v5, a1) < 0 )
    return 0;
  LOBYTE(v3) = a2;
  return RtlDoesFileExists_UstrEx(v5, v3);
}
