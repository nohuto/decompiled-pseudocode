/*
 * XREFs of ??_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z @ 0x1800FBAF8
 * Callers:
 *     ??_EAvoidEndpointPolicyRule@@W7EAAPEAXI@Z @ 0x180066130 (--_EAvoidEndpointPolicyRule@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AvoidEndpointPolicyRule@@UEAA@XZ @ 0x1800FB9F8 (--1AvoidEndpointPolicyRule@@UEAA@XZ.c)
 */

AvoidEndpointPolicyRule *__fastcall AvoidEndpointPolicyRule::`vector deleting destructor'(
        AvoidEndpointPolicyRule *this,
        char a2)
{
  AvoidEndpointPolicyRule::~AvoidEndpointPolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
