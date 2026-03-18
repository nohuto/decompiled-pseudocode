/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x14024FF04
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14040D5C8 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x14076A9EC (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
