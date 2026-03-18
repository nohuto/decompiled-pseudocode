/*
 * XREFs of ExStopRecordingIRTimerExpiries @ 0x1407BEB14
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x14027A970 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void ExStopRecordingIRTimerExpiries()
{
  _DWORD *v0; // rbx
  int v1; // ebp
  const WCHAR **v2; // rdi
  __int64 v3; // r14
  __int16 i; // si
  int v5; // ecx

  v0 = (_DWORD *)_InterlockedExchange64(&ExpIRTimerExpiryCounts, 0LL);
  if ( v0 )
  {
    v1 = 0;
    v2 = (const WCHAR **)&unk_1402EE470;
    v3 = 14LL;
    do
    {
      for ( i = 0; (unsigned __int16)i < *(unsigned __int8 *)v2; ++i )
      {
        v5 = v0[v1];
        if ( v5 )
          PoDiagTraceIRTimerSleepStudyRundown(v5, i, *(v2 - 2));
        ++v1;
      }
      v2 += 3;
      --v3;
    }
    while ( v3 );
    ExFreePoolWithTag(v0, 0x69547845u);
  }
}
