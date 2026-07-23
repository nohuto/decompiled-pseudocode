/*
 * XREFs of RtlPcToFileHeader @ 0x18007C500
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18016F4D0 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18016F4D0 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18016F4E0 )
  {
    RtlpxLookupFunctionTable(PcValue, (__int64)&v4);
  }
  else
  {
    v4 = xmmword_18016F4D0;
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
