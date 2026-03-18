/*
 * XREFs of ?GetQPCFrequency@CAnimation@@UEAA_KXZ @ 0x18003F9E0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18003FCC0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall CAnimation::GetQPCFrequency(CAnimation *this)
{
  return g_qpcFrequency;
}
