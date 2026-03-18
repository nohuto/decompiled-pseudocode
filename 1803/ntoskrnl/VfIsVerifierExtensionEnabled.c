/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x1402A9828
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140475428 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x14081982C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
