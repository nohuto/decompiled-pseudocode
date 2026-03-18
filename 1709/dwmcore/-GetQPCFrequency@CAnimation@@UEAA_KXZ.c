/*
 * XREFs of ?GetQPCFrequency@CAnimation@@UEAA_KXZ @ 0x18002CDA0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall CAnimation::GetQPCFrequency(CAnimation *this)
{
  return g_qpcFrequency;
}
