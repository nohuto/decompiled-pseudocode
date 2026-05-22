/*
 * XREFs of ?SetEatInputMessage@ActivationContext@@UEAAX_N@Z @ 0x1800B9950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ActivationContext::SetEatInputMessage(ActivationContext *this, char a2)
{
  *((_BYTE *)this + 65) = a2;
}
