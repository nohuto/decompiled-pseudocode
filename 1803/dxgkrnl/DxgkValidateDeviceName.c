/*
 * XREFs of DxgkValidateDeviceName @ 0x1C009F9D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateDeviceName @ 0x1C009F9E4 (DpiValidateDeviceName.c)
 */

__int64 __fastcall DxgkValidateDeviceName(const UNICODE_STRING *a1)
{
  return DpiValidateDeviceName(a1);
}
