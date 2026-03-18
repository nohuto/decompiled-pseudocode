/*
 * XREFs of RtlPcToFileHeader @ 0x14002F550
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400E4B40 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *(&xmmword_1403F7020 + 1)
    || (unsigned __int64)PcValue >= *(&xmmword_1403F7020 + 1) + (unsigned int)qword_1403F7030 )
  {
    RtlpxLookupFunctionTable(PcValue, &v4);
  }
  else
  {
    v4 = *(_OWORD *)&xmmword_1403F7020;
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
