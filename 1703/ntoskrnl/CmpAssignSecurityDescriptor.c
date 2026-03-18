/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x1405D11F4
 * Callers:
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x14006ECBC (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, __int64 a2, __int64 a3, void *a4, char a5)
{
  return CmpGetSecurityDescriptorNode(a1, a2, a3, a4, a5, (unsigned int *)(a3 + 44));
}
