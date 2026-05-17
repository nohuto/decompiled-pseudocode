/*
 * XREFs of RtlResetNtUserPfn @ 0x180095D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlDllShutdownInProgress @ 0x18000B510 (RtlDllShutdownInProgress.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_18016B1C8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    sub_18001DEA8(0);
    byte_18016B1C8 = 0;
    memset64(off_18016B170, (unsigned __int64)sub_180095B20, 0xBuLL);
    memset64(off_18016B000, (unsigned __int64)sub_180095B20, 0x17uLL);
    memset64(off_18016B0B8, (unsigned __int64)sub_180095B20, 0x17uLL);
    sub_18001DEA8(1);
  }
  return 0LL;
}
