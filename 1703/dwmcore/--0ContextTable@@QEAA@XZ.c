/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800B0DE4
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180001490 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_18023E9B0) = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_18023E9B8);
  return (ContextTable *)&Block;
}
