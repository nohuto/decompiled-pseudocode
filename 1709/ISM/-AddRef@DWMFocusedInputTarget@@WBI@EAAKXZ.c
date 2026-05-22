/*
 * XREFs of ?AddRef@DWMFocusedInputTarget@@WBI@EAAKXZ @ 0x180012570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::AddRef(__int64 a1)
{
  return Win32kInterop::AddRef((Win32kInterop *)(a1 - 24));
}
