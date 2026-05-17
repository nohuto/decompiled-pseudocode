/*
 * XREFs of sub_1800A9F70 @ 0x1800A9F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A9F70(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xsaves  byte ptr [rcx] }
  return result;
}
