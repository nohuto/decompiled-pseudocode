/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpFreezeHive @ 0x14046ED40 (CmpFreezeHive.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1405D9404 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1405D947C (CmpCreateSiloKeyLockEntry.c)
 *     CmpCommitDiscardReplacePost @ 0x140697C10 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14069AB9C (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x14069FEA0 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
