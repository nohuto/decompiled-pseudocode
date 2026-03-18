/*
 * XREFs of VfCheckNxPagePriority @ 0x140276780
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x1407A8230 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
