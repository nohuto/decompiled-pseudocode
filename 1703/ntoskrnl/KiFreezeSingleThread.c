/*
 * XREFs of KiFreezeSingleThread @ 0x140072F08
 * Callers:
 *     KeFreezeProcess @ 0x140072E2C (KeFreezeProcess.c)
 *     KeStartThread @ 0x1401121B8 (KeStartThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x14007301C (KiSuspendThread.c)
 */

__int64 __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rsi
  __int64 result; // rax

  v2 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736));
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xDu);
  result = KiSuspendThread(a2, a1);
  if ( !(_BYTE)result )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xDu);
  _InterlockedAnd(v2, 0xFFFFFF7F);
  return result;
}
