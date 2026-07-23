/*
 * XREFs of RtlGetVersion @ 0x180007C00
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800500B0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x180085B10 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x180007D20 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x180007D50 (RtlGetNtProductType.c)
 *     RtlStringCbCopyW @ 0x1800528E4 (RtlStringCbCopyW.c)
 */

NTSTATUS __cdecl RtlGetVersion(PRTL_OSVERSIONINFOEXW VersionInformation)
{
  struct _PEB *v1; // rdi
  wchar_t *Buffer; // r8
  DWORD dwOSVersionInfoSize; // esi
  _NT_PRODUCT_TYPE v6; // eax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  VersionInformation->dwMajorVersion = v1->OSMajorVersion;
  VersionInformation->dwMinorVersion = v1->OSMinorVersion;
  VersionInformation->dwBuildNumber = v1->OSBuildNumber;
  VersionInformation->dwPlatformId = v1->OSPlatformId;
  Buffer = v1->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW(VersionInformation->szCSDVersion, 256LL, Buffer) < 0 )
      VersionInformation->szCSDVersion[0] = 0;
  }
  else
  {
    VersionInformation->szCSDVersion[0] = 0;
  }
  dwOSVersionInfoSize = VersionInformation->dwOSVersionInfoSize;
  if ( ((VersionInformation->dwOSVersionInfoSize - 284) & 0xFFFFFFF7) == 0 )
  {
    VersionInformation->wServicePackMajor = HIBYTE(v1->OSCSDVersion);
    VersionInformation->wServicePackMinor = (unsigned __int8)v1->OSCSDVersion;
    VersionInformation->wSuiteMask = RtlGetSuiteMask();
    if ( dwOSVersionInfoSize == 292 )
      VersionInformation[1].dwOSVersionInfoSize = RtlGetSuiteMask() & 0x1FFFF;
    VersionInformation->wProductType = 0;
    if ( RtlGetNtProductType(&NtProductType) )
    {
      v6 = NtProductType;
      VersionInformation->wProductType = NtProductType;
      if ( v6 == NtProductWinNt )
      {
        VersionInformation->wSuiteMask &= ~0x10u;
        if ( VersionInformation->dwOSVersionInfoSize == 292 )
          VersionInformation[1].dwOSVersionInfoSize &= 0x1FFEFu;
      }
    }
  }
  return 0;
}
