/*
 * XREFs of LdrpInitMuiCrits @ 0x1400136C0
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140012704 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140013514 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140149348 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140164458 (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     KiInitializeMutant @ 0x140121F00 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x14052DEA0 (NtDelayExecution.c)
 */

__int64 __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -1000000LL;
  while ( _InterlockedCompareExchange(&MuiLockInitCount, 1, 0) )
  {
    result = (unsigned int)MuiLockInitCount;
    if ( MuiLockInitCount == 1 )
    {
      NtDelayExecution(0, &Interval);
      result = (unsigned int)MuiLockInitCount;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  LOBYTE(a3) = 1;
  result = KiInitializeMutant(&MuiMutex, 0LL, a3);
  MuiLockInitCount = 2;
  return result;
}
