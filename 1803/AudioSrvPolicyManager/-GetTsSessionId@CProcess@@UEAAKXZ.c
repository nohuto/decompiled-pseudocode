/*
 * XREFs of ?GetTsSessionId@CProcess@@UEAAKXZ @ 0x180019910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetTsSessionId(CProcess *this)
{
  return *((unsigned int *)this + 51);
}
