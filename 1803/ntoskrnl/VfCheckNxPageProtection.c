/*
 * XREFs of VfCheckNxPageProtection @ 0x1402A98C0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x140815308 (VfCheckPageProtection.c)
 */

__int64 VfCheckNxPageProtection()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPageProtection();
  return result;
}
