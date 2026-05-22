/*
 * XREFs of ?SetSkipActivation@ActivationContext@@UEAAX_N@Z @ 0x1800B9930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ActivationContext::SetSkipActivation(ActivationContext *this, char a2)
{
  *((_BYTE *)this + 64) = a2;
}
