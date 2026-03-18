/*
 * XREFs of MiJoinPartition @ 0x140063F74
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 * Callees:
 *     MiReferencePartition @ 0x140063FA8 (MiReferencePartition.c)
 */

ULONG_PTR *__fastcall MiJoinPartition(ULONG_PTR **a1)
{
  ULONG_PTR *v1; // rbx

  v1 = &MiSystemPartition;
  if ( a1 )
    v1 = *a1;
  MiReferencePartition(v1, 1LL);
  return v1;
}
