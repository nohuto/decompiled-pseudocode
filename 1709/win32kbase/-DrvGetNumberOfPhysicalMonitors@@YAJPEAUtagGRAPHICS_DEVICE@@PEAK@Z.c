/*
 * XREFs of ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C00A1DAC
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00A09F0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00A1D30 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetNumberOfPhysicalMonitors(struct tagGRAPHICS_DEVICE *a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  _DWORD *v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // eax

  v2 = 0;
  if ( !*((_DWORD *)a1 + 56) )
    return 3223193061LL;
  v4 = (_DWORD *)*((_QWORD *)a1 + 29);
  v5 = *((unsigned int *)a1 + 56);
  do
  {
    v6 = v2 + 1;
    if ( (*v4 & 1) == 0 )
      v6 = v2;
    v4 += 5;
    v2 = v6;
    --v5;
  }
  while ( v5 );
  if ( !v6 )
    return 3223193061LL;
  *a2 = v6;
  return 0LL;
}
