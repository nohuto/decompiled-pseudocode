/*
 * XREFs of ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C00CFE1C
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00D3C00 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00D5240 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetNumberOfPhysicalMonitors(struct tagGRAPHICS_DEVICE *a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  _DWORD *v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // eax

  v2 = *((_DWORD *)a1 + 54);
  v3 = 0;
  if ( !v2 )
    return 3223193061LL;
  v4 = (_DWORD *)*((_QWORD *)a1 + 28);
  v5 = v2;
  do
  {
    v6 = v3 + 1;
    if ( (*v4 & 1) == 0 )
      v6 = v3;
    v4 += 8;
    v3 = v6;
    --v5;
  }
  while ( v5 );
  if ( !v6 )
    return 3223193061LL;
  *a2 = v6;
  return 0LL;
}
