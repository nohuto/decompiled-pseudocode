/*
 * XREFs of SeAuditHeaderRequired @ 0x140081700
 * Callers:
 *     ObpAllocateObject @ 0x1404AA4C0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_1403620E0 || byte_1403620E1 || byte_1403620F8 || byte_1403620F9);
}
