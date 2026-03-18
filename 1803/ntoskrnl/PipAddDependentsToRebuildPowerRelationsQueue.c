/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x14063B97C
 * Callers:
 *     IoResolveDependency @ 0x14017D9C0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x140578104 (PnpDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140723570 (IoDuplicateDependency.c)
 * Callees:
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1405CAB1C (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiGetDependentList @ 0x1405CC0AC (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x1407237C8 (PiEnumerateDependentListEntry.c)
 */

__int64 *__fastcall PipAddDependentsToRebuildPowerRelationsQueue(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = PiGetDependentList(a1);
  v2 = result;
  v3 = (__int64 *)*result;
  while ( v3 != v2 )
  {
    result = (__int64 *)PiEnumerateDependentListEntry(v3, &v4, 0LL);
    v3 = (__int64 *)*v3;
    if ( v4 )
      result = PipAddtoRebuildPowerRelationsQueue(v4);
  }
  return result;
}
