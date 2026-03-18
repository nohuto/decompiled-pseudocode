/*
 * XREFs of ConvertMonitorFrequencyRangeType @ 0x1C0238958
 * Callers:
 *     ConvertFrequencyRange @ 0x1C0238808 (ConvertFrequencyRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertMonitorFrequencyRangeType(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax

  v2 = (int)a1;
  if ( (_DWORD)a1 == 1 )
  {
    *a2 = 1;
  }
  else
  {
    if ( (_DWORD)a1 != 2 )
    {
      v4 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v4 + 24) = v2;
      WdLogEvent5_WdError(v4);
      *a2 = 0;
      return 3223192408LL;
    }
    *a2 = 2;
  }
  return 0LL;
}
