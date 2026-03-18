/*
 * XREFs of DpiGetIntegratedDisplayOrientationOverrides @ 0x1C01CE49C
 * Callers:
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C0107E34 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetIntegratedDisplayOrientationOverrides(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r11
  unsigned int *v5; // rcx
  unsigned int v6; // ecx

  *a3 = 0;
  *a2 = 0;
  v3 = -1071841279;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    v5 = *(unsigned int **)(*(_QWORD *)(v4 + 936) + 96LL);
    if ( v5 )
    {
      v6 = *v5;
      if ( (((unsigned __int8)v6 | (unsigned __int8)(v6 >> 2)) & 3) != 0 )
      {
        *a3 = (v6 >> 2) & 3;
        *a2 = **(_DWORD **)(*(_QWORD *)(v4 + 936) + 96LL) & 3;
        return 0;
      }
    }
  }
  return v3;
}
