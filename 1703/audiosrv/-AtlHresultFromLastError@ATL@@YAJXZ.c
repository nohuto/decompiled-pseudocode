/*
 * XREFs of ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180098C70
 * Callers:
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x180023918 (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x180023974 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180024578 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800267C8 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800268BC (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800302A0 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180030454 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

signed int ATL::AtlHresultFromLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
