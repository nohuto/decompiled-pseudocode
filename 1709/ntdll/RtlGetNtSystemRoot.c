/*
 * XREFs of RtlGetNtSystemRoot @ 0x1800179D0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180007560 (RtlQueryResourcePolicy.c)
 *     LdrpBuildSystem32FileName @ 0x1800164A0 (LdrpBuildSystem32FileName.c)
 *     LdrpGetModuleName @ 0x1800170B8 (LdrpGetModuleName.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800184E0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     LdrpApplyFileNameRedirection @ 0x180031AA8 (LdrpApplyFileNameRedirection.c)
 *     RtlpDiskSpeedInitialize @ 0x18008A2B0 (RtlpDiskSpeedInitialize.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CE750 (CsrpLocalSetupForSecureProcess.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DB028 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return (PWSTR)((char *)NtCurrentPeb()->SharedData + 30);
  else
    return (PWSTR)2147352624;
}
