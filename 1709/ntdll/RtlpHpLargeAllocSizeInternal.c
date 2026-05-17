/*
 * XREFs of RtlpHpLargeAllocSizeInternal @ 0x18006F414
 * Callers:
 *     RtlpHpLargeAllocSize @ 0x18006F39C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocReport @ 0x1801074D4 (RtlpHpLargeAllocReport.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSizeInternal(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 32);
  result = (v3 & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(a2 + 24);
  if ( a3 )
    *a3 = v3 & 1;
  return result;
}
