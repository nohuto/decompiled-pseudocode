/*
 * XREFs of IoInitSystem @ 0x14082FC9C
 * Callers:
 *     Phase1Initialization @ 0x1405B7F90 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x14015B924 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x1405CFD00 (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x1407A69D0 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x1407CC800 (HdlspKernelAddLogEntry.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140845AEC (IopInitializeSystemDrivers.c)
 */

char __fastcall IoInitSystem(void *a1)
{
  if ( !(unsigned __int8)IoInitSystemPreDrivers(a1) )
    return 0;
  if ( !(unsigned int)IopInitializeSystemDrivers() )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
      HdlspKernelAddLogEntry(0xBu, 0LL);
    return 0;
  }
  if ( !PnpBootOptions )
    PnpSerializeBoot();
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(0);
  IopRegistryInitializeCallbacks();
  return 1;
}
