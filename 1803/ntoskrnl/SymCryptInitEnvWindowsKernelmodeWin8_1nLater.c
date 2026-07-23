/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401A17A0
 * Callers:
 *     SymCryptInit @ 0x140186C54 (SymCryptInit.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x14016E720 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x1401A4A04 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x1401A4B6C (SymCryptInitEnvCommon.c)
 *     SymCryptFatal @ 0x140241294 (SymCryptFatal.c)
 *     RtlGetVersion @ 0x140571860 (RtlGetVersion.c)
 */

__int64 SymCryptInitEnvWindowsKernelmodeWin8_1nLater()
{
  __int64 result; // rax
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
    if ( (RtlGetEnabledExtendedFeatures(0xFFFFFFFFFFFFFFFFuLL) & 4) == 0 )
      g_SymCryptCpuFeaturesNotPresent |= 0x10u;
    g_SymCryptCpuFeaturesNotPresent &= ~0x20u;
    return SymCryptInitEnvCommon();
  }
  return result;
}
