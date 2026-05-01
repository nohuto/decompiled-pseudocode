/*
 * XREFs of ?GetAppUserModelId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18007C900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWin32ApplicationView::GetAppUserModelId(CWin32ApplicationView *this, unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 21) + 32LL))(
           *((_QWORD *)this + 21),
           a2);
}
