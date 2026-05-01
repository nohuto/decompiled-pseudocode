/*
 * XREFs of ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x1802F131C
 * Callers:
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1802F2880 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x1802F6070 (-GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x1802F73C4 (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x1802EE63C (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 */

int *__fastcall MapRelativeRect(int *a1, int *a2, _OWORD *a3, int *a4)
{
  int v6; // eax
  int v7; // r8d
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int *result; // rax
  int v12[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a1 = *a3;
  v6 = *a2;
  v7 = -a2[1];
  a1[3] -= a2[1];
  v8 = -v6;
  *a1 += v8;
  a1[2] += v8;
  a1[1] += v7;
  *(_OWORD *)a1 = *(_OWORD *)Geometry::CRect::MulDiv(v12, a1, a4[3] - a4[1], a2[3] - a2[1]);
  v9 = *a4;
  v10 = a4[1];
  *a1 += *a4;
  a1[2] += v9;
  result = a1;
  a1[3] += v10;
  a1[1] += v10;
  return result;
}
