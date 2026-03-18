/*
 * XREFs of MiDeletePartition @ 0x14025B0C0
 * Callers:
 *     MmCreatePartition @ 0x140184450 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x14077EC60 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x14026EF90 (MiDrainCrossPartitionUsage.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiFreePartitionId @ 0x14074D688 (MiFreePartitionId.c)
 */

void __fastcall MiDeletePartition(unsigned __int16 *P)
{
  unsigned __int16 v1; // bx

  v1 = *P;
  MiDrainCrossPartitionUsage();
  MiDeletePartitionResources(P);
  MiFreePartitionId(v1);
  ExFreePoolWithTag(P, 0);
}
