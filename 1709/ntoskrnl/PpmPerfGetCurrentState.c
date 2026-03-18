/*
 * XREFs of PpmPerfGetCurrentState @ 0x140129A10
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x14000B3F4 (PoGetPerfStateAndParkingInfo.c)
 *     PpmTracePerfIdleRundown @ 0x140248B80 (PpmTracePerfIdleRundown.c)
 *     PopProcessorInformation @ 0x14058ECEC (PopProcessorInformation.c)
 *     PpmWmiGetAllData @ 0x140707568 (PpmWmiGetAllData.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140003620 (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PpmPerfGetCurrentState(__int64 a1, _DWORD *a2, unsigned int *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // rbx
  _DWORD *v8; // r10
  __int64 result; // rax
  unsigned int v11; // r9d
  unsigned int v12; // ecx

  v6 = *(_DWORD **)(a1 + 24176);
  v8 = *(_DWORD **)(a1 + 24184);
  if ( v6 && v8 )
  {
    result = (unsigned int)v8[18];
    v11 = v6[92];
    if ( (unsigned int)result < v11 )
      v11 = v8[18];
    if ( a2 )
    {
      result = (unsigned int)v8[19];
      *a2 = result;
    }
    if ( a3 )
    {
      v12 = v6[92] * v6[79];
      result = 1374389535 * v12;
      *a3 = v12 / 0x64;
    }
    if ( a5 )
    {
      result = (unsigned int)(v11 < v6[81]) + 1;
      *a5 = result;
    }
    if ( a6 )
    {
      result = (unsigned int)v8[8];
      *a6 = result;
      if ( v8[7] < 0x64u )
      {
        result = (unsigned int)result | 4;
        *a6 = result;
      }
    }
  }
  else
  {
    if ( a2 )
      *a2 = *(_DWORD *)(a1 + 68);
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 68);
    if ( a5 )
      *a5 = 0;
    result = (__int64)a6;
    if ( a6 )
      *a6 = 0;
  }
  if ( a4 )
  {
    result = PpmPerfGetCurrentFrequency(a1, 1);
    *a4 = result;
  }
  return result;
}
