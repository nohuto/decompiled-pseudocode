/*
 * XREFs of ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C000E618
 * Callers:
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C000EA74 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C00463C0 (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C01E7CD8 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z @ 0x1C000E2D0 (-GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z.c)
 */

__int64 __fastcall GTF_GetVideoModeDescriptor(
        USHORT a1,
        USHORT a2,
        ULONG a3,
        ULONG a4,
        BOOLEAN a5,
        struct _VideoModeDescriptor *a6)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // ecx
  ULONG v9; // eax
  _BYTE v11[32]; // [rsp+30h] [rbp-F8h] BYREF
  double v12; // [rsp+50h] [rbp-D8h]
  double v13; // [rsp+58h] [rbp-D0h]
  double v14; // [rsp+98h] [rbp-90h]
  double v15; // [rsp+C8h] [rbp-60h]

  if ( !a6 || !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  a6->VerticalActivePixels = a2;
  a6->HorizontalActivePixels = a1;
  a6->IsInterlaced = a5;
  a6->VerticalRefreshRateNumerator = a3;
  a6->VerticalRefreshRateDenominator = a4;
  a6->VideoStandardType = 2;
  MonDescParser::GTF_UsingVerticalRefreshFrequency_Stage1(
    (MonDescParser *)a5,
    (struct MonDescParser::_GTF_WORKSET *)a1,
    a2,
    a3,
    a4,
    (MonDescParser *)v11);
  v6 = 10000;
  v7 = (int)(v13 * 10000.0);
  v8 = v7;
  if ( v7 < 0 )
    v8 = -v7;
  while ( 1 )
  {
    v8 %= v6;
    if ( !v8 )
      break;
    v6 %= v8;
    if ( !v6 )
      goto LABEL_12;
  }
  v8 = v6;
LABEL_12:
  a6->HorizontalRefreshRateNumerator = v7 / v8;
  v9 = (int)v14;
  a6->HorizontalRefreshRateDenominator = (unsigned __int16)(10000 / v8);
  a6->PixelClockRate = v9;
  a6->HorizontalBlankingPixels = (int)v12;
  a6->VerticalBlankingPixels = (int)v15;
  return 0LL;
}
