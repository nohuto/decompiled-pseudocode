/*
 * XREFs of ??1AvoidEndpointPolicyRule@@UEAA@XZ @ 0x1800FB9F8
 * Callers:
 *     ??_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z @ 0x1800FBAF8 (--_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall AvoidEndpointPolicyRule::~AvoidEndpointPolicyRule(AvoidEndpointPolicyRule *this)
{
  *(_QWORD *)this = &AvoidEndpointPolicyRule::`vftable'{for `IPolicyRule'};
  *((_QWORD *)this + 1) = &AvoidEndpointPolicyRule::`vftable'{for `CUnknown'};
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 4) - 24LL));
  PolicyRule::~PolicyRule(this);
}
