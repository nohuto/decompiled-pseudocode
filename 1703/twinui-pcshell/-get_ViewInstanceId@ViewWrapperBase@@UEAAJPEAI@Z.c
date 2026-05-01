/*
 * XREFs of ?get_ViewInstanceId@ViewWrapperBase@@UEAAJPEAI@Z @ 0x180115130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::get_ViewInstanceId(ViewWrapperBase *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 31);
  return *((_DWORD *)this + 31) == 0 ? 0x80070490 : 0;
}
