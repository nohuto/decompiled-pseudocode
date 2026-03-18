/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x140084BE4
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1404E9AF0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x140084C24 (MiTranslateWsType.c)
 *     MiGetCurrentMultiplexedVm @ 0x140084C44 (MiGetCurrentMultiplexedVm.c)
 */

char *__fastcall MmGetWorkingSetLeafSize(__int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax

  if ( (_DWORD)a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm(a1, a2, a3);
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_14036D180 + 272 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 15);
}
