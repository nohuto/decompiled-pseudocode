/*
 * XREFs of ?GetSystemVisualFadeTime@CApplicationFrameWrapper@@UEAAJPEAK@Z @ 0x180016DF0
 * Callers:
 *     _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x1800879B8 (_lambda_ca324c265ed58b3d9541d2204f682216_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::GetSystemVisualFadeTime(CApplicationFrameWrapper *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 168LL))(
           *((_QWORD *)this + 14),
           a2);
}
