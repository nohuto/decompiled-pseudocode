/*
 * XREFs of VfSuspectDriversAllocateEntry @ 0x1407BD394
 * Callers:
 *     VfDriverEnableVerifierForAll @ 0x1407A8D88 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1407BD64C (VfSuspectDriversLoadCallback.c)
 *     VfAddVerifierEntry @ 0x1407CA2F4 (VfAddVerifierEntry.c)
 *     VfTriageAddDrivers @ 0x14086C8C4 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x14086CD1C (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall VfSuspectDriversAllocateEntry(const void **a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned __int16 *)a1 + 1) + 40LL, 0x44536656u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[4] = 0;
    PoolWithTag[5] = 0;
    *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 10;
    *((_WORD *)PoolWithTag + 12) = *(_WORD *)a1;
    *((_WORD *)PoolWithTag + 13) = *((_WORD *)a1 + 1);
    memmove(PoolWithTag + 10, a1[1], *(unsigned __int16 *)a1);
  }
  return v3;
}
