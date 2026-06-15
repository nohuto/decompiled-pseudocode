/*
 * XREFs of s_pbmReportAppClosing @ 0x180002A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_pbmReportAppClosing(__int64 a1, __int64 a2)
{
  if ( (unsigned int)IsPbmReportAppClosingSupported() )
    return PbmReportAppClosing(a1, a2);
  else
    return 0LL;
}
