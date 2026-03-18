/*
 * XREFs of IntersectRect @ 0x1C00285C8
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0026E90 (xxxEnumDisplayMonitors.c)
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0070698 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0072150 (TransformRectBetweenCoordinateSpaces.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00917C4 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     AddNextContiguousRectangle @ 0x1C013E33C (AddNextContiguousRectangle.c)
 *     RemoveOverlaps @ 0x1C013E920 (RemoveOverlaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRect(int *a1, int *a2, int *a3)
{
  int *v3; // r9
  int v6; // r10d
  int v7; // r9d
  int v8; // edx
  int v9; // ecx
  __int64 result; // rax

  v3 = a3;
  if ( *a2 > *a3 )
    v3 = a2;
  v6 = *v3;
  *a1 = *v3;
  v7 = a3[2];
  if ( a2[2] < v7 )
    v7 = a2[2];
  a1[2] = v7;
  if ( v6 < v7 )
  {
    v8 = a3[1];
    if ( a2[1] > v8 )
      v8 = a2[1];
    a1[1] = v8;
    v9 = a3[3];
    if ( a2[3] < v9 )
      v9 = a2[3];
    a1[3] = v9;
    if ( v8 < v9 )
      return 1LL;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
