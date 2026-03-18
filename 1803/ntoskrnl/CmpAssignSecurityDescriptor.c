/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x140651774
 * Callers:
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x140007750 (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, __int64 a2, __int64 a3, void *a4, char a5)
{
  return CmpGetSecurityDescriptorNode(a1, a2, a3, a4, a5, (unsigned int *)(a3 + 44));
}
