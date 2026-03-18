/*
 * XREFs of SetDesktopMetrics @ 0x1C00BAFC0
 * Callers:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C000AD54 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

__int64 SetDesktopMetrics()
{
  _DWORD *v0; // r9
  _DWORD *v1; // r9
  _DWORD *v2; // r9

  v0 = *(_DWORD **)(*(_QWORD *)(GetDispInfo() + 88) + 40LL);
  *(_DWORD *)(gpsi + 1944LL) = v0[21] - v0[19];
  *(_DWORD *)(gpsi + 2124LL) = v0[21] + 2 * (*(_DWORD *)(gpsi + 2008LL) + *(_DWORD *)(gpsi + 2248LL)) - v0[19];
  *(_DWORD *)(gpsi + 1948LL) = v0[22] - *(_DWORD *)(gpsi + 1896LL) - v0[20];
  *(_DWORD *)(gpsi + 2128LL) = v0[22] + 2 * (*(_DWORD *)(gpsi + 2012LL) + *(_DWORD *)(gpsi + 2248LL)) - v0[20];
  v1 = *(_DWORD **)(*(_QWORD *)(GetDispInfo() + 88) + 40LL);
  *(_DWORD *)(gpsi + 2332LL) = v1[25] - v1[23];
  *(_DWORD *)(gpsi + 2512LL) = v1[25] + 2 * (*(_DWORD *)(gpsi + 2008LL) + *(_DWORD *)(gpsi + 2636LL)) - v1[23];
  *(_DWORD *)(gpsi + 2336LL) = v1[26] - *(_DWORD *)(gpsi + 2284LL) - v1[24];
  *(_DWORD *)(gpsi + 2516LL) = v1[26] + 2 * (*(_DWORD *)(gpsi + 2012LL) + *(_DWORD *)(gpsi + 2636LL)) - v1[24];
  v2 = *(_DWORD **)(*(_QWORD *)(GetDispInfo() + 88) + 40LL);
  *(_DWORD *)(gpsi + 2720LL) = v2[29] - v2[27];
  *(_DWORD *)(gpsi + 2900LL) = v2[29] + 2 * (*(_DWORD *)(gpsi + 2008LL) + *(_DWORD *)(gpsi + 2248LL)) - v2[27];
  *(_DWORD *)(gpsi + 2724LL) = v2[30] - *(_DWORD *)(gpsi + 2284LL) - v2[28];
  *(_DWORD *)(gpsi + 2904LL) = v2[30] + 2 * (*(_DWORD *)(gpsi + 2012LL) + *(_DWORD *)(gpsi + 2248LL)) - v2[28];
  return UpdateDesktopThresholds();
}
