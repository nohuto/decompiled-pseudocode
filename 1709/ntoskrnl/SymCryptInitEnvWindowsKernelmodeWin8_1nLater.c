/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140176FE0
 * Callers:
 *     SymCryptInit @ 0x140145644 (SymCryptInit.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x14015A1F0 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x14017A184 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x14017A2EC (SymCryptInitEnvCommon.c)
 *     SymCryptFatal @ 0x140203CE0 (SymCryptFatal.c)
 *     RtlGetVersion @ 0x140541B60 (RtlGetVersion.c)
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
