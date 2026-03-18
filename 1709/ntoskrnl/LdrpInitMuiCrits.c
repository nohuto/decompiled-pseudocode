/*
 * XREFs of LdrpInitMuiCrits @ 0x1400DC158
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1400DBFB0 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400DD510 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14012F768 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14013044C (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400B4748 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x1404ACF70 (NtDelayExecution.c)
 */

signed __int32 LdrpInitMuiCrits()
{
  signed __int32 result; // eax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -1000000LL;
  while ( 1 )
  {
    result = _InterlockedCompareExchange(&MuiLockInitCount, 1, 0);
    if ( !result )
      break;
    if ( MuiLockInitCount == 1 )
      result = NtDelayExecution(0, &Interval);
    if ( MuiLockInitCount == 2 )
      return result;
  }
  result = KiInitializeMutant((__int64)&MuiMutex, 0, 1);
  MuiLockInitCount = 2;
  return result;
}
