/*
 * XREFs of ?Release@Win32kInterop@@W7EAAKXZ @ 0x180012550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::Release(__int64 a1)
{
  return Win32kInterop::Release((Win32kInterop *)(a1 - 8));
}
