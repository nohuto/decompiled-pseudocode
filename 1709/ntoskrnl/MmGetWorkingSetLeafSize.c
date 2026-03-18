/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x1400F065C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140540C50 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x1400F0BB0 (MiTranslateWsType.c)
 *     MiGetCurrentMultiplexedVm @ 0x1400F0BD0 (MiGetCurrentMultiplexedVm.c)
 */

char *__fastcall MmGetWorkingSetLeafSize(int a1)
{
  char *result; // rax

  if ( a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm();
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_140389440 + 272 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 15);
}
