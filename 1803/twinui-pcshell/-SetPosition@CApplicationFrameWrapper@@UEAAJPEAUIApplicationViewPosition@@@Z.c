/*
 * XREFs of ?SetPosition@CApplicationFrameWrapper@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180016EE0
 * Callers:
 *     _lambda_75ecb61212cbd325c11a4ad813499630_::operator() @ 0x18008B43C (_lambda_75ecb61212cbd325c11a4ad813499630_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetPosition(
        CApplicationFrameWrapper *this,
        struct IApplicationViewPosition *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewPosition *))(**((_QWORD **)this + 14) + 32LL))(
           *((_QWORD *)this + 14),
           a2);
}
