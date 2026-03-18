/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x140206E6C
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14012D8F4 (KiDisconnectInterruptCommon.c)
 *     KiConnectSecondaryInterrupt @ 0x140206EF4 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140207050 (KiDisconnectSecondaryInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140207268 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140207438 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiInterruptDispatchCommon @ 0x14020AE24 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondaryInterruptConnectLock(KSPIN_LOCK *a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a2 = CurrentIrql;
  KxAcquireSpinLock(a1);
}
