/*
 * XREFs of CcInitializeProcessor @ 0x1405C6974
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     CcInitializeCacheManager @ 0x140842C3C (CcInitializeCacheManager.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x1400FFF60 (MmIsThisAnNtAsSystem.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1404275CC (ExInitializeSystemLookasideList.c)
 */

__int64 __fastcall CcInitializeProcessor(__int64 a1)
{
  __int16 v2; // di
  PVOID PoolWithTag; // rbx
  __int64 result; // rax

  v2 = 128;
  if ( MmIsThisAnNtAsSystem() )
    v2 = 256;
  *(_QWORD *)(a1 + 2152) = &CcTwilightLookasideList;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4B576343u);
  if ( PoolWithTag )
    ExInitializeSystemLookasideList((__int64)PoolWithTag, 512, 136, 1264018243, v2, (__int64)&ExSystemLookasideListHead);
  else
    PoolWithTag = &CcTwilightLookasideList;
  result = 0LL;
  *(_QWORD *)(a1 + 2144) = PoolWithTag;
  return result;
}
