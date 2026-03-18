/*
 * XREFs of ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C0010968
 * Callers:
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C00103DC (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C0037938 (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C0202624 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z @ 0x1C0010B48 (-GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z.c)
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
  signed int v7; // ecx
  ULONG v8; // eax
  struct MonDescParser::_GTF_WORKSET *v10[5]; // [rsp+30h] [rbp-F8h] BYREF
  double v11; // [rsp+58h] [rbp-D0h]
  double v12; // [rsp+98h] [rbp-90h]
  double v13; // [rsp+C8h] [rbp-60h]

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
    a1,
    a2,
    a3,
    a4,
    (MonDescParser *)v10,
    v10[0]);
  v6 = 10000;
  v7 = abs32((int)(v11 * 10000.0));
  while ( 1 )
  {
    v7 %= v6;
    if ( !v7 )
      break;
    v6 %= v7;
    if ( !v6 )
      goto LABEL_11;
  }
  v7 = v6;
LABEL_11:
  a6->HorizontalRefreshRateNumerator = (int)(v11 * 10000.0) / v7;
  v8 = (int)v12;
  a6->HorizontalRefreshRateDenominator = (unsigned __int16)(10000 / v7);
  a6->PixelClockRate = v8;
  a6->HorizontalBlankingPixels = (int)*(double *)&v10[4];
  a6->VerticalBlankingPixels = (int)v13;
  return 0LL;
}
