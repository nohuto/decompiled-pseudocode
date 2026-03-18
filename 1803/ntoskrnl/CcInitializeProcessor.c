/*
 * XREFs of CcInitializeProcessor @ 0x1406220CC
 * Callers:
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     CcInitializeCacheManager @ 0x1408A0410 (CcInitializeCacheManager.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x140006260 (MmIsThisAnNtAsSystem.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1404792DC (ExInitializeSystemLookasideList.c)
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
