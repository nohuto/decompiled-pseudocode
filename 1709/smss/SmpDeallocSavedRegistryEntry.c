/*
 * XREFs of SmpDeallocSavedRegistryEntry @ 0x140009004
 * Callers:
 *     SmpConfigureSharedSessionData @ 0x140006178 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x140006E00 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x1400070C0 (SmpProcessFileRenames.c)
 *     SmpLoadDataFromRegistry @ 0x140007224 (SmpLoadDataFromRegistry.c)
 *     SmpBuildSubSystemLists @ 0x140008540 (SmpBuildSubSystemLists.c)
 *     SmpSaveRegistryValue_U @ 0x140008C70 (SmpSaveRegistryValue_U.c)
 *     SmpInitializeDosDevices @ 0x140008E7C (SmpInitializeDosDevices.c)
 *     SmpRecordNewPageFile @ 0x1400090EC (SmpRecordNewPageFile.c)
 *     SmpCreatePagingFiles @ 0x140009518 (SmpCreatePagingFiles.c)
 *     SmpCleanupStalePageFiles @ 0x1400097B4 (SmpCleanupStalePageFiles.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SmpDeallocSavedRegistryEntry(struct _UNICODE_STRING *BaseAddress)
{
  void *v2; // r8
  BOOLEAN result; // al

  if ( BaseAddress )
  {
    RtlFreeUnicodeString(BaseAddress + 2);
    v2 = *(void **)&BaseAddress[3].Length;
    if ( v2 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v2);
    return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  }
  return result;
}
