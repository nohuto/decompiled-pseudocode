/*
 * XREFs of HvlMarkHiberPhase @ 0x14013E08C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14040D5C8 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401E9A90 (HvlpMarkHypervisorPagesForHibernation.c)
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
