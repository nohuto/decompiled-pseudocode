/*
 * XREFs of KeIntSteerGetSteeringMode @ 0x1400B3748
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x1400B3690 (KiIntSteerChooseInitialTargetProcessors.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1405ED194 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIntSteerGetSteeringMode(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  unsigned int v5; // edx
  __int64 v7; // rcx

  v5 = 0;
  if ( KiIntSteerEnabled && a3 && !*(_WORD *)(a5 + 8) )
  {
    v7 = 0LL;
    if ( LOWORD(KeActiveProcessors[0]) )
      v7 = qword_140401408[0];
    if ( *(_QWORD *)a5 == v7 )
    {
      if ( (KiInterruptControllerInfo & 1) != 0 && !a4 )
        return 1;
      if ( (((unsigned int)KiInterruptControllerInfo >> 1) & 1) != 0 )
      {
        if ( a4 == 1 )
          return 1;
      }
      else if ( a4 == 1 && (KiInterruptControllerInfo & 1) != 0 )
      {
        return 2;
      }
    }
  }
  return v5;
}
