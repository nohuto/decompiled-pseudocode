/*
 * XREFs of PfSnCheckScenario @ 0x140563F50
 * Callers:
 *     PfSnOperationProcess @ 0x140454168 (PfSnOperationProcess.c)
 *     PfSnBeginAppLaunch @ 0x140563DB0 (PfSnBeginAppLaunch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_14036DCA0 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_14036E0D0 & 1) == 0 || (dword_14036DE30 & 1) != 0 )
    {
      if ( dword_14036E024 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_14036DF78 )
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
