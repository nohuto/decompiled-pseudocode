/*
 * XREFs of KiFreezeSingleThread @ 0x1400AC524
 * Callers:
 *     KeStartThread @ 0x1400A6890 (KeStartThread.c)
 *     KeFreezeProcess @ 0x1400AC584 (KeFreezeProcess.c)
 * Callees:
 *     KiSuspendThread @ 0x1400ABB8C (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rsi
  __int64 v5; // r8
  char result; // al

  v2 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe(a2 + 736);
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xEu);
  result = KiSuspendThread(a2, a1, v5);
  if ( !result )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
  _InterlockedAnd(v2, 0xFFFFFF7F);
  return result;
}
