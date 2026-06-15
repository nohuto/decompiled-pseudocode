/*
 * XREFs of ?HasTerminated@CProcess@@UEAAHXZ @ 0x180019C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::HasTerminated(CProcess *this)
{
  return *((_DWORD *)this + 114) != 0;
}
