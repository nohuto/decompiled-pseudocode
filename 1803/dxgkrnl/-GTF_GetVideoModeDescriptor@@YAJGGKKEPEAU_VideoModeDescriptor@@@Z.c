/*
 * XREFs of ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C0019530
 * Callers:
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C0018D00 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C0048BA8 (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C023959C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z @ 0x1C0019648 (-GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z.c)
 */

__int64 __fastcall GTF_GetVideoModeDescriptor(
        USHORT a1,
        USHORT a2,
        ULONG a3,
        ULONG a4,
        BOOLEAN a5,
        struct _VideoModeDescriptor *a6)
{
  __int64 v6; // r11
  int v7; // r8d
  signed int v8; // ecx
  int v9; // eax
  struct MonDescParser::_GTF_WORKSET *v11[5]; // [rsp+30h] [rbp-F8h] BYREF
  double v12; // [rsp+58h] [rbp-D0h]
  double v13; // [rsp+98h] [rbp-90h]
  double v14; // [rsp+C8h] [rbp-60h]

  if ( !a6 || !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  a6->VerticalRefreshRateNumerator = a3;
  a6->VerticalActivePixels = a2;
  a6->HorizontalActivePixels = a1;
  a6->IsInterlaced = a5;
  a6->VerticalRefreshRateDenominator = a4;
  a6->VideoStandardType = 2;
  MonDescParser::GTF_UsingVerticalRefreshFrequency_Stage1(
    (MonDescParser *)a5,
    a1,
    a2,
    a3,
    a4,
    (MonDescParser *)v11,
    v11[0]);
  v7 = 10000;
  v8 = abs32((int)(v12 * 10000.0));
  while ( 1 )
  {
    v8 %= v7;
    if ( !v8 )
      break;
    v7 %= v8;
    if ( !v7 )
      goto LABEL_11;
  }
  v8 = v7;
LABEL_11:
  *(_DWORD *)(v6 + 12) = (int)(v12 * 10000.0) / v8;
  v9 = (int)v13;
  *(_DWORD *)(v6 + 16) = (unsigned __int16)(10000 / v8);
  *(_DWORD *)v6 = v9;
  *(_WORD *)(v6 + 24) = (int)*(double *)&v11[4];
  *(_WORD *)(v6 + 26) = (int)v14;
  return 0LL;
}
