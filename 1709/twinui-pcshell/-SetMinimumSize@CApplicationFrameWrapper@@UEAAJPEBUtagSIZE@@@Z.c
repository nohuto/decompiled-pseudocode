/*
 * XREFs of ?SetMinimumSize@CApplicationFrameWrapper@@UEAAJPEBUtagSIZE@@@Z @ 0x18004D1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetMinimumSize(CApplicationFrameWrapper *this, const struct tagSIZE *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct tagSIZE *))(**((_QWORD **)this + 12) + 80LL))(
           *((_QWORD *)this + 12),
           a2);
}
