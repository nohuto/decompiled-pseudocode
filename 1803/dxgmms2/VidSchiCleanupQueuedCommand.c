/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x1C0033DFC
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00BCEF0 (VidSchFlushAdapter.c)
 * Callees:
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0012E90 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0012F08 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1C00BFB5C (VidSchiCleanupPacket_PriorityTable.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(struct _VIDSCH_GLOBAL *a1)
{
  char v2; // al
  _BYTE v3[56]; // [rsp+20h] [rbp-38h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v3, (unsigned __int64 *)a1 + 238, 1, 0);
  *((_BYTE *)a1 + 2884) |= 1u;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
  VidSchiCleanupPacket_PriorityTable(a1);
  v2 = *((_BYTE *)a1 + 2884);
  if ( (v2 & 2) == 0 )
    *((_BYTE *)a1 + 2884) = v2 & 0xFE;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
}
