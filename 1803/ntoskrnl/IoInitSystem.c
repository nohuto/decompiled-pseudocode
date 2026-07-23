/*
 * XREFs of IoInitSystem @ 0x1408A6040
 * Callers:
 *     Phase1Initialization @ 0x140627590 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x1401863D4 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x14063ACEC (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x140813B50 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x1408397F8 (HdlspKernelAddLogEntry.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 */

char __fastcall IoInitSystem(_QWORD *a1)
{
  if ( !IoInitSystemPreDrivers(a1) )
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
