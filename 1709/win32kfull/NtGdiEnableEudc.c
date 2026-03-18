/*
 * XREFs of NtGdiEnableEudc @ 0x1C00BF0D0
 * Callers:
 *     <none>
 * Callees:
 *     GreEnableEUDC @ 0x1C00BF0E4 (GreEnableEUDC.c)
 */

__int64 __fastcall NtGdiEnableEudc(__int64 a1)
{
  return GreEnableEUDC(a1);
}
