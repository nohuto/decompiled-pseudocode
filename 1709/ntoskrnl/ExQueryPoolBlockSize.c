/*
 * XREFs of ExQueryPoolBlockSize @ 0x140284880
 * Callers:
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x14006660C (MmIsSpecialPoolAddress.c)
 *     ExpGetBilledProcess @ 0x140116778 (ExpGetBilledProcess.c)
 *     MmQuerySpecialPoolBlockSize @ 0x14022132C (MmQuerySpecialPoolBlockSize.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  SIZE_T result; // rax
  char *v5; // rcx
  __int64 v6; // rbx
  bool v7; // zf

  if ( (unsigned int)MmIsSpecialPoolAddress((unsigned __int64)PoolBlock) )
  {
    *QuotaCharged = 0;
    return MmQuerySpecialPoolBlockSize((__int64)PoolBlock);
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v5 = (char *)PoolBlock - 16;
    v6 = 16LL * (unsigned __int8)*((_WORD *)PoolBlock - 7);
    v7 = ExpGetBilledProcess((__int64)v5) == 0LL;
    result = v6 - 16;
    *QuotaCharged = !v7;
  }
  else
  {
    *QuotaCharged = 0;
    return 4096LL;
  }
  return result;
}
