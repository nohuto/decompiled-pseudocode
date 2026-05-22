/*
 * XREFs of ?AddRef@Win32kInterop@@WBA@EAAKXZ @ 0x180012540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::AddRef(__int64 a1)
{
  return Win32kInterop::AddRef((Win32kInterop *)(a1 - 16));
}
