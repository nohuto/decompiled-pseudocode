/*
 * XREFs of ?QueryInterface@CDeviceTextureImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureImageSource::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CMILCOMBase *)(a1 - 24), a2, a3);
}
