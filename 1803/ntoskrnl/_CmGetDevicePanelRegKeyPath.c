/*
 * XREFs of _CmGetDevicePanelRegKeyPath @ 0x1407ECE68
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x14051A334 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1407EC744 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1407ED0A4 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     _CmValidateDevicePanelName @ 0x140637090 (_CmValidateDevicePanelName.c)
 */

NTSTATUS __fastcall CmGetDevicePanelRegKeyPath(
        __int64 a1,
        const wchar_t *a2,
        int a3,
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

  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    return -1073741811;
  result = CmValidateDevicePanelName(a1, a2);
  if ( result >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    v11 = v10 + 47;
    v12 = -1;
    if ( v11 <= 0xFFFFFFFF )
      v12 = v11;
    result = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v11 <= 0xFFFFFFFF )
    {
      if ( a8 )
        *a8 = v12;
      if ( v12 <= (unsigned int)cchDest )
        return RtlStringCchPrintfExW(
                 pszDest,
                 (unsigned int)cchDest,
                 0LL,
                 0LL,
                 0x800u,
                 L"System\\CurrentControlSet\\Control\\DevicePanels\\%s",
                 a2);
      else
        return -1073741789;
    }
  }
  return result;
}
