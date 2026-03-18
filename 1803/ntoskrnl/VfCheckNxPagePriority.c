/*
 * XREFs of VfCheckNxPagePriority @ 0x1402A98A0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x140815260 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
