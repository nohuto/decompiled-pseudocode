/*
 * XREFs of HvlMarkHiberPhase @ 0x14022BE58
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140475428 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     HvlpMarkHvlPagesForHibernation @ 0x14022C378 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14022C410 (HvlpMarkHypervisorPagesForHibernation.c)
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
