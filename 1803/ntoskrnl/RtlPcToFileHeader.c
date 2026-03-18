/*
 * XREFs of RtlPcToFileHeader @ 0x1400CE8C0
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x14058CB5C (EtwpLocateDbgIdForRegEntry.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14012EDA0 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue >= *(&xmmword_140463020 + 1)
    && (unsigned __int64)PcValue < *(&xmmword_140463020 + 1) + (unsigned int)qword_140463030 )
  {
    v4 = *(_OWORD *)&xmmword_140463020;
  }
  else
  {
    RtlpxLookupFunctionTable(PcValue, &v4);
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
