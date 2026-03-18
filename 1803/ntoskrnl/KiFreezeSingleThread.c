/*
 * XREFs of KiFreezeSingleThread @ 0x1400BD320
 * Callers:
 *     KeStartThread @ 0x14003FBEC (KeStartThread.c)
 *     KeFreezeProcess @ 0x1400BD244 (KeFreezeProcess.c)
 * Callees:
 *     KiSuspendThread @ 0x140044BA8 (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rsi
  char result; // al

  v2 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe(a2 + 736);
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xEu);
  result = KiSuspendThread(a2, a1);
  if ( !result )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
  _InterlockedAnd(v2, 0xFFFFFF7F);
  return result;
}
