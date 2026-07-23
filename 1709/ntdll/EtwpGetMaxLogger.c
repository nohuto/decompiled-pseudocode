/*
 * XREFs of EtwpGetMaxLogger @ 0x180085EB8
 * Callers:
 *     EtwGetTraceEnableLevel @ 0x180085E00 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180085E40 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceLoggerHandle @ 0x180085E80 (EtwGetTraceLoggerHandle.c)
 * Callees:
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 */

__int64 EtwpGetMaxLogger()
{
  __int64 result; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)EtwpMaxLoggers;
  if ( !EtwpMaxLoggers )
  {
    if ( NtTraceControl(EtwMaxLoggers, 0LL, 0, &EtwpMaxLoggers, 4u, &ReturnLength) || ReturnLength != 4 )
    {
      result = 64LL;
      EtwpMaxLoggers = 64;
    }
    else
    {
      return (unsigned int)EtwpMaxLoggers;
    }
  }
  return result;
}
