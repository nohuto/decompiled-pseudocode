/*
 * XREFs of ?GetTsSessionId@CProcess@@UEAAKXZ @ 0x1800118F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetTsSessionId(CProcess *this)
{
  return *((unsigned int *)this + 51);
}
