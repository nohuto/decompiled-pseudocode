/*
 * XREFs of PoFxNotifySurprisePowerOn @ 0x140155070
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     PopFxLockDevice @ 0x140144E10 (PopFxLockDevice.c)
 *     PopPepSurprisePowerOn @ 0x1401550C0 (PopPepSurprisePowerOn.c)
 */

void __fastcall PoFxNotifySurprisePowerOn(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v1 = PopFxLockDevice(a1, 1);
  v2 = v1;
  if ( v1 )
  {
    PopPepSurprisePowerOn(*(_QWORD *)(v1 + 56));
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 216), 0LL, 0x20u);
  }
}
