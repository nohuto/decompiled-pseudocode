/*
 * XREFs of ?IsInteractive@CProcess@@UEAAHXZ @ 0x180011680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsInteractive(CProcess *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 32) + 168LL) != 0;
}
