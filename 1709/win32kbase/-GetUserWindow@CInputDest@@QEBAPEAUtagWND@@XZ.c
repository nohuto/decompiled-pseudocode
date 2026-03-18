/*
 * XREFs of ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C00DB258
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131458 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall CInputDest::GetUserWindow(CInputDest *this)
{
  if ( *((_DWORD *)this + 23) == 2 )
    return (struct tagWND *)*((_QWORD *)this + 10);
  else
    return 0LL;
}
