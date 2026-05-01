/*
 * XREFs of ?GetWindow@ViewWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x180050B10
 * Callers:
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180031B50 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 * Callees:
 *     <none>
 */

HWND __fastcall ViewWrapperBase::GetWindow(ViewWrapperBase *this)
{
  return (HWND)*((_QWORD *)this + 32);
}
