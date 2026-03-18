/*
 * XREFs of MiInitializeDecayPfns @ 0x140813728
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  InitializeSListHead(&stru_14036CBF0);
  v0 = 48 * qword_14036CBE0 - 0x57FFFFE8030LL;
  v1 = 2048LL;
  *(_QWORD *)(v0 + 40) = *(_QWORD *)(v0 + 40) & 0xFFFFFFF000000000uLL | 1;
  do
  {
    result = RtlpInterlockedPushEntrySList(&stru_14036CBF0, (PSLIST_ENTRY)v0);
    v0 -= 48LL;
    --v1;
  }
  while ( v1 );
  return result;
}
