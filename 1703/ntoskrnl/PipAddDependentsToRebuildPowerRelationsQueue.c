/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405BF154
 * Callers:
 *     IoResolveDependency @ 0x14015F160 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14044C29C (PnpDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140692840 (IoDuplicateDependency.c)
 * Callees:
 *     PiGetDependentList @ 0x1404D9EF4 (PiGetDependentList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1404DA024 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiEnumerateDependentListEntry @ 0x140692AAC (PiEnumerateDependentListEntry.c)
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
