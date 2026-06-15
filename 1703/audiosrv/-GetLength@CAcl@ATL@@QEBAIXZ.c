/*
 * XREFs of ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x180024518
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800268BC (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180024578 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180098C8C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

__int64 __fastcall ATL::CAcl::GetLength(ATL::CAcl *this)
{
  struct _ACL *PACL; // rax
  _BYTE pAclInformation[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+24h] [rbp-24h]

  PACL = (struct _ACL *)ATL::CAcl::GetPACL(this);
  if ( *((_BYTE *)this + 16) )
    return 0LL;
  if ( !GetAclInformation(PACL, pAclInformation, 0xCu, AclSizeInformation) )
    ATL::AtlThrowLastWin32();
  return v5;
}
