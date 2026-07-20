/*
 * XREFs of SmpLookupControlBlock @ 0x140004694
 * Callers:
 *     SmpStopCsr @ 0x140001070 (SmpStopCsr.c)
 *     SmpHandleConnectionRequest @ 0x140004130 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpTreeLookupControlBlock @ 0x1400046D0 (SmpTreeLookupControlBlock.c)
 */

__int64 __fastcall SmpLookupControlBlock(unsigned int a1)
{
  __int64 v2; // rbx

  RtlAcquireSRWLockShared(&SmpControlLock);
  v2 = SmpTreeLookupControlBlock(SmpControlBlockRoot, a1);
  RtlReleaseSRWLockShared(&SmpControlLock);
  return v2;
}
