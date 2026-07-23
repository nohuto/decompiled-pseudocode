/*
 * XREFs of sub_1800812F0 @ 0x1800812F0
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x180081230 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180081280 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800812C0 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

__int64 sub_1800812F0()
{
  __int64 result; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)dword_18015A438;
  if ( !dword_18015A438 )
  {
    if ( ZwTraceControl(EtwMaxLoggers, 0LL, 0, &dword_18015A438, 4u, &ReturnLength) || ReturnLength != 4 )
    {
      result = 64LL;
      dword_18015A438 = 64;
    }
    else
    {
      return (unsigned int)dword_18015A438;
    }
  }
  return result;
}
