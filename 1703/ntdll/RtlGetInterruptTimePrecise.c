/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1800E4A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18005F480 (RtlQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlGetInterruptTimePrecise(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  while ( 1 )
  {
    v3 = MEMORY[0x7FFE0340];
    if ( (MEMORY[0x7FFE0340] & 1) == 0 )
    {
      v4 = MEMORY[0x7FFE0350];
      v5 = MEMORY[0x7FFE0008];
      RtlQueryPerformanceCounter(&v9);
      if ( MEMORY[0x7FFE0340] == v3 )
        break;
    }
    _mm_pause();
  }
  v6 = v9;
  *a1 = v9;
  if ( v6 > v4 )
  {
    v7 = -1LL - v4 + v6;
    if ( MEMORY[0x7FFE0369] )
      v7 <<= MEMORY[0x7FFE0369];
    v2 = (v7 * (unsigned __int128)MEMORY[0x7FFE0360]) >> 64;
  }
  return v5 + v2;
}
