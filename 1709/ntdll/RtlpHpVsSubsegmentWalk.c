/*
 * XREFs of RtlpHpVsSubsegmentWalk @ 0x180061D84
 * Callers:
 *     RtlpHpSegWalk @ 0x180061ADC (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x180061F54 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpVsSubsegmentWalk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 a6)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v13; // rcx
  unsigned __int64 i; // rax

  if ( a3 == a2 )
  {
    v13 = a1 + 24;
    for ( i = *(_QWORD *)v13 ^ v13; i != v13; i ^= *(_QWORD *)i )
    {
      if ( i == a2 )
        goto LABEL_15;
    }
    if ( i != a2 )
      return 0LL;
LABEL_15:
    v7 = a2 + 48;
  }
  else
  {
    v7 = 16
       * (WORD1(RtlpHeapKey) ^ *(unsigned __int16 *)(a3 - 16 + 2) ^ ((unsigned __int64)(unsigned int)(a3 - 16) >> 16))
       + a3
       - 16;
  }
  v8 = a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL);
  if ( v7 >= v8 )
    return 0LL;
  while ( ((HIDWORD(RtlpHeapKey) ^ HIDWORD(v7) ^ HIDWORD(*(_QWORD *)v7)) & 0xFF0000) == 0
       || (*(_DWORD *)(v7 + 8) & 0x200) != 0 )
  {
    v7 += 16 * (WORD1(RtlpHeapKey) ^ *(unsigned __int16 *)(v7 + 2) ^ ((unsigned __int64)(unsigned int)v7 >> 16));
    if ( v7 >= v8 )
      return 0LL;
  }
  v9 = v7 + 16;
  v10 = RtlpHpVsChunkSize(v7 + 16, v8, a6);
  v11 = *(unsigned __int16 *)(v7 + 2);
  *a4 = v10;
  *a5 = 16 * (WORD1(RtlpHeapKey) ^ WORD1(v7) ^ v11) - v10 - 16;
  return v9;
}
