/*
 * XREFs of MiGetThreadPartition @ 0x1400CFA28
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x14050A060 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1452LL));
}
