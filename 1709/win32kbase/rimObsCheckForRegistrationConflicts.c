/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x1C0114250
 * Callers:
 *     rimObsAddInputObserver @ 0x1C0113DE8 (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C0114AF0 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     rimObsCheckForExistingObserverRegistration @ 0x1C011410C (rimObsCheckForExistingObserverRegistration.c)
 */

__int64 __fastcall rimObsCheckForRegistrationConflicts(char a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a1 )
  {
    return (unsigned int)rimObsCheckForExistingObserverRegistration(0, a2, a3, a4) != 0 ? 0xC0000001 : 0;
  }
  else if ( (unsigned int)rimObsCheckForExistingObserverRegistration(1, a2, a3, a4) )
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
