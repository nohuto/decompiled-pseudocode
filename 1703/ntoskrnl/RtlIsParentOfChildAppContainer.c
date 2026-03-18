/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x14041E978
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x14041F820 (SeIsParentOfChildAppContainer.c)
 *     SepCheckCreateLowBox @ 0x14045B3C8 (SepCheckCreateLowBox.c)
 *     SepSetTokenCapabilities @ 0x14046FF44 (SepSetTokenCapabilities.c)
 *     SeTokenCanImpersonate @ 0x14047EAA0 (SeTokenCanImpersonate.c)
 *     SepSetTokenPackage @ 0x1404F1A70 (SepSetTokenPackage.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1404A4820 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  int v4; // [rsp+40h] [rbp+18h]

  if ( (int)RtlGetAppContainerSidType(Sid) >= 0 && v4 == 2 )
    RtlGetAppContainerSidType(a2);
  return 0;
}
