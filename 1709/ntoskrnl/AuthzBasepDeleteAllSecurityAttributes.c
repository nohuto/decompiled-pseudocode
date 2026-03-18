/*
 * XREFs of AuthzBasepDeleteAllSecurityAttributes @ 0x14028D8E0
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14001A0A0 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x14000A428 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x14001A7C4 (AuthzBasepAddSecurityAttributeToLists.c)
 */

__int64 __fastcall AuthzBasepDeleteAllSecurityAttributes(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 v4; // rdx
  __int64 result; // rax

  v1 = a1 + 8;
  for ( i = *(_QWORD *)(a1 + 8); i != v1; i = *(_QWORD *)i )
  {
    *(_DWORD *)(i + 56) |= 4u;
    AuthzBasepAddSecurityAttributeToLists(a1, i, 0, 1);
    result = AuthzBasepDeleteAllSecurityAttributeValues(i, v4);
  }
  return result;
}
