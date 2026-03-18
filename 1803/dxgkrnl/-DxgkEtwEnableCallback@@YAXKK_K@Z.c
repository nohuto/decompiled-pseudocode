/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0030C20
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0030DD0 (McGenControlCallbackV2.c)
 * Callees:
 *     McTemplateK0qxq @ 0x1C00310E8 (McTemplateK0qxq.c)
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C019DCE4 (-DxgkDisableStablePowerState@@YAXXZ.c)
 *     ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C019DD00 (-DxgkEnableClockCalibration@@YAXE@Z.c)
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C019DD24 (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 *     ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C019DD48 (-DxgkEnableStablePowerState@@YAXXZ.c)
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C019DD64 (-DxgkReportGlobalState@@YAXXZ.c)
 *     DpiControlEtwLogging @ 0x1C01EE4DC (DpiControlEtwLogging.c)
 */

void __fastcall DxgkEtwEnableCallback(int a1, char a2, int a3, int a4)
{
  char v5; // bl
  bool v6; // cl
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // cl

  v5 = 1;
  if ( a1 != 2 || !bTracingEnabled )
  {
    if ( qword_1C0079010 == g_OldAnyKeywords )
      goto LABEL_29;
    v6 = (qword_1C0079010 & 0x1000) != 0 && (qword_1C0079010 & 0x2000) == 0;
    if ( (g_OldAnyKeywords & 0x1000) != 0 )
    {
      if ( (qword_1C0079010 & 0x1000) == 0 )
        DxgkDisableStablePowerState();
    }
    else if ( (qword_1C0079010 & 0x1000) != 0 && v6 )
    {
      DxgkEnableStablePowerState();
    }
    v7 = qword_1C0079010;
    v8 = 1024LL;
    if ( (g_OldAnyKeywords & 0x400) != 0 )
    {
      if ( (qword_1C0079010 & 0x400) != 0 )
        goto LABEL_23;
      v7 = 0LL;
    }
    else
    {
      if ( (qword_1C0079010 & 0x400) == 0 )
        goto LABEL_23;
      LOBYTE(v7) = 1;
    }
    LOBYTE(v8) = a2;
    DpiControlEtwLogging(v7, qword_1C0079010 & 0x3000, v8);
LABEL_23:
    if ( (g_OldAnyKeywords & 0x4000) != 0 )
    {
      if ( (qword_1C0079010 & 0x4000) != 0 )
        goto LABEL_29;
      DxgkEnableFormattingBuffer(0);
      v9 = 0;
    }
    else
    {
      if ( (qword_1C0079010 & 0x4000) == 0 )
        goto LABEL_29;
      DxgkEnableFormattingBuffer(1);
      v9 = 1;
    }
    DxgkEnableClockCalibration(v9);
    goto LABEL_29;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qxq(2, a2, a3, a4, qword_1C0079010, a2);
  DxgkReportGlobalState();
LABEL_29:
  if ( (qword_1C0079010 & 0x21C8ED7) == 0 || (qword_1C0079018 & 0xFFFFFFFFFDE37128uLL) != 0 )
    v5 = 0;
  bTracingEnabled = v5;
  g_OldAnyKeywords = qword_1C0079010;
}
