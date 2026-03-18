/*
 * XREFs of EtwpAllocatePmcData @ 0x140748F0C
 * Callers:
 *     EtwpUpdatePmcCounters @ 0x140749C90 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x140749DB4 (EtwpUpdatePmcEvents.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400FC800 (KeQueryMaximumProcessorCountEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  *(_QWORD *)(a1 + 2152) = v4;
  return result;
}
