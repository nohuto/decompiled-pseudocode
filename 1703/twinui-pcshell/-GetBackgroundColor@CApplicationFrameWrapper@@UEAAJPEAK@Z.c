/*
 * XREFs of ?GetBackgroundColor@CApplicationFrameWrapper@@UEAAJPEAK@Z @ 0x18004ADD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::GetBackgroundColor(CApplicationFrameWrapper *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 10) + 152LL))(
           *((_QWORD *)this + 10),
           a2);
}
