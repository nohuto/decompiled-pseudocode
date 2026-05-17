/*
 * XREFs of RtlResetNtUserPfn @ 0x180090B10
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlDllShutdownInProgress @ 0x18006DA00 (RtlDllShutdownInProgress.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_18016F1C8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0);
    byte_18016F1C8 = 0;
    memset64(off_18016F170, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x17uLL);
    memset64(off_18016F0B8, (unsigned __int64)UninitUser32Proc, 0x17uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
