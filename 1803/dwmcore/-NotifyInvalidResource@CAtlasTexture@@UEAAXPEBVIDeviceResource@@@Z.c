/*
 * XREFs of ?NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801EC1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CAtlasTexture::NotifyInvalidResource(CAtlasTexture *this, const struct IDeviceResource *a2)
{
  CAtlasTexture::DestroyResources(this);
}
