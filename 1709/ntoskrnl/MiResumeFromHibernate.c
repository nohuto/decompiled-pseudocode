/*
 * XREFs of MiResumeFromHibernate @ 0x14021872C
 * Callers:
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x14021F6A8 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
