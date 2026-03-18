/*
 * XREFs of ExpCheckForLookaside @ 0x14025D348
 * Callers:
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x14025B100 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x14025D3B0 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x14077CD08 (VfCheckForLookaside.c)
 */

__int64 __fastcall ExpCheckForLookaside(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) == 0 || (result = VfCheckForLookaside(), !(_DWORD)result) )
  {
    ExpCheckForLookasideList(a1, a2, &ExNPagedLookasideListHead, &ExNPagedLookasideLock);
    return ExpCheckForLookasideList(a1, a2, &ExPagedLookasideListHead, &ExPagedLookasideLock);
  }
  return result;
}
