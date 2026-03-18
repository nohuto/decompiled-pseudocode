/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1404485C8
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x14044DA80 (SeIsParentOfChildAppContainer.c)
 *     SepSetTokenCapabilities @ 0x1404888F8 (SepSetTokenCapabilities.c)
 *     SeTokenCanImpersonate @ 0x1404CEBB0 (SeTokenCanImpersonate.c)
 *     SepSetTokenPackage @ 0x1405646C8 (SepSetTokenPackage.c)
 *     SepCheckCreateLowBox @ 0x14059942C (SepCheckCreateLowBox.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140549210 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  int v4; // [rsp+40h] [rbp+18h]

  if ( (int)RtlGetAppContainerSidType(Sid) >= 0 && v4 == 2 )
    RtlGetAppContainerSidType(a2);
  return 0;
}
