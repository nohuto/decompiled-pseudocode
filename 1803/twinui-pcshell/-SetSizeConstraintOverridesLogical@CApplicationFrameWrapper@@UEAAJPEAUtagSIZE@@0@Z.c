/*
 * XREFs of ?SetSizeConstraintOverridesLogical@CApplicationFrameWrapper@@UEAAJPEAUtagSIZE@@0@Z @ 0x180016D90
 * Callers:
 *     _lambda_61a39d48d2d904a91076d611a129569d_::operator() @ 0x18008F64C (_lambda_61a39d48d2d904a91076d611a129569d_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetSizeConstraintOverridesLogical(
        CApplicationFrameWrapper *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE *, struct tagSIZE *))(**((_QWORD **)this + 14) + 192LL))(
           *((_QWORD *)this + 14),
           a2,
           a3);
}
