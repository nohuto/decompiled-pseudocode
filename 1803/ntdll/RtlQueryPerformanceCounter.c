/*
 * XREFs of RtlQueryPerformanceCounter @ 0x180007F20
 * Callers:
 *     sub_180004D3C @ 0x180004D3C (sub_180004D3C.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     sub_180007D50 @ 0x180007D50 (sub_180007D50.c)
 *     RtlGetSystemTimePrecise @ 0x180007E60 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1800DF4D0 (RtlGetInterruptTimePrecise.c)
 *     sub_180109F00 @ 0x180109F00 (sub_180109F00.c)
 * Callees:
 *     ZwQueryPerformanceCounter @ 0x18009B0E0 (ZwQueryPerformanceCounter.c)
 */

LOGICAL __cdecl RtlQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v4; // rdx
  LONGLONG QuadPart; // rax
  LARGE_INTEGER PerformanceCountera; // [rsp+40h] [rbp+18h] BYREF

  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    goto LABEL_13;
  if ( (MEMORY[0x7FFE03C6] & 2) != 0 )
  {
    if ( qword_18015ADA8 && *(_DWORD *)qword_18015ADA8 )
    {
      if ( MEMORY[0x7FFE03C6] >= 0 )
      {
        if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
        {
          _mm_lfence();
        }
        else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
        {
          _mm_mfence();
        }
        v1 = __rdtsc();
        LODWORD(v2) = HIDWORD(v1);
        v1 = (unsigned int)v1;
        v2 = (unsigned int)v2;
      }
      else
      {
        __asm { rdtscp }
      }
      v4 = *(_QWORD *)(qword_18015ADA8 + 16)
         + (((v1 | (v2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(qword_18015ADA8 + 8)) >> 64);
      goto LABEL_6;
    }
LABEL_13:
    ZwQueryPerformanceCounter(&PerformanceCountera, 0LL);
    QuadPart = PerformanceCountera.QuadPart;
    goto LABEL_7;
  }
  if ( MEMORY[0x7FFE03C6] >= 0 )
  {
    if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
    {
      _mm_lfence();
    }
    else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
    {
      _mm_mfence();
    }
    v1 = __rdtsc();
    LODWORD(v2) = HIDWORD(v1);
    v1 = (unsigned int)v1;
    v2 = (unsigned int)v2;
  }
  else
  {
    __asm { rdtscp }
  }
  v4 = v1 | (v2 << 32);
LABEL_6:
  QuadPart = (v4 + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
LABEL_7:
  PerformanceCounter->QuadPart = QuadPart;
  return 1;
}
