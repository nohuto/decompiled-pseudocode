/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00122B8
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00121C0 (McGenControlCallbackV2.c)
 * Callees:
 *     Template_qxq @ 0x1C0035E88 (Template_qxq.c)
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C0195428 (-DxgkDisableStablePowerState@@YAXXZ.c)
 *     ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C0195444 (-DxgkEnableClockCalibration@@YAXE@Z.c)
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C0195468 (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 *     ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C019548C (-DxgkEnableStablePowerState@@YAXXZ.c)
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C01954A8 (-DxgkReportGlobalState@@YAXXZ.c)
 *     DpiControlEtwLogging @ 0x1C01C2370 (DpiControlEtwLogging.c)
 */

void __fastcall DxgkEtwEnableCallback(int a1, char a2, int a3, int a4)
{
  __int64 v5; // rcx
  bool v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int8 v9; // cl

  if ( a1 == 2 && bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qxq(2, a2, a3, a4, qword_1C006E790, a2);
    DxgkReportGlobalState();
    goto LABEL_36;
  }
  v5 = qword_1C006E790;
  if ( qword_1C006E790 == g_OldAnyKeywords )
    goto LABEL_14;
  v6 = (qword_1C006E790 & 0x1000) != 0 && (qword_1C006E790 & 0x2000) == 0;
  if ( (g_OldAnyKeywords & 0x1000) == 0 && (qword_1C006E790 & 0x1000) != 0 && v6 )
  {
    DxgkEnableStablePowerState();
LABEL_28:
    v5 = qword_1C006E790;
    goto LABEL_8;
  }
  if ( (g_OldAnyKeywords & 0x1000) != 0 && (qword_1C006E790 & 0x1000) == 0 )
  {
    DxgkDisableStablePowerState();
    goto LABEL_28;
  }
LABEL_8:
  v7 = v5 & 0x3000;
  v8 = 1024LL;
  if ( (g_OldAnyKeywords & 0x400) == 0 && (v5 & 0x400) != 0 )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    if ( (g_OldAnyKeywords & 0x400) == 0 || (v5 & 0x400) != 0 )
      goto LABEL_11;
    v5 = 0LL;
  }
  LOBYTE(v8) = a2;
  DpiControlEtwLogging(v5, v7, v8);
  v5 = qword_1C006E790;
LABEL_11:
  if ( (g_OldAnyKeywords & 0x4000) == 0 && (v5 & 0x4000) != 0 )
  {
    DxgkEnableFormattingBuffer(1);
    v9 = 1;
LABEL_35:
    DxgkEnableClockCalibration(v9);
LABEL_36:
    v5 = qword_1C006E790;
    goto LABEL_14;
  }
  if ( (g_OldAnyKeywords & 0x4000) != 0 && (v5 & 0x4000) == 0 )
  {
    DxgkEnableFormattingBuffer(0);
    v9 = 0;
    goto LABEL_35;
  }
LABEL_14:
  if ( (v5 & 0x188ED7) == 0 || (bTracingEnabled = 1, (qword_1C006E798 & 0xFFFFFFFFFFE77128uLL) != 0) )
    bTracingEnabled = 0;
  g_OldAnyKeywords = v5;
}
