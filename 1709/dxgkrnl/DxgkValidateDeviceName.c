/*
 * XREFs of DxgkValidateDeviceName @ 0x1C00FC010
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateDeviceName @ 0x1C00FC024 (DpiValidateDeviceName.c)
 */

__int64 __fastcall DxgkValidateDeviceName(const UNICODE_STRING *a1)
{
  return DpiValidateDeviceName(a1);
}
