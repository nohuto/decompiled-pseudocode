/*
 * XREFs of ExQueryPoolBlockSize @ 0x14025B080
 * Callers:
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     ExpGetBilledProcess @ 0x140025038 (ExpGetBilledProcess.c)
 *     MmIsSpecialPoolAddress @ 0x1400A5B4C (MmIsSpecialPoolAddress.c)
 *     MmQuerySpecialPoolBlockSize @ 0x140217A60 (MmQuerySpecialPoolBlockSize.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  SIZE_T result; // rax
  char *v5; // rcx
  unsigned int v6; // ebx
  bool v7; // zf

  if ( (unsigned int)MmIsSpecialPoolAddress((unsigned __int64)PoolBlock) )
  {
    *QuotaCharged = 0;
    return MmQuerySpecialPoolBlockSize((__int64)PoolBlock);
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v5 = (char *)PoolBlock - 16;
    v6 = 16 * (unsigned __int8)*((_WORD *)PoolBlock - 7) - 16;
    v7 = ExpGetBilledProcess((__int64)v5) == 0LL;
    result = v6;
    *QuotaCharged = !v7;
  }
  else
  {
    *QuotaCharged = 0;
    return 4096LL;
  }
  return result;
}
