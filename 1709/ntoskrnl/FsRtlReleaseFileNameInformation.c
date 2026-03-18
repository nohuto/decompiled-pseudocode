/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x140595310
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1404524D0 (EtwpEnumerateAddressSpace.c)
 *     PerfLogImageUnload @ 0x140452774 (PerfLogImageUnload.c)
 *     PsCallImageNotifyRoutines @ 0x1404D2A40 (PsCallImageNotifyRoutines.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 FsRtlReleaseFileNameInformation()
{
  return (*(__int64 (**)(void))(FltMgrCallbacks + 24))();
}
