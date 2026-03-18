/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x140276704
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140433C3C (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x1407AC6BC (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
