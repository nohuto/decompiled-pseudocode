/*
 * XREFs of RtlpHpSegHeapAddSegment @ 0x1402980A4
 * Callers:
 *     RtlpHpSegContextReserve @ 0x140297C58 (RtlpHpSegContextReserve.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402982C4 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegHeapAddSegment(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  *(_QWORD *)(a2 + 16) = a2 ^ a1 ^ RtlpHpHeapGlobals ^ 0xA2E64EADA2E64EADuLL;
  result = a1 + 32;
  v3 = *(unsigned __int64 **)(a1 + 40);
  if ( *v3 != a1 + 32 )
    __fastfail(3u);
  *(_QWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  *(_QWORD *)(a1 + 40) = a2;
  ++*(_QWORD *)(a1 + 48);
  return result;
}
