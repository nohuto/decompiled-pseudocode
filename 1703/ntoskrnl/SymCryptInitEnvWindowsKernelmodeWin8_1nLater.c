/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401777A0
 * Callers:
 *     SymCryptInit @ 0x1401682B4 (SymCryptInit.c)
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x14014AF10 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x14017A944 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x14017AAAC (SymCryptInitEnvCommon.c)
 *     SymCryptFatal @ 0x1401FDBE0 (SymCryptFatal.c)
 *     RtlGetVersion @ 0x140448C50 (RtlGetVersion.c)
 */

__int64 SymCryptInitEnvWindowsKernelmodeWin8_1nLater()
{
  __int64 result; // rax
  bool v1; // zf
  int v2; // eax
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  result = (unsigned int)g_SymCryptFlags;
  if ( (g_SymCryptFlags & 1) == 0 )
  {
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( RtlGetVersion(&VersionInformation) < 0 )
      SymCryptFatal(1853059702LL);
    if ( VersionInformation.dwMajorVersion < 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion < 3 )
    {
      SymCryptFatal(1853059702LL);
    }
    SymCryptDetectCpuFeaturesByCpuid(1LL);
    v1 = (RtlGetEnabledExtendedFeatures(0xFFFFFFFFFFFFFFFFuLL) & 4) == 0;
    v2 = g_SymCryptCpuFeaturesNotPresent;
    if ( v1 )
      v2 = g_SymCryptCpuFeaturesNotPresent | 0x10;
    g_SymCryptCpuFeaturesNotPresent = v2 & 0xFFFFFFDF;
    return SymCryptInitEnvCommon();
  }
  return result;
}
