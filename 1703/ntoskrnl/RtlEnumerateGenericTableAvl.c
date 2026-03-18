/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x14004C720
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x1405BD940 (PiDmObjectManagerPopulate.c)
 *     VfAvlEnumerateNodes @ 0x14077BF5C (VfAvlEnumerateNodes.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
