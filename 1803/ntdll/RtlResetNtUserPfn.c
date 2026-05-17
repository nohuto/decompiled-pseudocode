/*
 * XREFs of RtlResetNtUserPfn @ 0x18008AF70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlDllShutdownInProgress @ 0x18004AAB0 (RtlDllShutdownInProgress.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_18016F1D8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    sub_1800259B4(0);
    byte_18016F1D8 = 0;
    memset64(off_18016F180, (unsigned __int64)sub_18008AD60, 0xBuLL);
    memset64(off_18016F000, (unsigned __int64)sub_18008AD60, 0x18uLL);
    memset64(off_18016F0C0, (unsigned __int64)sub_18008AD60, 0x18uLL);
    sub_1800259B4(1);
  }
  return 0LL;
}
