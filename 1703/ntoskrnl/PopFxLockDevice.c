/*
 * XREFs of PopFxLockDevice @ 0x14013257C
 * Callers:
 *     PopAllocateIrp @ 0x140146080 (PopAllocateIrp.c)
 *     PoFxNotifySurprisePowerOn @ 0x14014B4C0 (PoFxNotifySurprisePowerOn.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140570848 (PopFxUnregisterDeviceOrWait.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400692E0 (IoAcquireRemoveLockEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
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
    if ( v4 && IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 216), 0LL, File, 1u, 0x20u) < 0 )
      v4 = 0LL;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
    __writecr8(v6);
  }
  return v4;
}
