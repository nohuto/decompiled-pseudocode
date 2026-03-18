/*
 * XREFs of ?HandleMessage@DwmDiagnosticsControlMessage_0@@SAXPEBU1@@Z @ 0x1801C8C04
 * Callers:
 *     DispatchDwmDiagnosticsControlMessage @ 0x1801C8B80 (DispatchDwmDiagnosticsControlMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall DwmDiagnosticsControlMessage_0::HandleMessage(const struct DwmDiagnosticsControlMessage_0 *a1)
{
  __int64 v1; // r8
  int *v2; // r9

  v1 = *((int *)a1 + 7);
  if ( *((unsigned int *)a1 + 4) >= (unsigned __int64)(4LL * ((int)v1 - 1) + 36) && v1 > 0 )
  {
    v2 = (int *)((char *)a1 + 32);
    do
    {
      if ( (*v2 & 0x7FFFFFFF) != 1 )
      {
        switch ( *v2 & 0x7FFFFFFF )
        {
          case 2:
            g_fDirtyRegion_ShowDirtyRegions = *v2 >= 0;
            break;
          case 3:
            g_fUseDebugClearColorIfNoClear = *v2 >= 0;
            break;
          case 4:
            g_fLighting_ShowLightingHeatmap = *v2 >= 0;
            break;
          case 5:
            g_fTelemetry_FramesReportFast = *v2 >= 0;
            break;
          case 6:
            g_bUseDirtyRegion = *v2 < 0;
            break;
          case 7:
            g_bUseOcclusion = *v2 < 0;
            break;
          case 8:
            g_fForceDeviceLost = *v2 >= 0;
            break;
        }
      }
      ++v2;
      --v1;
    }
    while ( v1 );
  }
}
