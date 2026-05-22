/*
 * XREFs of ?AddRef@Win32kInterop@@WCA@EAAKXZ @ 0x1800125B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::AddRef(__int64 a1)
{
  return Win32kInterop::AddRef((Win32kInterop *)(a1 - 32));
}
