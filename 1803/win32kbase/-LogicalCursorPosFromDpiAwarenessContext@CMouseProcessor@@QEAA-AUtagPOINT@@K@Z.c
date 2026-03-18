/*
 * XREFs of ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0039E64
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0133FBC (-CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x1C0057AE0 (PhysicalToLogicalDPIPoint.c)
 */

struct tagPOINT __fastcall CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(
        CMouseProcessor *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)a2 = 0LL;
  if ( (((unsigned __int16)((unsigned int)a3 >> 8) ^ (unsigned __int16)(*((_DWORD *)this + 27) >> 8)) & 0x1FF) != 0 )
  {
    PhysicalToLogicalDPIPoint(a2, (char *)gpsi + 4960, a3, 0LL);
  }
  else
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 25);
    *(_DWORD *)(a2 + 4) = *((_DWORD *)this + 26);
  }
  return (struct tagPOINT)a2;
}
