/*
 * XREFs of SeAuditHeaderRequired @ 0x1400FE500
 * Callers:
 *     ObpAllocateObject @ 0x1405A1430 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_1403A5700 || byte_1403A5701 || byte_1403A5718 || byte_1403A5719);
}
