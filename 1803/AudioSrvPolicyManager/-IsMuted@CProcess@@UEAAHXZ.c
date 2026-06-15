/*
 * XREFs of ?IsMuted@CProcess@@UEAAHXZ @ 0x180018B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsMuted(CProcess *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 33) + 176LL) == 0;
}
