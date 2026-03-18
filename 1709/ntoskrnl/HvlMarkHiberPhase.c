/*
 * XREFs of HvlMarkHiberPhase @ 0x1401EE5BC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140433C3C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     HvlpMarkHvlPagesForHibernation @ 0x1401EEAD8 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401EEB70 (HvlpMarkHypervisorPagesForHibernation.c)
 */

__int64 HvlMarkHiberPhase()
{
  __int64 result; // rax

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    if ( !VslVsmEnabled )
      HvlpMarkHypervisorPagesForHibernation();
    return HvlpMarkHvlPagesForHibernation();
  }
  return result;
}
