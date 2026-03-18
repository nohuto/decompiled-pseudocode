/*
 * XREFs of VfCheckNxPoolType @ 0x14024FFB0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1407667E0 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
