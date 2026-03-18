/*
 * XREFs of FsRtlGetFileNameInformation @ 0x1404D2F40
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1404524D0 (EtwpEnumerateAddressSpace.c)
 *     PerfLogImageUnload @ 0x140452774 (PerfLogImageUnload.c)
 *     PsCallImageNotifyRoutines @ 0x1404D2A40 (PsCallImageNotifyRoutines.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 FsRtlGetFileNameInformation()
{
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 16))();
  else
    return 3221225659LL;
}
