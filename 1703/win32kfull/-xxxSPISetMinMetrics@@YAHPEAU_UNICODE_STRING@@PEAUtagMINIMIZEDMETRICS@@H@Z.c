/*
 * XREFs of ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C0009E78
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C0009E34 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0009EC8 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01B4F2C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 */

__int64 __fastcall xxxSPISetMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2, int a3)
{
  unsigned int v3; // ebx
  BOOL v6; // eax
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  v3 = 0;
  v6 = a3 == 0;
  if ( a3 )
  {
    v8 = SetWindowMetricInt(a1, 0x92u, *((_DWORD *)a2 + 1));
    v9 = SetWindowMetricInt(a1, 0x93u, *((_DWORD *)a2 + 2)) & v8;
    v10 = SetWindowMetricInt(a1, 0x94u, *((_DWORD *)a2 + 3)) & v9;
    v3 = SetWindowMetricInt(a1, 0x96u, *((_DWORD *)a2 + 4)) & v10;
    v6 = v3;
  }
  if ( v6 )
    xxxSetAndDrawMinMetrics(a1, a2);
  return v3;
}
