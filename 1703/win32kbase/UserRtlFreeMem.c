/*
 * XREFs of UserRtlFreeMem @ 0x1C0092070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UserRtlFreeMem(__int64 a1)
{
  return Win32FreePool(a1);
}
