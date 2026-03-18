/*
 * XREFs of ExAllocateCacheAwareRundownProtection @ 0x1404955A0
 * Callers:
 *     MmCreatePartition @ 0x140184450 (MmCreatePartition.c)
 *     RawInitializeVcb @ 0x140495474 (RawInitializeVcb.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x140006AC0 (KeGetRecommendedSharedDataAlignment.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PEX_RUNDOWN_REF_CACHE_AWARE __stdcall ExAllocateCacheAwareRundownProtection(POOL_TYPE PoolType, ULONG PoolTag)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v5; // rbx
  unsigned int v6; // edi
  ULONG RecommendedSharedDataAlignment; // esi
  unsigned __int64 v8; // rax
  PVOID v9; // rcx
  unsigned int Number; // edx
  __int64 v11; // rdi
  PVOID v12; // rax
  unsigned int v13; // r8d
  int v14; // edx

  PoolWithTag = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)ExAllocatePoolWithTag(PoolType, 0x18uLL, PoolTag);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return v5;
  v6 = KeNumberProcessors_0;
  PoolWithTag->Number = KeNumberProcessors_0;
  if ( v6 <= 1 )
    RecommendedSharedDataAlignment = 8;
  else
    RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v5->RunRefSize = RecommendedSharedDataAlignment;
  v8 = (unsigned __int64)ExAllocatePoolWithTag(PoolType, RecommendedSharedDataAlignment * v6, PoolTag);
  v9 = (PVOID)v8;
  if ( v8 )
  {
    Number = v5->Number;
    if ( Number <= 1 || (v11 = RecommendedSharedDataAlignment - 1, (v11 & v8) == 0) )
    {
LABEL_9:
      v13 = 0;
      v5->PoolToFree = v9;
      v5->RunRefs = (_EX_RUNDOWN_REF *)v8;
      if ( Number )
      {
        do
        {
          v14 = v13 % v5->Number;
          ++v13;
          *(unsigned __int64 *)((char *)&v5->RunRefs->Count + v5->RunRefSize * v14) = 0LL;
        }
        while ( v13 < v5->Number );
      }
      return v5;
    }
    ExFreePoolWithTag((PVOID)v8, 0);
    v12 = ExAllocatePoolWithTag(PoolType, RecommendedSharedDataAlignment * (v5->Number + 1), PoolTag);
    v9 = v12;
    if ( v12 )
    {
      Number = v5->Number;
      v8 = ~v11 & ((unsigned __int64)v12 + v11);
      goto LABEL_9;
    }
  }
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
