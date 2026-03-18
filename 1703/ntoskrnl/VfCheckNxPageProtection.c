/*
 * XREFs of VfCheckNxPageProtection @ 0x14024FF90
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x14076673C (VfCheckPageProtection.c)
 */

__int64 VfCheckNxPageProtection()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPageProtection();
  return result;
}
