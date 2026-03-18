/*
 * XREFs of RtlPcToFileHeader @ 0x1400B4C50
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x1404F1214 (EtwpLocateDbgIdForRegEntry.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400D58A0 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue >= *(&xmmword_140418020 + 1)
    && (unsigned __int64)PcValue < *(&xmmword_140418020 + 1) + (unsigned int)qword_140418030 )
  {
    v4 = *(_OWORD *)&xmmword_140418020;
  }
  else
  {
    RtlpxLookupFunctionTable(PcValue, &v4);
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
