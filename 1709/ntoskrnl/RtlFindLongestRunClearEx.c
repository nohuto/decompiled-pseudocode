/*
 * XREFs of RtlFindLongestRunClearEx @ 0x1402529D0
 * Callers:
 *     RtlpHpFixedVsAllocate @ 0x14025C300 (RtlpHpFixedVsAllocate.c)
 *     MiGetSystemPteStatistics @ 0x1406EA67C (MiGetSystemPteStatistics.c)
 * Callees:
 *     RtlFindClearRunsEx @ 0x1402524B4 (RtlFindClearRunsEx.c)
 */

__int64 __fastcall RtlFindLongestRunClearEx(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+44h] [rbp+1Ch]

  if ( (unsigned int)RtlFindClearRunsEx(a1, (__int64)&v4) == 1 )
  {
    *a2 = v4;
    return v5;
  }
  else
  {
    *a2 = 0LL;
    return 0LL;
  }
}
