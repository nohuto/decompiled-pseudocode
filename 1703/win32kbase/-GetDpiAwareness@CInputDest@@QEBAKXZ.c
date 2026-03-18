/*
 * XREFs of ?GetDpiAwareness@CInputDest@@QEBAKXZ @ 0x1C0047ED8
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00463B4 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall CInputDest::GetDpiAwareness(CInputDest *this)
{
  __int64 result; // rax

  result = W32GetCurrentThreadDpiAwarenessContext();
  if ( *((_DWORD *)this + 23) == 2 )
    return *(unsigned int *)(*((_QWORD *)this + 10) + 368LL);
  return result;
}
