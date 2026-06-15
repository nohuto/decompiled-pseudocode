/*
 * XREFs of ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x18000AF10
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18000A42C (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18000AB48 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::GetAceCount(ATL::CDacl *this)
{
  return *((unsigned int *)this + 8);
}
