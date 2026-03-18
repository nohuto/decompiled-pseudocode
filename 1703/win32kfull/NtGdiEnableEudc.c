/*
 * XREFs of NtGdiEnableEudc @ 0x1C0008EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiEnableEudc(__int64 a1)
{
  return GreEnableEUDC(a1);
}
