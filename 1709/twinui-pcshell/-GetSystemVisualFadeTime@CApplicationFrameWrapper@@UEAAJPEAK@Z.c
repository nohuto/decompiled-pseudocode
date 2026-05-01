/*
 * XREFs of ?GetSystemVisualFadeTime@CApplicationFrameWrapper@@UEAAJPEAK@Z @ 0x18004D3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::GetSystemVisualFadeTime(CApplicationFrameWrapper *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 12) + 168LL))(
           *((_QWORD *)this + 12),
           a2);
}
