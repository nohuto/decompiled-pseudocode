/*
 * XREFs of ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x1800335E0
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$0 @ 0x180038209 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSecurityDesc::~CSecurityDesc(ATL::CSecurityDesc *this)
{
  *(_QWORD *)this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
}
