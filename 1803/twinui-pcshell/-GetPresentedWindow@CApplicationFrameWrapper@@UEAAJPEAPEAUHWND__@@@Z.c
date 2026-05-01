/*
 * XREFs of ?GetPresentedWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x18012A020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::GetPresentedWindow(CApplicationFrameWrapper *this, HWND *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14), a2);
}
