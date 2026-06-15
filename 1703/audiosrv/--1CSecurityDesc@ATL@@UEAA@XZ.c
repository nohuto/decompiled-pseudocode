/*
 * XREFs of ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x18007C854
 * Callers:
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$0 @ 0x18005B7A1 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$0.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$0 @ 0x18005B97C (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSecurityDesc::~CSecurityDesc(PSECURITY_DESCRIPTOR *this)
{
  *this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
}
