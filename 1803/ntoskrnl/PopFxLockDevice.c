/*
 * XREFs of PopFxLockDevice @ 0x140144E10
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x140155070 (PoFxNotifySurprisePowerOn.c)
 *     PopAllocateIrp @ 0x1401673F8 (PopAllocateIrp.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1405C81EC (PopFxUnregisterDeviceOrWait.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400782B0 (IoAcquireRemoveLockEx.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall PopFxLockDevice(__int64 a1, char a2)
{
  __int64 v4; // rbx
  KIRQL v5; // al
  KIRQL v6; // r14

  v4 = 0LL;
  if ( a1 )
  {
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v4 = *(_QWORD *)(a1 + 80);
    v6 = v5;
    if ( a2 )
      v4 &= -(__int64)((*(_BYTE *)(a1 + 296) & 4) != 0);
    if ( v4 && IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 216), 0LL, &File, 1u, 0x20u) < 0 )
      v4 = 0LL;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
    __writecr8(v6);
  }
  return v4;
}
