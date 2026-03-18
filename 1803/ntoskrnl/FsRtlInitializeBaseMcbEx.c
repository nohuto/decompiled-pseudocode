/*
 * XREFs of FsRtlInitializeBaseMcbEx @ 0x140063180
 * Callers:
 *     FsRtlInitializeBaseMcb @ 0x1400632B0 (FsRtlInitializeBaseMcb.c)
 *     FsRtlInitializeLargeMcb @ 0x1400632D0 (FsRtlInitializeLargeMcb.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall FsRtlInitializeBaseMcbEx(PBASE_MCB Mcb, POOL_TYPE PoolType, USHORT Flags)
{
  char v3; // di
  PVOID PoolWithTag; // rax

  Mcb->PairCount = 0;
  v3 = Flags;
  Mcb->PoolType = PoolType;
  Mcb->Flags = Flags;
  if ( PoolType == PagedPool )
    PoolWithTag = ExAllocateFromNPagedLookasideList(&FsRtlFirstMappingLookasideList);
  else
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(unsigned __int16)PoolType, 0x78uLL, 0x74725346u);
  Mcb->Mapping = PoolWithTag;
  if ( PoolWithTag )
  {
    Mcb->MaximumPairCount = 15;
    return 1;
  }
  else
  {
    if ( (v3 & 1) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0;
  }
}
