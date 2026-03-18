/*
 * XREFs of PfSnCheckScenario @ 0x14050E548
 * Callers:
 *     PfSnOperationProcess @ 0x14048C2D0 (PfSnOperationProcess.c)
 *     PfSnBeginAppLaunch @ 0x14050E34C (PfSnBeginAppLaunch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_1403CD520 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_1403CD950 & 1) == 0 || (dword_1403CD6B0 & 1) != 0 )
    {
      if ( dword_1403CD8A4 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_1403CD7F8 )
      {
        *a2 = v2;
      }
      else
      {
        return (unsigned int)-1073741127;
      }
    }
    else
    {
      return (unsigned int)-1073741725;
    }
  }
  else
  {
    return (unsigned int)-1073741399;
  }
  return v3;
}
