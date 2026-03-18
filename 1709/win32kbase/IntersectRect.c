/*
 * XREFs of IntersectRect @ 0x1C005C860
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C005D840 (TransformRectBetweenCoordinateSpaces.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0061814 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C009A848 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C013D798 (-AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z.c)
 *     ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x1C013DD7C (-RemoveOverlaps@@YAXPEAUtagRECT@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRect(_DWORD *a1, int *a2, int *a3)
{
  int v4; // r10d
  int v6; // r9d
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  __int64 result; // rax

  v4 = *a3;
  if ( *a2 > *a3 )
    v4 = *a2;
  *a1 = v4;
  v6 = a3[2];
  if ( a2[2] < v6 )
    v6 = a2[2];
  a1[2] = v6;
  if ( v4 < v6 )
  {
    v7 = a2[1];
    v8 = a3[1];
    if ( v7 > v8 )
      v8 = v7;
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
