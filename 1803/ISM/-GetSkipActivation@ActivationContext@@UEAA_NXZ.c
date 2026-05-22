/*
 * XREFs of ?GetSkipActivation@ActivationContext@@UEAA_NXZ @ 0x1800B9920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ActivationContext::GetSkipActivation(ActivationContext *this)
{
  return *((_BYTE *)this + 64);
}
