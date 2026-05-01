/*
 * XREFs of ?SetSizeConstraintOverridesPhysical@CApplicationFrameWrapper@@UEAAJPEAUtagSIZE@@0@Z @ 0x18004D410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetSizeConstraintOverridesPhysical(
        CApplicationFrameWrapper *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE *, struct tagSIZE *))(**((_QWORD **)this + 12) + 184LL))(
           *((_QWORD *)this + 12),
           a2,
           a3);
}
