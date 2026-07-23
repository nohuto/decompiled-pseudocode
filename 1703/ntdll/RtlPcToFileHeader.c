/*
 * XREFs of RtlPcToFileHeader @ 0x1800382A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18016B4C0 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18016B4C0 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18016B4D0 )
  {
    sub_180034A40(PcValue, (__int64)&v4);
  }
  else
  {
    v4 = xmmword_18016B4C0;
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
