/*
 * XREFs of ?GetProcessId@DWMInputTarget@@UEAAJPEAK@Z @ 0x180018B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::GetProcessId(DWMInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 14);
  return 0LL;
}
