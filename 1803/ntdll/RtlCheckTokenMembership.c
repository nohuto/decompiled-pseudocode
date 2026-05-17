/*
 * XREFs of RtlCheckTokenMembership @ 0x1800DFBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCheckTokenMembership(__int64 a1, void *a2, _BYTE *a3)
{
  return RtlCheckTokenMembershipEx(a1, a2, 0, a3);
}
