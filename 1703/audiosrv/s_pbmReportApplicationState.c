/*
 * XREFs of s_pbmReportApplicationState @ 0x18002F050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_pbmReportApplicationState(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (unsigned int)IsPbmReportApplicationStateSupported() )
    return PbmReportApplicationState(a1, a2, a3);
  else
    return 0LL;
}
