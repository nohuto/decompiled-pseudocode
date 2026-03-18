/*
 * XREFs of GetDpiSetting @ 0x1C000EF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiSetting(__int64 a1, _DWORD *a2)
{
  *a2 = 96;
  return GetDpiSettingWithNoDefault();
}
