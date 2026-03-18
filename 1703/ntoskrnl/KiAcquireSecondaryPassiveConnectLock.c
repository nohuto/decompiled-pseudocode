/*
 * XREFs of KiAcquireSecondaryPassiveConnectLock @ 0x1402009CC
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x140200A28 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140200B94 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall KiAcquireSecondaryPassiveConnectLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
}
