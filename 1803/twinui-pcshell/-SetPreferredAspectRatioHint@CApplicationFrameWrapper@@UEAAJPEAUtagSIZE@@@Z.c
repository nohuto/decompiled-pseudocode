/*
 * XREFs of ?SetPreferredAspectRatioHint@CApplicationFrameWrapper@@UEAAJPEAUtagSIZE@@@Z @ 0x180016D70
 * Callers:
 *     _lambda_46f447173730af1e316e4d8e7839b9be_::operator() @ 0x18008FE3C (_lambda_46f447173730af1e316e4d8e7839b9be_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetPreferredAspectRatioHint(
        CApplicationFrameWrapper *this,
        struct tagSIZE *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE *))(**((_QWORD **)this + 14) + 200LL))(
           *((_QWORD *)this + 14),
           a2);
}
