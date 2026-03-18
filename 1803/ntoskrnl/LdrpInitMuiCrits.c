/*
 * XREFs of LdrpInitMuiCrits @ 0x14013E790
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14013D39C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14013DE98 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016399C (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016B088 (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x1405AD070 (NtDelayExecution.c)
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
  result = KiInitializeMutant((__int64)&MuiMutex, 0LL, 1);
  MuiLockInitCount = 2;
  return result;
}
