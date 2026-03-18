/*
 * XREFs of MiGetThreadPartition @ 0x140073B6C
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x14051C0E0 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1454LL));
}
