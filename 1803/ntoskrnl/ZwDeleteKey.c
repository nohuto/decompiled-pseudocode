/*
 * XREFs of ZwDeleteKey @ 0x1401A8E60
 * Callers:
 *     BiZwDeleteKey @ 0x140155ACC (BiZwDeleteKey.c)
 *     NtEnableLastKnownGood @ 0x1405F2CEC (NtEnableLastKnownGood.c)
 *     ExpSetCurrentUserUILanguage @ 0x14060E6CC (ExpSetCurrentUserUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140653FF0 (_RegRtlDeleteKeyTransacted.c)
 *     CmDeleteKeyRecursive @ 0x1406FBD00 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1406FCAF8 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x1407070E4 (CmpDoReDoRecord.c)
 *     VrpDestroyNamespaceNode @ 0x14070A0B4 (VrpDestroyNamespaceNode.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407ABDF4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x1408C5524 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x1408C9EE8 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1408DF380 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
