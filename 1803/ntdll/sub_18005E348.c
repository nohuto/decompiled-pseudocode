/*
 * XREFs of sub_18005E348 @ 0x18005E348
 * Callers:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 * Callees:
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_18005E1FC @ 0x18005E1FC (sub_18005E1FC.c)
 *     sub_1800FF314 @ 0x1800FF314 (sub_1800FF314.c)
 */

__int64 __fastcall sub_18005E348(char *HeapHandle, unsigned __int64 a2, int a3)
{
  __int64 v6; // rcx
  unsigned __int16 v7; // di
  __int64 result; // rax

  if ( sub_18005E1FC((__int64)HeapHandle) )
    v7 = sub_1800FF314(v6, a2);
  else
    v7 = 0;
  result = sub_180019140(HeapHandle, a2, a3, v7);
  if ( !result )
  {
    if ( v7 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(qword_18015AA38 + 8LL * v7 - 8) + 32LL),
        -(__int64)a2);
  }
  return result;
}
