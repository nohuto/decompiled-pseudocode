/*
 * XREFs of sub_1800A9F90 @ 0x1800A9F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A9F90(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xrstors byte ptr [rcx] }
  return result;
}
