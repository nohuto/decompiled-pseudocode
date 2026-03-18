/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800CA340
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180002A40 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_1802D68A0) = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_1802D68A8);
  return (ContextTable *)&Block;
}
