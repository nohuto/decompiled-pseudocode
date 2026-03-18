/*
 * XREFs of ?FindByValue@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C000A7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::FindByValue(__int64 this, __int64 a2)
{
  return (struct DMMVIDPNPRESENTPATH *)Set<DMMVIDPNPRESENTPATH>::FindByValue(this, a2);
}
