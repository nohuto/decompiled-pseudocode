/*
 * XREFs of ?GetKernelHandle@CChannel@@UEAAIXZ @ 0x1800C1C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CChannel::GetKernelHandle(CChannel *this)
{
  return *((unsigned int *)this + 14);
}
