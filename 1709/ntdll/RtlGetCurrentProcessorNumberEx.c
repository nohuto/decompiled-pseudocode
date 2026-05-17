/*
 * XREFs of RtlGetCurrentProcessorNumberEx @ 0x1800A4860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlGetCurrentProcessorNumberEx(_WORD *a1)
{
  char v1; // zf
  unsigned __int32 v2; // eax

  if ( MEMORY[0x7FFE0294] )
  {
    __asm { rdtscp }
    *a1 = (unsigned int)a1 >> 8;
    a1[1] = (unsigned __int8)a1;
  }
  else
  {
    v2 = __segmentlimit(0x53u);
    if ( v1 )
    {
      *a1 = v2 & 0x3FF;
      a1[1] = v2 >> 14;
    }
    else
    {
      *(_DWORD *)a1 = 0;
      NtGetCurrentProcessorNumberEx();
    }
  }
}
