/*
 * XREFs of SeAuditHeaderRequired @ 0x14008D440
 * Callers:
 *     ObpAllocateObject @ 0x140506B40 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140348640 || byte_140348641 || byte_140348658 || byte_140348659);
}
