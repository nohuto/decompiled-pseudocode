/*
 * XREFs of ?NotifyInvalidResource@CAtlasedRectsGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x180178880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedRectsGroup::NotifyInvalidResource(CAtlasedRectsGroup *this, const struct IDeviceResource *a2)
{
  CAtlasedRectsGroup::DeleteAllD2DCommandLists((CAtlasedRectsGroup *)((char *)this - 56));
}
