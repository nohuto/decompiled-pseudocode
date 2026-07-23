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

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrUnlockLoaderLock(ULONG Flags, PVOID Cookie)
{
  NTSTATUS v2; // ebx

  if ( (Flags & 0xFFFFFFFE) == 0 )
  {
    v2 = 0;
    if ( !Cookie )
      return v2;
    if ( (unsigned __int64)Cookie >= 0x1000000000000000LL )
    {
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    else
    {
      if ( ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ ((unsigned __int64)Cookie >> 48)) & 0xFFF) == 0 )
      {
        if ( (Flags & 1) != 0 )
          LdrpReleaseLoaderLock(*(__int64 *)&Flags, 13, 0);
        else
          LdrpReleaseLoaderLock(*(__int64 *)&Flags, 14, 0);
        return v2;
      }
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    return -1073741584;
  }
  if ( (Flags & 1) != 0 )
    RtlRaiseStatus(-1073741585);
  return -1073741585;
}
