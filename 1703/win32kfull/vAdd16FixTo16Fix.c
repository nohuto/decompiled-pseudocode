/*
 * XREFs of vAdd16FixTo16Fix @ 0x1C011D7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vAdd16FixTo16Fix(_WORD *a1, _WORD *a2)
{
  __int64 result; // rax

  *a1 += *a2;
  result = (unsigned __int16)a2[1];
  a1[1] += result;
  return result;
}
