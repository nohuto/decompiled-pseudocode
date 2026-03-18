/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x14002FDA4
 * Callers:
 *     CcScanDpc @ 0x14002FD90 (CcScanDpc.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehind @ 0x14013E078 (CcNotifyWriteBehind.c)
 *     MiFlushAllPagesWorker @ 0x14013E0D8 (MiFlushAllPagesWorker.c)
 *     MiFlushAllFilesystemPages @ 0x1402114A0 (MiFlushAllFilesystemPages.c)
 *     MiObtainFreePages @ 0x140215244 (MiObtainFreePages.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

LONG __fastcall CcNotifyWriteBehindInternal(struct _KEVENT *a1, char a2)
{
  LONG result; // eax

  if ( CcInitializationComplete )
  {
    if ( (a2 & 1) != 0 )
      result = KeSetEvent(a1 + 17, 0, 0);
    if ( (a2 & 2) != 0 )
      result = KeSetEvent(a1 + 18, 0, 0);
    if ( (a2 & 4) != 0 )
      result = KeSetEvent(a1 + 19, 0, 0);
    if ( (a2 & 8) != 0 )
      result = KeSetEvent(a1 + 20, 0, 0);
    if ( (a2 & 0x10) != 0 )
      return KeSetEvent(a1 + 21, 0, 0);
  }
  return result;
}
