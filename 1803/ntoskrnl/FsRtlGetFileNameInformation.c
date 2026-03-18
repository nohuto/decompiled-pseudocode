/*
 * XREFs of FsRtlGetFileNameInformation @ 0x1404B6AA0
 * Callers:
 *     EtwpTraceImageUnload @ 0x14003E620 (EtwpTraceImageUnload.c)
 *     EtwpEnumerateAddressSpace @ 0x1404B4AE4 (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x1404B6940 (PsCallImageNotifyRoutines.c)
 *     EtwpCovSampEnumerateProcess @ 0x1407B5E20 (EtwpCovSampEnumerateProcess.c)
 *     EtwpCovSampModuleGetName @ 0x1407B6654 (EtwpCovSampModuleGetName.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 FsRtlGetFileNameInformation()
{
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 16))();
  else
    return 3221225659LL;
}
