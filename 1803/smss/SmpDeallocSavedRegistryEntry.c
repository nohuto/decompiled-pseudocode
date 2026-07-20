/*
 * XREFs of SmpDeallocSavedRegistryEntry @ 0x140008DB4
 * Callers:
 *     SmpConfigureSharedSessionData @ 0x140005FBC (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x140006C40 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x140006F00 (SmpProcessFileRenames.c)
 *     SmpLoadDataFromRegistry @ 0x140007064 (SmpLoadDataFromRegistry.c)
 *     SmpBuildSubSystemLists @ 0x1400082E0 (SmpBuildSubSystemLists.c)
 *     SmpSaveRegistryValue_U @ 0x140008A20 (SmpSaveRegistryValue_U.c)
 *     SmpInitializeDosDevices @ 0x140008C2C (SmpInitializeDosDevices.c)
 *     SmpRecordNewPageFile @ 0x140008E9C (SmpRecordNewPageFile.c)
 *     SmpCreatePagingFiles @ 0x1400092CC (SmpCreatePagingFiles.c)
 *     SmpCleanupStalePageFiles @ 0x140009568 (SmpCleanupStalePageFiles.c)
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
