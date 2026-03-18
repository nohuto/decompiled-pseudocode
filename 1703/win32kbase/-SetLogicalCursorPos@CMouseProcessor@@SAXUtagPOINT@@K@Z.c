/*
 * XREFs of ?SetLogicalCursorPos@CMouseProcessor@@SAXUtagPOINT@@K@Z @ 0x1C004980C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     UpdateLogicalCursorPos @ 0x1C012EFA0 (UpdateLogicalCursorPos.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00498B0 (PhysicalToLogicalDPIPoint.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C00728E0 (MonitorFlagsFromDpiAwarenessContext.c)
 */

void __fastcall CMouseProcessor::SetLogicalCursorPos(struct tagPOINT a1, char a2)
{
  char v2; // al
  __int64 v3; // r8
  struct tagPOINT *v4; // rdx
  char *v5; // rcx
  char *v6; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagPOINT v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v2 = a2;
  if ( (a2 & 0xE0) == 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v2 = MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    a1 = v8;
  }
  if ( (v2 & 0x20) != 0 )
  {
    PhysicalToLogicalDPIPoint((char *)gpsi + 5344, &v8, 64LL, 0LL);
    v6 = (char *)gpsi;
    v4 = &v8;
LABEL_8:
    v3 = 128LL;
    v5 = v6 + 5352;
    goto LABEL_6;
  }
  if ( v2 >= 0 )
  {
    *((struct tagPOINT *)gpsi + 668) = a1;
    v6 = (char *)gpsi;
    v4 = (struct tagPOINT *)((char *)gpsi + 5368);
    goto LABEL_8;
  }
  *((struct tagPOINT *)gpsi + 669) = a1;
  v3 = 64LL;
  v4 = (struct tagPOINT *)((char *)gpsi + 5368);
  v5 = (char *)gpsi + 5344;
LABEL_6:
  PhysicalToLogicalDPIPoint(v5, v4, v3, 0LL);
}
