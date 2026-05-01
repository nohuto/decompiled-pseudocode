/*
 * XREFs of ?put_IsHolographicActivation@ViewEventArgsForNavigationRequest@@UEAAJE@Z @ 0x1800F0DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForNavigationRequest::put_IsHolographicActivation(
        ViewEventArgsForNavigationRequest *this,
        char a2)
{
  *((_BYTE *)this + 24) = a2 != 0;
  return 0LL;
}
