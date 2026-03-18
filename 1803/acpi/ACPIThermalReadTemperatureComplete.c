/*
 * XREFs of ACPIThermalReadTemperatureComplete @ 0x1C003D690
 * Callers:
 *     <none>
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C003DF1C (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalReadTemperatureComplete(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rbx
  char v6; // di
  __int64 v7; // rdx

  v3 = *(_DWORD *)(a2 + 48);
  v5 = *(_QWORD *)(a3 + 200);
  if ( v3 == -1073741536 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( v3 >= 0 )
    {
      v7 = *(unsigned int *)(v5 + 224);
      *(_BYTE *)(v5 + 272) = 0;
      ACPIThermalUpdateTemperature(a3, v7);
    }
    else
    {
      *(_BYTE *)(v5 + 272) = 1;
    }
  }
  KeSetEvent((PRKEVENT)(v5 + 248), 0, 0);
  if ( v6 )
    ACPIThermalLoopEx(a3, 536871424, 0);
  return 3221225494LL;
}
