/*
 * XREFs of ?AceType@CAccessObjectAce@CDacl@ATL@@UEBAEXZ @ 0x180033540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ATL::CDacl::CAccessObjectAce::AceType(ATL::CDacl::CAccessObjectAce *this)
{
  return 6 - (*((_BYTE *)this + 144) != 0);
}
