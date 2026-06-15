/*
 * XREFs of ?OnDeviceStateChanged@AvoidEndpointPolicyRule@@UEAAJPEBGKPEAW4RuleAction@@@Z @ 0x1800FC680
 * Callers:
 *     <none>
 * Callees:
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x1800A88FC (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

__int64 __fastcall AvoidEndpointPolicyRule::OnDeviceStateChanged(
        unsigned __int16 **this,
        const unsigned __int16 *a2,
        int a3,
        enum RuleAction *a4)
{
  int v4; // ebx

  v4 = 1;
  if ( a3 != 1
    && !(unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                        this + 4,
                        (__int64)a2) )
  {
    v4 = 2;
  }
  *(_DWORD *)a4 = v4;
  return 0LL;
}
