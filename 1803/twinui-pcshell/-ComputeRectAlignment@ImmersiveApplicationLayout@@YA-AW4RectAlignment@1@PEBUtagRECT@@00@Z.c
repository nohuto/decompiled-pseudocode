/*
 * XREFs of ?ComputeRectAlignment@ImmersiveApplicationLayout@@YA?AW4RectAlignment@1@PEBUtagRECT@@00@Z @ 0x1803050E8
 * Callers:
 *     ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x1802DD1FC (-StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z.c)
 *     ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x180304D98 (-ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY.c)
 *     ?ComputeAppViewState@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAW4APPLICATION_VIEW_STATE@@@Z @ 0x180304E60 (-ComputeAppViewState@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeRectAlignment(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  char v4; // r9
  char v5; // r10
  int v6; // ecx

  result = 0LL;
  v4 = 1;
  if ( *a3 > *a1 || (v5 = 1, *a1 > *a2) )
    v5 = 0;
  v6 = a1[2];
  if ( a2[2] > v6 || v6 > a3[2] )
    v4 = 0;
  if ( v5 )
    return 2 - (unsigned int)(v4 != 0);
  if ( v4 )
    return 3LL;
  return result;
}
