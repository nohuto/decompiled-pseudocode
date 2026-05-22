/*
 * XREFs of SetManipulationInputTarget @ 0x1800059C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAX_KIPEAI@Z @ 0x180013470 (-SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAX_KIPEAI@Z.c)
 */

__int64 __fastcall SetManipulationInputTarget(
        unsigned int a1,
        void *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  if ( (gdwMitConfig & 4) != 0 || ((1LL << gdwDeviceFamily) & 0x5DB5) == 0 )
    return MITSetManipulationInputTarget(a1);
  else
    return (int)GestureTargetingComponent::SetManipulationInputTargetStatic(a1, a2, a3, a4, a5) >= 0;
}
