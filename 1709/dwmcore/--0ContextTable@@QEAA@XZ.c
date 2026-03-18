/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800C265C
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180001620 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_180272610) = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_180272618);
  return (ContextTable *)&Block;
}
