/*
 * XREFs of RtlGetCurrentProcessorNumberEx @ 0x18009F2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  char v1; // zf
  unsigned __int32 v2; // eax

  if ( MEMORY[0x7FFE0294] )
  {
    __asm { rdtscp }
    ProcessorNumber->Group = (unsigned int)ProcessorNumber >> 8;
    *(_WORD *)&ProcessorNumber->Number = (unsigned __int8)ProcessorNumber;
  }
  else
  {
    v2 = __segmentlimit(0x53u);
    if ( v1 )
    {
      ProcessorNumber->Group = v2 & 0x3FF;
      *(_WORD *)&ProcessorNumber->Number = v2 >> 14;
    }
    else
    {
      *ProcessorNumber = 0;
      ZwGetCurrentProcessorNumberEx(ProcessorNumber);
    }
  }
}
