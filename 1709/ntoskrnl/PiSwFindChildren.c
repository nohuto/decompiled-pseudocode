/*
 * XREFs of PiSwFindChildren @ 0x140553A24
 * Callers:
 *     PipEnumerateCompleted @ 0x140553474 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x140553AF8 (PiSwProcessParentStartIrp.c)
 *     PiSwStopDestroy @ 0x14055E5A8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x14055E648 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140553A48 (PiSwFindBusRelations.c)
 */

__int64 PiSwFindChildren()
{
  __int64 BusRelations; // rcx
  __int64 result; // rax

  BusRelations = PiSwFindBusRelations();
  result = 0LL;
  if ( BusRelations )
    return BusRelations + 16;
  return result;
}
