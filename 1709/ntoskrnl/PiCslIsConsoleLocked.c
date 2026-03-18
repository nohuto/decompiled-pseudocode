/*
 * XREFs of PiCslIsConsoleLocked @ 0x1406D4410
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x14055DC84 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgEnforceConsoleLock @ 0x1406C31A8 (PipDmgEnforceConsoleLock.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char PiCslIsConsoleLocked()
{
  char v0; // cl

  v0 = 0;
  if ( !PipCslInitialized )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  if ( PipCslAlwaysLocked || !PipCslConsoleLockState )
    return 1;
  if ( PipCslConsoleLockState != 1 )
  {
    if ( PipCslConsoleLockState != 2 )
      __fastfail(5u);
    return 1;
  }
  return v0;
}
