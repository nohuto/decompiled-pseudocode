/*
 * XREFs of FsRtlGetFileNameInformation @ 0x1404FAD10
 * Callers:
 *     PerfLogImageUnload @ 0x1404F9690 (PerfLogImageUnload.c)
 *     PsCallImageNotifyRoutines @ 0x1404FA3F0 (PsCallImageNotifyRoutines.c)
 *     EtwpEnumerateAddressSpace @ 0x1404FA9C0 (EtwpEnumerateAddressSpace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 FsRtlGetFileNameInformation()
{
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 16))();
  else
    return 3221225659LL;
}
