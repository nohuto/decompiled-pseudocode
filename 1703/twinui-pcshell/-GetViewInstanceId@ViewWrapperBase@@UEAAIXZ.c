/*
 * XREFs of ?GetViewInstanceId@ViewWrapperBase@@UEAAIXZ @ 0x180113360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::GetViewInstanceId(ViewWrapperBase *this)
{
  return *((unsigned int *)this + 31);
}
