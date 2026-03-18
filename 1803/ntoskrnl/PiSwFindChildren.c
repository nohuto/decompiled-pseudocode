/*
 * XREFs of PiSwFindChildren @ 0x1405CDC24
 * Callers:
 *     PiSwStopDestroy @ 0x1405C8DA8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405C8E48 (PiSwProcessParentRemoveIrp.c)
 *     PiSwProcessParentStartIrp @ 0x1405CA9E0 (PiSwProcessParentStartIrp.c)
 *     PipEnumerateCompleted @ 0x1405D1930 (PipEnumerateCompleted.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1405CDC48 (PiSwFindBusRelations.c)
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
