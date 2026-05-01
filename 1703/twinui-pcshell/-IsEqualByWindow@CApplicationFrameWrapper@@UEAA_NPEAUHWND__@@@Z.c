/*
 * XREFs of ?IsEqualByWindow@CApplicationFrameWrapper@@UEAA_NPEAUHWND__@@@Z @ 0x18004B020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationFrameWrapper::IsEqualByWindow(CApplicationFrameWrapper *this, HWND a2)
{
  return *((_QWORD *)this + 6) == (_QWORD)a2;
}
