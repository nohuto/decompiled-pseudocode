/*
 * XREFs of PopNetIsDisconnectStandbyActive @ 0x140707AEC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 *     PopS0LowPowerIdleInfo @ 0x1406F7A40 (PopS0LowPowerIdleInfo.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopNetIsDisconnectStandbyActive(_DWORD *a1)
{
  if ( a1 )
  {
    if ( PopNetStandbyReason )
    {
      switch ( PopNetStandbyReason )
      {
        case 1:
          *a1 = 2;
          break;
        case 2:
          *a1 = 3;
          break;
        case 3:
          *a1 = 4;
          break;
        case 6:
          *a1 = 1;
          break;
        case 7:
          *a1 = 5;
          break;
      }
    }
    else
    {
      *a1 = 0;
    }
  }
  return PopNetStandbyState == 2;
}
