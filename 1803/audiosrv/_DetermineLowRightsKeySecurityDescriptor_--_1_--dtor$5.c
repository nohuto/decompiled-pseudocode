/*
 * XREFs of _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$5 @ 0x180067126
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DetermineLowRightsKeySecurityDescriptor_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtrArray<ATL::CDacl::CAccessAce>::~CAutoPtrArray<ATL::CDacl::CAccessAce>(a2 + 160);
}
