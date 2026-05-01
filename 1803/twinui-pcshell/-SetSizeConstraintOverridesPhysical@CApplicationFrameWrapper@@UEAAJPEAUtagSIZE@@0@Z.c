/*
 * XREFs of ?SetSizeConstraintOverridesPhysical@CApplicationFrameWrapper@@UEAAJPEAUtagSIZE@@0@Z @ 0x180016DB0
 * Callers:
 *     _lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2_::operator() @ 0x18008F73C (_lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetSizeConstraintOverridesPhysical(
        CApplicationFrameWrapper *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE *, struct tagSIZE *))(**((_QWORD **)this + 14) + 184LL))(
           *((_QWORD *)this + 14),
           a2,
           a3);
}
