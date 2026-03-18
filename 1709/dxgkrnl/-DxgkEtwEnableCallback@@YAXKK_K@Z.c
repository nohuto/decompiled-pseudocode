/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00133D4
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00132E0 (McGenControlCallbackV2.c)
 * Callees:
 *     McTemplateK0qxq @ 0x1C0026CA4 (McTemplateK0qxq.c)
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C01AA050 (-DxgkDisableStablePowerState@@YAXXZ.c)
 *     ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C01AA06C (-DxgkEnableClockCalibration@@YAXE@Z.c)
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C01AA090 (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 *     ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C01AA0B4 (-DxgkEnableStablePowerState@@YAXXZ.c)
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C01AA0D0 (-DxgkReportGlobalState@@YAXXZ.c)
 *     DpiControlEtwLogging @ 0x1C01DBB54 (DpiControlEtwLogging.c)
 */

void __fastcall DxgkEtwEnableCallback(int a1, char a2, int a3, int a4)
{
  bool v5; // cl
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int8 v8; // cl

  if ( a1 != 2 || !bTracingEnabled )
  {
    if ( qword_1C005F010 == g_OldAnyKeywords )
      goto LABEL_11;
    v5 = (qword_1C005F010 & 0x1000) != 0 && (qword_1C005F010 & 0x2000) == 0;
    if ( (g_OldAnyKeywords & 0x1000) != 0 )
    {
      if ( (qword_1C005F010 & 0x1000) == 0 )
        DxgkDisableStablePowerState();
    }
    else if ( (qword_1C005F010 & 0x1000) != 0 && v5 )
    {
      DxgkEnableStablePowerState();
    }
    v6 = qword_1C005F010;
    v7 = 1024LL;
    if ( (g_OldAnyKeywords & 0x400) != 0 )
    {
      if ( (qword_1C005F010 & 0x400) != 0 )
        goto LABEL_9;
      v6 = 0LL;
    }
    else
    {
      if ( (qword_1C005F010 & 0x400) == 0 )
        goto LABEL_9;
      LOBYTE(v6) = 1;
    }
    LOBYTE(v7) = a2;
    DpiControlEtwLogging(v6, qword_1C005F010 & 0x3000, v7);
LABEL_9:
    if ( (g_OldAnyKeywords & 0x4000) != 0 )
    {
      if ( (qword_1C005F010 & 0x4000) != 0 )
        goto LABEL_11;
      DxgkEnableFormattingBuffer(0);
      v8 = 0;
    }
    else
    {
      if ( (qword_1C005F010 & 0x4000) == 0 )
        goto LABEL_11;
      DxgkEnableFormattingBuffer(1);
      v8 = 1;
    }
    DxgkEnableClockCalibration(v8);
    goto LABEL_11;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qxq(2, a2, a3, a4, qword_1C005F010, a2);
  DxgkReportGlobalState();
LABEL_11:
  if ( (qword_1C005F010 & 0x21C8ED7) == 0 || (bTracingEnabled = 1, (qword_1C005F018 & 0xFFFFFFFFFDE37128uLL) != 0) )
    bTracingEnabled = 0;
  g_OldAnyKeywords = qword_1C005F010;
}
