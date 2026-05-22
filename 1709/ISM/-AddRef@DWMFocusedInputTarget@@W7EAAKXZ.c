/*
 * XREFs of ?AddRef@DWMFocusedInputTarget@@W7EAAKXZ @ 0x1800125E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::AddRef(__int64 a1)
{
  return Win32kInterop::AddRef((Win32kInterop *)(a1 - 8));
}
