/*
 * XREFs of ?GetDelegateSourceProcessId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x180029700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::GetDelegateSourceProcessId(DWMFocusedInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 16);
  return 0LL;
}
