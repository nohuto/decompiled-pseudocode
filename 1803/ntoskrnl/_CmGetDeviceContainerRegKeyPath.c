/*
 * XREFs of _CmGetDeviceContainerRegKeyPath @ 0x140586E4C
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x14051A334 (PiDqGetRelativeObjectRegPath.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140586C28 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407E9948 (_CmDeleteDeviceContainerRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     _CmValidateDeviceContainerName @ 0x140586F0C (_CmValidateDeviceContainerName.c)
 */

NTSTATUS __fastcall CmGetDeviceContainerRegKeyPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        unsigned int *a8)
{
  NTSTATUS result; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx

  if ( !(_DWORD)a3 || (a3 & 0xFFFFFEAF) != 0 )
    return -1073741811;
  result = CmValidateDeviceContainerName(a1, a2, a3);
  if ( result >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a2 + 2 * v10) );
    v11 = v10 + 51;
    v12 = -1;
    if ( v11 <= 0xFFFFFFFF )
      v12 = v11;
    result = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v11 <= 0xFFFFFFFF )
    {
      if ( a8 )
        *a8 = v12;
      if ( v12 > (unsigned int)cchDest )
        return -1073741789;
      else
        return RtlStringCchPrintfExW(
                 pszDest,
                 (unsigned int)cchDest,
                 0LL,
                 0LL,
                 0x800u,
                 L"System\\CurrentControlSet\\Control\\DeviceContainers\\%s",
                 a2);
    }
  }
  return result;
}
