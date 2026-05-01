/*
 * XREFs of ?SetApplicationId@CApplicationFrameWrapper@@UEAAJPEBGH@Z @ 0x180016E60
 * Callers:
 *     _lambda_aa8acc1eed1698d6ba192654be930d00_::operator() @ 0x18008CF5C (_lambda_aa8acc1eed1698d6ba192654be930d00_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetApplicationId(
        CApplicationFrameWrapper *this,
        const unsigned __int16 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)this + 14) + 72LL))(
           *((_QWORD *)this + 14),
           a2);
}
