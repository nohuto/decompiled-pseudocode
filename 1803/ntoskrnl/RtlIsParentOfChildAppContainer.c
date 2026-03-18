/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x140540D98
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x14048B860 (SeIsParentOfChildAppContainer.c)
 *     SepSetTokenPackage @ 0x1404D5088 (SepSetTokenPackage.c)
 *     SepCheckCreateLowBox @ 0x14053F314 (SepCheckCreateLowBox.c)
 *     SepSetTokenCapabilities @ 0x140543800 (SepSetTokenCapabilities.c)
 *     SeTokenCanImpersonate @ 0x140599E60 (SeTokenCanImpersonate.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14005C820 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140540E30 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  int v4; // [rsp+40h] [rbp+18h]

  if ( (int)RtlGetAppContainerSidType(Sid) >= 0 && v4 == 2 )
    RtlGetAppContainerSidType(a2);
  return 0;
}
