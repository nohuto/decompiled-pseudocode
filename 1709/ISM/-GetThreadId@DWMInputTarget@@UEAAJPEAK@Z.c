/*
 * XREFs of ?GetThreadId@DWMInputTarget@@UEAAJPEAK@Z @ 0x180022090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::GetThreadId(DWMInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 19);
  return 0LL;
}
