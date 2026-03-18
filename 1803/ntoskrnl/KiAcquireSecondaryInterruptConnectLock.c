/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x140244A8C
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x1401689FC (KiDisconnectInterruptCommon.c)
 *     KiConnectSecondaryInterrupt @ 0x140244B14 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140244C70 (KiDisconnectSecondaryInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140244E88 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140245058 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiInterruptDispatchCommon @ 0x1402491BC (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondaryInterruptConnectLock(KSPIN_LOCK *a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a2 = CurrentIrql;
  KxAcquireSpinLock(a1);
}
