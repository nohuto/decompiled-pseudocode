/*
 * XREFs of ?IsInteractive@CProcess@@UEAAHXZ @ 0x180018B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsInteractive(CProcess *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 33) + 168LL) != 0;
}
