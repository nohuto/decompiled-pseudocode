/*
 * XREFs of ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1800D4910
 * Callers:
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800D7E58 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ??$CortanaExperienceManager_SetPositioningAnchorRect@AEAMAEAMAEAMAEAM@CortanaProactiveTelemetry@@SAXAEAM000@Z @ 0x1800DB658 (--$CortanaExperienceManager_SetPositioningAnchorRect@AEAMAEAMAEAMAEAM@CortanaProactiveTelemetry@.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnTraySearchItemChanged(__int64 a1, __int64 a2, __int64 a3)
{
  float v4; // xmm1_4
  _OWORD *v5; // rcx

  v4 = *(float *)(a2 + 12) + *(float *)(a2 + 4);
  if ( (float)(*(float *)(a3 + 12) + *(float *)(a3 + 4)) > v4 )
    *(float *)(a3 + 4) = v4 - *(float *)(a3 + 12);
  v5 = (_OWORD *)(a1 + 156);
  *v5 = *(_OWORD *)a3;
  CortanaProactiveTelemetry::CortanaExperienceManager_SetPositioningAnchorRect<float &,float &,float &,float &>(
    v5,
    a1 + 160,
    a1 + 164,
    a1 + 168);
  return 0LL;
}
