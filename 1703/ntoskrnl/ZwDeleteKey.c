/*
 * XREFs of ZwDeleteKey @ 0x14017F8A0
 * Callers:
 *     BiZwDeleteKey @ 0x14013C154 (BiZwDeleteKey.c)
 *     ExpSetCurrentUserUILanguage @ 0x140587598 (ExpSetCurrentUserUILanguage.c)
 *     NtEnableLastKnownGood @ 0x140597E60 (NtEnableLastKnownGood.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     CmDeleteKeyRecursive @ 0x14066DFD0 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x14066EDC8 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x1406779DC (CmpDoReDoRecord.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 *     PiLastGoodCopyKeyContents @ 0x14080CC70 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140826610 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140833870 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
