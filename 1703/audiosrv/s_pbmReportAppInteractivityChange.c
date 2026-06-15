/*
 * XREFs of s_pbmReportAppInteractivityChange @ 0x18002EBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_pbmReportAppInteractivityChange(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (unsigned int)IsPbmReportAppInteractivityChangeSupported() )
    return PbmReportAppInteractivityChange(a1, a2, a3);
  else
    return 0LL;
}
