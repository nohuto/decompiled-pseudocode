/*
 * XREFs of ?SetMinimumSize@CApplicationFrameWrapper@@UEAAJPEBUtagSIZE@@@Z @ 0x180016EA0
 * Callers:
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x180012D50 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     _lambda_66a9d43d200f66016d4a33826e7a51a3_::operator() @ 0x18008F8BC (_lambda_66a9d43d200f66016d4a33826e7a51a3_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetMinimumSize(CApplicationFrameWrapper *this, const struct tagSIZE *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct tagSIZE *))(**((_QWORD **)this + 14) + 80LL))(
           *((_QWORD *)this + 14),
           a2);
}
