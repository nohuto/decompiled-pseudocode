/*
 * XREFs of MiIsWorkingSetTrimThread @ 0x140126894
 * Callers:
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 *     MmAddRangeToCrashDump @ 0x14021AE94 (MmAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsWorkingSetTrimThread()
{
  void (__fastcall __noreturn *Blink)(); // rcx

  Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
  return Blink == KeBalanceSetManager || (char *)Blink == (char *)MiPartitionWorkingSetManager;
}
