/*
 * XREFs of ?SetPresentedWindow@CApplicationFrameWrapper@@UEAAJPEAUHWND__@@@Z @ 0x180016EC0
 * Callers:
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50 (_lambda_8e77f3627fbb508724cf2b62e627d849_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetPresentedWindow(CApplicationFrameWrapper *this, HWND a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), a2);
}
