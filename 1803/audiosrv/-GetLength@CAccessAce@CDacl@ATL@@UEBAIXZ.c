/*
 * XREFs of ?GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ @ 0x18000ADE0
 * Callers:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18000AB48 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18000AE00 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::CAccessAce::GetLength(ATL::CDacl::CAccessAce *this)
{
  return GetLengthSid((char *)this + 16) + 8;
}
