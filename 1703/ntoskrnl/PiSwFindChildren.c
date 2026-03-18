/*
 * XREFs of PiSwFindChildren @ 0x140450FE0
 * Callers:
 *     PiSwProcessParentStartIrp @ 0x140450F60 (PiSwProcessParentStartIrp.c)
 *     PipEnumerateCompleted @ 0x1404DFDF8 (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x140570B8C (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140570C2C (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140451004 (PiSwFindBusRelations.c)
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
