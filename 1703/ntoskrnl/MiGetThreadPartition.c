/*
 * XREFs of MiGetThreadPartition @ 0x14012BA50
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     MiResolveMemoryEvent @ 0x140560720 (MiResolveMemoryEvent.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1452LL));
}
