/*
 * XREFs of ExpPartitionCreateThreadIfNecessary @ 0x1400C40C4
 * Callers:
 *     ExpTryQueueWorkItem @ 0x14008F7AC (ExpTryQueueWorkItem.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExpNewThreadNecessary @ 0x140128240 (ExpNewThreadNecessary.c)
 */

LONG __fastcall ExpPartitionCreateThreadIfNecessary(__int64 a1, __int64 a2, __int64 a3)
{
  LONG result; // eax
  __int64 v4; // r9
  __int64 v5; // r10

  result = ExpNewThreadNecessary(a3, *(unsigned int *)(a3 + 720), a3, a2);
  if ( (_BYTE)result )
    return KeSetEvent(
             (PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL * *(unsigned __int16 *)(v4 + 146)) + 16LL),
             0,
             0);
  return result;
}
