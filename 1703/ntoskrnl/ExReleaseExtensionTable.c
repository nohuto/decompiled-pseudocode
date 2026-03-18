/*
 * XREFs of ExReleaseExtensionTable @ 0x140117418
 * Callers:
 *     LsaFreeReturnBuffer @ 0x14045CDC0 (LsaFreeReturnBuffer.c)
 *     PspCallProcessNotifyRoutines @ 0x1404FA068 (PspCallProcessNotifyRoutines.c)
 *     BCryptGetProperty @ 0x140548CBC (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x140548D48 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140548D98 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x140548E0C (BCryptCreateHash.c)
 *     BCryptHashData @ 0x140548E9C (BCryptHashData.c)
 *     PcwAddInstance @ 0x140548F20 (PcwAddInstance.c)
 *     PcwCreateInstance @ 0x140575160 (PcwCreateInstance.c)
 *     PcwCloseInstance @ 0x140575FE0 (PcwCloseInstance.c)
 *     BCryptOpenAlgorithmProvider @ 0x1405B70B0 (BCryptOpenAlgorithmProvider.c)
 *     PcwRegister @ 0x1405C53B0 (PcwRegister.c)
 *     LsaLookupAuthenticationPackage @ 0x1405D39F0 (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x1405D44D0 (LsaRegisterLogonProcess.c)
 *     PspNetRateControlDispatch @ 0x1406E1760 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x1406F072C (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x1406F07CC (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x1406F0854 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x1406F08E0 (LsaCallAuthenticationPackage.c)
 *     LsaDeregisterLogonProcess @ 0x1406F0990 (LsaDeregisterLogonProcess.c)
 *     LsaLogonUser @ 0x1406F09E0 (LsaLogonUser.c)
 *     PcwUnregister @ 0x14071F240 (PcwUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 8);
}
