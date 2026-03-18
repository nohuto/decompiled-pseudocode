/*
 * XREFs of PiCslIsConsoleLocked @ 0x140739400
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1405C89E0 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgEnforceConsoleLock @ 0x140729288 (PipDmgEnforceConsoleLock.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
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
