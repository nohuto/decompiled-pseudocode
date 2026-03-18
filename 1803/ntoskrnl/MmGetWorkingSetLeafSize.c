/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x1400803D8
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14052C950 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x140080418 (MiTranslateWsType.c)
 *     MiGetCurrentMultiplexedVm @ 0x14008045C (MiGetCurrentMultiplexedVm.c)
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
    result = (char *)&unk_1403CC6C0 + 272 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 15);
}
