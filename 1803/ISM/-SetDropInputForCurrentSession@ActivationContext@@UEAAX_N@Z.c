/*
 * XREFs of ?SetDropInputForCurrentSession@ActivationContext@@UEAAX_N@Z @ 0x1800B9910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ActivationContext::SetDropInputForCurrentSession(ActivationContext *this, char a2)
{
  *((_BYTE *)this + 66) = a2;
}
