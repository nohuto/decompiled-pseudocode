/*
 * XREFs of ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x180024940
 * Callers:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180024578 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800268BC (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::GetAceCount(ATL::CDacl *this)
{
  return *((unsigned int *)this + 8);
}
