/*
 * XREFs of ZwDeleteKey @ 0x14017F240
 * Callers:
 *     BiZwDeleteKey @ 0x140290190 (BiZwDeleteKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405AD678 (IopCopyBootLogRegistryToFile.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405DD320 (ExpSetCurrentUserUILanguage.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     NtEnableLastKnownGood @ 0x1405E7AE0 (NtEnableLastKnownGood.c)
 *     CmDeleteKeyRecursive @ 0x1406984C8 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1406992C0 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x1406A1F18 (CmpDoReDoRecord.c)
 *     VrpDestroyNamespaceNode @ 0x1406A5A34 (VrpDestroyNamespaceNode.c)
 *     PiLastGoodCopyKeyContents @ 0x140853670 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140857D7C (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x14086A990 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
