/*
 * XREFs of KiAcquireSecondaryPassiveConnectLock @ 0x140244AB0
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x140244B14 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140244C70 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall KiAcquireSecondaryPassiveConnectLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
}
