/*
 * XREFs of LdrUnlockLoaderLock @ 0x18007FAF0
 * Callers:
 *     TppIopExecuteCallback @ 0x18000CC70 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180048C9C (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 *     LdrpReleaseLoaderLock @ 0x18002086C (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x180083E08 (LdrpLogError.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx

  if ( (a1 & 0xFFFFFFFE) == 0 )
  {
    v2 = 0;
    if ( !a2 )
      return v2;
    if ( a2 >= 0x1000000000000000LL )
    {
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    else
    {
      if ( ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ HIWORD(a2)) & 0xFFF) == 0 )
      {
        if ( (a1 & 1) != 0 )
          LdrpReleaseLoaderLock(a1, 13, 0);
        else
          LdrpReleaseLoaderLock(a1, 14, 0);
        return v2;
      }
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    return (unsigned int)-1073741584;
  }
  if ( (a1 & 1) != 0 )
    RtlRaiseStatus(-1073741585);
  return (unsigned int)-1073741585;
}
