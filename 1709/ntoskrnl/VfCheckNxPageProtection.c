/*
 * XREFs of VfCheckNxPageProtection @ 0x1402767A0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1407A82D8 (VfCheckPageProtection.c)
 */

__int64 VfCheckNxPageProtection()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPageProtection();
  return result;
}
