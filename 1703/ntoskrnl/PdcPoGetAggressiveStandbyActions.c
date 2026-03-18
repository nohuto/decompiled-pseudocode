/*
 * XREFs of PdcPoGetAggressiveStandbyActions @ 0x140569F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PdcPoGetAggressiveStandbyActions(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)PopAggressiveStandbyAppliedActions;
  *a1 = PopAggressiveStandbyAppliedActions;
  return result;
}
