/*
 * XREFs of RtlGetSystemTimePrecise @ 0x180069E20
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1800A06E0 (NtQueryPerformanceCounter.c)
 */

LARGE_INTEGER RtlGetSystemTimePrecise(void)
{
  __int64 v0; // rdi
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbp
  char v6; // si
  __int64 v7; // r14
  LARGE_INTEGER v8; // rdx
  __int64 v9; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp+10h] BYREF

  v0 = 0LL;
  while ( 1 )
  {
    v1 = 2147352596LL;
    v2 = 2147353432LL;
    while ( 1 )
    {
      v3 = MEMORY[0x7FFE0340];
      if ( (MEMORY[0x7FFE0340] & 1) == 0 )
        break;
      _mm_pause();
    }
    v4 = MEMORY[0x7FFE0358];
    LOBYTE(v2) = MEMORY[0x7FFE03C6];
    v5 = MEMORY[0x7FFE0348];
    v6 = MEMORY[0x7FFE0368];
    v7 = MEMORY[0x7FFE0014];
    if ( (MEMORY[0x7FFE03C6] & 1) != 0 )
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
        v2 = __rdtsc();
        LODWORD(v1) = HIDWORD(v2);
        v2 = (unsigned int)v2;
        v1 = (unsigned int)v1;
      }
      else
      {
        __asm { rdtscp }
      }
      v8.QuadPart = (((v1 << 32) | v2) + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
    }
    else
    {
      NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
      v8 = PerformanceCounter;
    }
    if ( MEMORY[0x7FFE0340] == v3 )
      break;
    _mm_pause();
  }
  if ( v8.QuadPart > v5 )
  {
    v9 = v8.QuadPart - v5 - 1;
    if ( v6 )
      v9 <<= v6;
    v0 = ((unsigned __int64)v9 * (unsigned __int128)v4) >> 64;
  }
  return (LARGE_INTEGER)(v7 + v0);
}
