/*
 * XREFs of PfSnCheckScenario @ 0x14057FA14
 * Callers:
 *     PfSnOperationProcess @ 0x140447278 (PfSnOperationProcess.c)
 *     PfSnBeginAppLaunch @ 0x14057F874 (PfSnBeginAppLaunch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_14038D100 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140389E10 & 1) == 0 || (dword_14038D290 & 1) != 0 )
    {
      if ( dword_140389D64 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_14038D3D8 )
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
