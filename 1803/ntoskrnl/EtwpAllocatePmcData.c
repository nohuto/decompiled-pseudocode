/*
 * XREFs of EtwpAllocatePmcData @ 0x1407AAC68
 * Callers:
 *     EtwpUpdatePmcCounters @ 0x1407AC11C (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1407AC240 (EtwpUpdatePmcEvents.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocatePmcData(__int64 a1)
{
  SIZE_T v2; // rdi
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx
  __int64 result; // rax

  v2 = 8 * KeQueryMaximumProcessorCountEx(0xFFFFu) + 48;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x58777445u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v2);
  result = 0LL;
  *(_QWORD *)(a1 + 1000) = v4;
  return result;
}
